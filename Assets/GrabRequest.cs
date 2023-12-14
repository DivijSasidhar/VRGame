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
            characterObject.ChangeOwnership(NetworkManager.LocalClientId);
            Debug.Log("changed owner");
        }
    }
}
