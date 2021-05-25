using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public class PauseSelection : MonoBehaviour
{
    public TextMeshProUGUI text;
    public PanelController otherPanelController;
    void Start()
    {
        otherPanelController.GetComponent<PanelController>();
        text.text = PlayerPrefs.GetInt("Chapter") + "-" + PlayerPrefs.GetInt("Stage");
    }
    public void OpenPause()
    {
        Time.timeScale = 0;
        otherPanelController.OpenPanel(0);
    }

    public void ExitPause()
    {
        Time.timeScale = 1;
        otherPanelController.ExitPanel();
    }

    public void RestartGame()
    {
        Time.timeScale = 1;
        LoadingSceneController.LoadSceneString(LoadingSceneController.nextScene);
    }

    public void GiveupGame()
    {
        Time.timeScale = 1;
        LoadingSceneController.LoadSceneString("MainMenu");
    }
}
