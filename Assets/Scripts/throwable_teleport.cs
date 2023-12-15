using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class throwable_teleport : MonoBehaviour
{
    [SerializeField] Vector3 start = new Vector3(0, 0, 0);
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Teleport()
    {
        transform.position = start;
        GetComponent<Rigidbody>().velocity = Vector3.zero;
        GetComponent<Rigidbody>().angularVelocity = Vector3.zero;
        GetComponent<Rigidbody>().Sleep();


    }
}
