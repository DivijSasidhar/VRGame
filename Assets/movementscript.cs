using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class movementscript : MonoBehaviour
{
    [SerializeField] Vector3 pointA = new Vector3(0, 0, 0);
    bool goingPointA = false;
    [SerializeField] Vector3 pointB = new Vector3(0, 3, 0);
    bool goingPointB = false;
    [SerializeField] float speed = 1;
    float t;

    // Update is called once per frame
    void Update()
    {
        if (goingPointA) {
            transform.position = Vector3.Lerp(pointA, pointB, t);
            t += Time.deltaTime * speed;

        }
        if (goingPointB) {
            transform.position = Vector3.Lerp(pointB, pointA, t);
            t += Time.deltaTime * speed;

        }
        if (t >= 1) {
            goingPointA = false;
            goingPointB = false;
            t = 0;
        }
    }

    public void toPointB()
    {
        if (!goingPointA){
            goingPointB = true;
        }
    }
    
    public void toPointA()
    {
        if (!goingPointB){
            goingPointA = true;
    }
}
}
