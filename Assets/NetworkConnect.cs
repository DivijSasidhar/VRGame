using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Netcode;
using Unity.Services.Authentication;
using Unity.Services.Core;
using Unity.Services.Relay;
using Unity.Services.Relay.Models;
using Unity.Netcode.Transports.UTP;
using Unity.Services.Lobbies;
using Unity.Services.Lobbies.Models;
using UnityEngine.Events;

public class NetworkConnect : MonoBehaviour
{
    
    public int maxConnection = 2;
    public UnityTransport transport;

    [SerializeField]
    UnityEvent m_OnConnect;
    /// <summary>
    /// Events to trigger when the collision is entered
    /// </summary>
    public UnityEvent onConnect => m_OnConnect;
    private Lobby currentLobby;

    private async void Awake()
    {
        await UnityServices.InitializeAsync();
        await AuthenticationService.Instance.SignInAnonymouslyAsync();
    }
    // Start is called before the first frame update
    public async void Create()
    {
        Allocation allocation = await RelayService.Instance.CreateAllocationAsync(maxConnection);
        string newJoinCode = await RelayService.Instance.GetJoinCodeAsync(allocation.AllocationId);

        Debug.LogError(newJoinCode);

        transport.SetHostRelayData(allocation.RelayServer.IpV4, (ushort)allocation.RelayServer.Port, allocation.AllocationIdBytes, allocation.Key, allocation.ConnectionData);
        
        CreateLobbyOptions lobbyOptions = new CreateLobbyOptions();
        lobbyOptions.IsPrivate = false;
        lobbyOptions.Data = new Dictionary<string, DataObject>();
        DataObject dataObject = new DataObject(DataObject.VisibilityOptions.Public, newJoinCode);
        lobbyOptions.Data.Add("JOIN CODE", dataObject);

        currentLobby = await Lobbies.Instance.CreateLobbyAsync("Lobby Name", maxConnection, lobbyOptions);

        NetworkManager.Singleton.StartHost();
    }

    public async void Join()
    {

        currentLobby = await Lobbies.Instance.QuickJoinLobbyAsync();

        
        Debug.LogError(currentLobby.Data["JOIN CODE"].Value);

        string relayJoinCode = currentLobby.Data["JOIN CODE"].Value;

        Debug.LogError(relayJoinCode);

        JoinAllocation allocation = await RelayService.Instance.JoinAllocationAsync(relayJoinCode);
        
        transport.SetClientRelayData(allocation.RelayServer.IpV4, (ushort)allocation.RelayServer.Port, allocation.AllocationIdBytes, allocation.Key, allocation.ConnectionData, allocation.HostConnectionData);
        
        NetworkManager.Singleton.StartClient();
        Debug.LogError("Client Joined");
        onConnect.Invoke();
    }


}
