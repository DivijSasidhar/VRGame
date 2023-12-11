using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Laser : MonoBehaviour
{
    [SerializeField]
    int maxBounces;

    private LineRenderer lr;
    [SerializeField]
    private Transform startPoint;

    private GameObject hitObject;

    void Start()
    {
        lr = GetComponent<LineRenderer>();
        lr.SetPosition(0, startPoint.position);
    }

    void Update()
    {
        CastLaser(transform.position, -transform.forward);
    }

    void CastLaser(Vector3 position, Vector3 direction)
    {
        lr.SetPosition(0, startPoint.position);

        for(int i=0; i<maxBounces; i++)
        {
            Ray ray = new Ray(position, direction);
            RaycastHit hit;

            if(Physics.Raycast( ray, out hit, 300, 1))
            {
                position = hit.point;
                direction = Vector3.Reflect(direction, hit.normal);
                lr.SetPosition(i + 1, hit.point);

                if (hit.transform.tag == "Laser Activatable")
                {
                    hitObject = hit.collider.gameObject;
                    hitObject.GetComponent<Laser_Activatable>().Activate();
                }
                if (hit.transform.tag != "Mirror")
                {
                    for(int j = (i+1); j<=maxBounces; j++)
                    {
                        lr.SetPosition(j, hit.point);
                    }
                    break;
                }
            }
        }
    }

}