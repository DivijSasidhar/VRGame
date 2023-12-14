using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Netcode;
using UnityEngine.XR.Interaction.Toolkit;

public class NetworkPlayer : NetworkBehaviour
{

    public Transform root;
    public Transform head;
    public Transform leftHand;
    public Transform rightHand;

    public Renderer[] meshToDisable;

    public override void OnNetworkSpawn()
    {
        base.OnNetworkSpawn();
        if(IsOwner)
        {
            foreach (var item in meshToDisable)
            {
                item.enabled = false;
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        if(VRRigReferences.Singleton != null && IsOwner)
        {
        root.position = VRRigReferences.Singleton.root.position;
        root.rotation = VRRigReferences.Singleton.root.rotation;

        head.position = VRRigReferences.Singleton.head.position;
        head.rotation = VRRigReferences.Singleton.head.rotation;

        leftHand.position = VRRigReferences.Singleton.leftHand.position;
        leftHand.rotation = VRRigReferences.Singleton.leftHand.rotation;

        rightHand.position = VRRigReferences.Singleton.rightHand.position;
        rightHand.rotation = VRRigReferences.Singleton.rightHand.rotation;
        }
    }

    public void OnSelectGrabbable(SelectEnterEventArgs eventArgs)
    {

        if (IsClient)
        {
            ulong localClientId = NetworkManager.Singleton.LocalClientId;

            NetworkObject networkObjectSelected = eventArgs.interactableObject.transform.GetComponent<NetworkObject>();
            if(networkObjectSelected != null)
            {
                RequestGrabbableOwnershipServerRpc(localClientId, networkObjectSelected);
            }
        }
        
    }

    [ServerRpc]
    public void RequestGrabbableOwnershipServerRpc(ulong newOwnerClientId, NetworkObjectReference networkObjectReference)
    {
        if(networkObjectReference.TryGet(out NetworkObject networkObject))
        {
            networkObject.ChangeOwnership(newOwnerClientId);
        }
       
    }
}
