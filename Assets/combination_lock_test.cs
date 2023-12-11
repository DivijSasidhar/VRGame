using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using TMPro;

public class combination_lock_test : MonoBehaviour
{
    [SerializeField]
    [Tooltip("Events to trigger when the code is correct")]
    UnityEvent m_OnCorrect;

    [SerializeField]
    private TMP_Text display_0;
    [SerializeField]
    private TMP_Text display_1;
    [SerializeField]
    private TMP_Text display_2;
    [SerializeField]
    private TMP_Text display_3;


    [SerializeField]
    private TMP_Text code_reveal_0;
    [SerializeField]
    private TMP_Text code_reveal_1;
    [SerializeField]
    private TMP_Text code_reveal_2;
    [SerializeField]
    private TMP_Text code_reveal_3;

    private TMP_Text[] displayArray;

    private TMP_Text[] revealArray;

    // Most likely here would be just the open door script
    /// <summary>
    /// Events to trigger when the code is correct
    /// </summary>
    public UnityEvent onCorrect => m_OnCorrect;

    ///The correct combination
    System.Random rnd = new System.Random();
    int code = 0;
    
    //The user inputed combination
    int entered = 0;

    int count = 0;

    // Start is called before the first frame update
    void Start(){
        //Generate the combination
        //code = rnd.Next(0,10000);
        code = 1231;

        //initialize then clear the display
        displayArray = new TMP_Text[]{ display_0, display_1, display_2, display_3 };
       
        for (int i = 0; i < 4; i++)
        {
            displayArray[i].text = "";
        }

        revealArray = new TMP_Text[] { code_reveal_0, code_reveal_1, code_reveal_2, code_reveal_3 };

        //DISTRIBUTE THIS COMBINATION SOMEHOW
        int disposable_code = code;
        for (int j = 3; j >= 0; j-- )
        {
            revealArray[j].text = (disposable_code % 10).ToString();
            disposable_code = (disposable_code - (disposable_code % 10)) / 10;


        }
    }

    // Update is called once per frame
    void Update(){}

    //Should clear the display and reset all of the values
    void ResetDisplay(){
        entered = 0;
        count = 0;
        
        for (int i = 0; i < 4; i++)
        {
            displayArray[i].text = "";
        }
    }

    //Buttons should trigger this script and pass their value
    public void ButtonUpdate(int digit){
        entered = entered + digit * (int) (Math.Pow(10, count));
        displayArray[count].text = digit.ToString();
        count = count + 1;
        if (count == 4) {
            if (entered == code) {
                m_OnCorrect.Invoke();
            }
            else {
                ResetDisplay();
            }
        }

    }

}
