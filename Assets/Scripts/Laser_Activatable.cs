using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class Laser_Activatable : MonoBehaviour
{

    [SerializeField]
    [Tooltip("Events to trigger when the object is activated")]
    UnityEvent m_OnActivate;
    /// <summary>
    /// Events to trigger when the collision is entered
    /// </summary>
    public UnityEvent onActivate => m_OnActivate;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Activate()
    {
        onActivate.Invoke();
    }
}
