using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class twokeydoor : MonoBehaviour
{
    [SerializeField] Vector3 origin = new Vector3(0, 0, 0);
    bool goingPointA = false;
    [SerializeField] Vector3 destination = new Vector3(0, 3, 0);
    [SerializeField] float speed = 1;
    float t;
    bool success;

    bool key1flag = false;
    bool key2flag = false;

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

    public void keyOneIn()
    {
        key1flag = true;
        if (key2flag == true){
            toPointA();
        }
    }
    public void keyOneOut()
    {
        key1flag = false;
    }
    public void keyTwoIn()
    {
        key2flag = true;
        if (key1flag == true)
        {
            toPointA();
        }
    }
    public void keyTwoOut()
    {
        key2flag = false;
    }

    public void toPointA()
    {
        goingPointA = true;
    }
}
