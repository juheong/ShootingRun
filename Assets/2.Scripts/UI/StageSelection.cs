using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class StageSelection : MonoBehaviour
{
    public GameObject[] stage;
    public int selectedStage = 0;

    public void NextStage()
    {
        stage[selectedStage].SetActive(false);
        selectedStage = (selectedStage + 1) % stage.Length;
        stage[selectedStage].SetActive(true);
    }

    public void PreviousStage()
    {
        stage[selectedStage].SetActive(false);
        selectedStage--;
        if (selectedStage < 0)
        {
            selectedStage += stage.Length;
        }
        stage[selectedStage].SetActive(true);
    }

    public void StartGame()
    {
        //PlayerPrefs.SetInt("selectedStage", selectedStage);
        StartCoroutine(LoadScene(selectedStage + 1));
        Debug.Log((selectedStage + 1) + "단계 실행");
    }

    IEnumerator LoadScene(int sceneName)
    {
        AsyncOperation asyncOper = SceneManager.LoadSceneAsync(sceneName);
        while (!asyncOper.isDone)
        {
            yield return null;
        }
    }
}
