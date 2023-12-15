using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class throwablesdoor : MonoBehaviour
{
    int[] triggers = new int[] { 0, 0, 0, 0, 0, 0, 0, 0};

    [SerializeField] Vector3 origin = new Vector3(0, 0, 0);
    bool goingPointA = false;
    [SerializeField] Vector3 destination = new Vector3(0, 3, 0);
    [SerializeField] float speed = 1;
    float t;
    bool success;


    // Update is called once per frame
    void Update()
    {
        if ((goingPointA) && (!success))
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


    public void TargetUpdate(int target_number)
    {
        triggers[target_number] = 1;
        int sum = 0;
        for (int i = 0; i < triggers.Length; i++)
        {
            sum += triggers[i];
        }

        if (sum == 8)
        {
            goingPointA = true;
        } 

    }
}
