using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
public class collidertest : MonoBehaviour
{

    [SerializeField]
    [Tooltip("Events to trigger when the collsion is entered")]
    UnityEvent m_OnColEnter;

    /// <summary>
    /// Events to trigger when the collision is entered
    /// </summary>
    public UnityEvent onColEnter => m_OnColEnter;


    [SerializeField]
    [Tooltip("Events to trigger when the collsion is exited")]
    UnityEvent m_OnColExit;

    /// <summary>
    /// Events to trigger when the collision is exited
    /// </summary>
    public UnityEvent onColExit => m_OnColExit;


    // Gets called at the start of the collision 
    void OnCollisionEnter(Collision collision)
    {
        Debug.Log("Entered collision with " + collision.gameObject.name);
        onColEnter.Invoke();
    }

    // Gets called during the collision
    void OnCollisionStay(Collision collision)
    {
        Debug.Log("Colliding with " + collision.gameObject.name);
    }

    // Gets called when the object exits the collision
    void OnCollisionExit(Collision collision)
    {
        Debug.Log("Exited collision with " + collision.gameObject.name);
        onColExit.Invoke();
    }
}