using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public class PauseSelection : MonoBehaviour
{
    public TextMeshProUGUI text;
    public PanelController panelController;
    GameObject obj1;
    private AreaSpawner areaSpawner;

    void OnEnable()
    {
        areaSpawner = GameObject.Find("AreaSpawner").GetComponent<AreaSpawner>();
        text.text = "STAGE " + areaSpawner.stage.ToString();
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
        obj1 = GameObject.Find("DataManager");
        Destroy(obj1);
        Time.timeScale = 1;
        LoadingSceneController.LoadSceneString("MainMenu");
    }
}
