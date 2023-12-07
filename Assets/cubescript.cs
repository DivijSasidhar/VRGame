using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class cubescript : MonoBehaviour
{
    
    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
    }
    public void Up(){
        transform.Translate(0, 4, 0);
    }
    public void Down(){
        transform.Translate(0, -4, 0);
    }

}
