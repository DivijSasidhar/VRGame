using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameStart : MonoBehaviour
{

    public Button startButton;
    public Button quitButton;

    // Start is called before the first frame update
    void Start()
    {
        startButton.onClick.AddListener(StartGame);
    }

    public void QuitGame()
    {
        Application.Quit();
    }

    public void StartGame()
    {
        
        UnityEngine.SceneManagement.SceneManager.LoadScene(0);
    }

}
