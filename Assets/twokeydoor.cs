using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class twokeydoor : MonoBehaviour
{
    [SerializeField] Vector3 pointA = new Vector3(0, 0, 0);
    bool goingPointA = false;
    [SerializeField] Vector3 pointB = new Vector3(0, 3, 0);
    bool goingPointB = false;
    [SerializeField] float speed = 1;
    float t;

    bool key1flag = false;
    bool key2flag = false;

    bool at_Point_A = true;

    // Update is called once per frame
    void Update()
    {
        t += Time.deltaTime * speed;
        if ((goingPointA) && (!at_Point_A))
        {
            transform.position = Vector3.Lerp(pointA, pointB, t);
            at_Point_A = true;
        }
        if ((goingPointB) && (at_Point_A))
        {
            transform.position = Vector3.Lerp(pointB, pointA, t);
            at_Point_A = false;
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
        key1flag = true;
        if (key2flag == true){
            toPointB();
        }
    }
    public void keyOneOut()
    {
        key1flag = false;
        toPointA();
    }
    public void keyTwoIn()
    {
        key2flag = true;
        if (key1flag == true)
        {
            toPointB();
        }
    }
    public void keyTwoOut()
    {
        key2flag = false;
        toPointA();
    }

    public void toPointB()
    {
        if (!goingPointA)
        {
            goingPointB = true;
        }
    }

    public void toPointA()
    {
        if (!goingPointB)
        {
            goingPointA = true;
        }
    }
}
