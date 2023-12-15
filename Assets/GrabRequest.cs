using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Netcode;
using UnityEngine.XR.Interaction.Toolkit;
using Unity.Netcode.Components;

public class GrabRequest : NetworkBehaviour
{

    private XRGrabInteractable xRGrabInteractable;
    private NetworkObject characterObject;

    // Start is called before the first frame update
    void Start()
    {

        xRGrabInteractable = GetComponent<XRGrabInteractable>();
        characterObject = GetComponent<NetworkObject>();
    }

    // Update is called once per frame
    void Update()
    {

        if (xRGrabInteractable.isSelected)
        {
            if (IsClient && !IsOwner)
            {
                Debug.Log("Object selected");
                RequestOwnershipServerRpc(new ServerRpcParams());
                Debug.Log(NetworkManager.LocalClientId);
            }
        
        }
       
    }

    [ServerRpc(RequireOwnership = false)]
    public void RequestOwnershipServerRpc(ServerRpcParams serverRpcParams = default)
    {
      var clientId = serverRpcParams.Receive.SenderClientId;
      
      Debug.Log(clientId+ "from serverRPC");
      if (NetworkManager.ConnectedClients.ContainsKey(clientId))
      {
        var client = NetworkManager.ConnectedClients[clientId];
        var clientIdToAssign = client.ClientId;
        characterObject.ChangeOwnership(clientIdToAssign);
        Debug.Log("ownership changed");
      }
    }
}
