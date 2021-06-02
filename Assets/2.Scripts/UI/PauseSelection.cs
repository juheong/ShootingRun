using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public class PauseSelection : MonoBehaviour
{
    public TextMeshProUGUI text;
    public PanelController panelController;

    private void Start()
    {
        panelController = FindObjectOfType<PanelController>();
    }
    public void OpenPause()
    {
        Time.timeScale = 0;
        panelController.OpenPanel(0);
    }

    public void ExitPause()
    {
        Time.timeScale = 1;
        panelController.ExitPanel();
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
