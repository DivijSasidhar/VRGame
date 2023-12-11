using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OneKeyDoor : MonoBehaviour
{
    bool success;
    [SerializeField] Vector3 origin = new Vector3(0, 0, 0);
    bool goingPointA = false;
    [SerializeField] Vector3 destination = new Vector3(0, 0, 0);  
    [SerializeField] float speed = 1;
    float t;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
     void Update()
    {
        if ((goingPointA) & (!success))
        {
            t += Time.deltaTime * speed;
            transform.position = Vector3.Lerp(origin, destination, t);
        }
        if (t >= 1)
        {
            goingPointA = false;
            success = true;
            t = 0;
        }
    }

    public void KeyIn()
    {
        goingPointA = true;
    }
}
