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
		SceneManager.LoadScene(selectedStage+1, LoadSceneMode.Single);
		Debug.Log((selectedStage+1) +"단계 실행");
	}
}
