using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class twokeydoor : MonoBehaviour
{
    [SerializeField] Vector3 origin = new Vector3(0, 0, 0);
    bool goingPointA = false;
    bool goingPointB = false;

    [SerializeField] Vector3 destination = new Vector3(0, 3, 0);
    [SerializeField] float speed = 1;
    float t;

    bool key1flag = false;
    bool key2flag = false;

    // Update is called once per frame
    void Update()
    {
        if ((key1flag) & (key2flag)) {
            toPointA();
        }
        if ((goingPointA) & (!goingPointB))
        {
            t += Time.deltaTime * speed;
            transform.position = Vector3.Lerp(origin, destination, t);
        }
        if ((!goingPointA) & (goingPointB))
        {
            t += Time.deltaTime * speed;
            transform.position = Vector3.Lerp(destination, origin, t);
        }
        if (t >= 1)
        {
            goingPointA = false;
            goingPointB = false;
            t = 0;
        }
    }

    public void keyOneIn()
    {
        toPointA();    
    }
    public void keyOneOut()
    {
        key1flag = false;
    }
    public void keyTwoIn()
    {
        key2flag = true;
    }
    public void keyTwoOut()
    {
        key2flag = false;
    }

    public void toPointA()
    {
        goingPointA = true;
    }

    public void toPointB()
    {
        goingPointB = true;
}
    }

