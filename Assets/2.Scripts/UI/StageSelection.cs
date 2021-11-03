using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class StageSelection : MonoBehaviour
{
	public GameObject[] stage;
	public static int selectedStage = 0;
	private DataManager data;
	private MenuCharacter character;
	private CameraController cameraController;
	
	private void Start()
    {
		
		data = GameObject.Find("DataManager").GetComponent<DataManager>();
		character = GameObject.Find("Group_Left").GetComponent<MenuCharacter>();
		selectedStage = 0;
    }
	public void NextStage()
	{
		stage[selectedStage].SetActive(false);
		selectedStage = (selectedStage + 1) % stage.Length;
		stage[selectedStage].SetActive(true);
        if (selectedStage == 1 && data.player.hasItem[7] == true)
        {
			character.COpen();
		}
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

	public void Cselect(string sceneName)
    {
		if(selectedStage == 1 && data.player.hasItem[7] == false)
        {
			selectedStage = 0;
        }
		StartGame(sceneName);
    }

	public static void StartGame(string sceneName) // 스테이지 판넬에서 호출 가정
	{
		
		LoadingSceneController.LoadSceneString(sceneName);
        
        //SceneManager.LoadScene(selectedStage+1, LoadSceneMode.Single);
        //Debug.Log((otherScript.selectedStage + 1) + "번째 캐릭터의 " + (selectedStage + 1) + "단계 실행");
    }
}
