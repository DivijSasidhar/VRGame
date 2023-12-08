using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class codetest : MonoBehaviour
{
    [SerializeField]
    [Tooltip("Events to trigger when the code is correct")]
    UnityEvent m_OnCorrect;

    // Most likely here would be just the open door script
    /// <summary>
    /// Events to trigger when the code is correct
    /// </summary>
    public UnityEvent onCorrect => m_OnCorrect;

    //The correct combination
    System.Random rnd = new System.Random();
    int code = 0;
    
    //The user inputed combination
    int entered = 0;

    int count = 0;

    // Start is called before the first frame update
    void Start(){
        //Generate the combination
        int code = rnd.Next(0,10000);
        //DISTRIBUTE THIS COMBINATION SOMEHOW
    }

    // Update is called once per frame
    void Update(){}

    //Should clear the display and reset all of the values
    void ResetDisplay(){
        entered = 0;
        count = 0;
        //CLEAR THE DISPLAY
    }

    //Buttons should trigger this script and pass their value
    void ButtonUpdate(int digit){
        entered = entered + digit * (int) (Math.Pow(10, count));
        //DISPLAY THE ENTERED DIGIT IN THE CORRECT PLACE
        count = count + 1;
        if (count == 4) {
            if (entered == code) {
                m_OnCorrect.Invoke();
                // SHINE SOME LIGHTS OR MAKE A SOUND OR SMTH
            }
            else {
                ResetDisplay();
            }
        }

    }

}
