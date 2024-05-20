using System.Collections;
using Normal.Realtime;
using UnityEngine.XR.Interaction.Toolkit;
using System.Collections.Generic;
using UnityEngine;

public class NormalGrabRequest : MonoBehaviour
{
    private RealtimeTransform realtimeTransform;
    private XRGrabInteractable xRGrabInteractable;
    // Start is called before the first frame update
    void Start()
    {
        realtimeTransform = GetComponent<RealtimeTransform>();
        xRGrabInteractable = GetComponent<XRGrabInteractable>();
    }

    // Update is called once per frame
    void Update()
    {
        if (xRGrabInteractable.isSelected)
        {
            realtimeTransform.RequestOwnership();
        }

        
    }
}
