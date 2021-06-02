using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PanelController : MonoBehaviour
{
	public GameObject[] panels;
	public int selectedIdx = 0;
	public void OpenSwapPanel(int idx)
	{
		/*
		if (panels[idx].GetComponent<StageSelection>())
			if (panels[idx].GetComponent<StageSelection>().layer.ToString() == "Chapter")
				PlayerPrefs.SetInt("Chapter", StageSelection.selectedStage + 1);*/
		panels[selectedIdx].SetActive(false);
		selectedIdx = idx;
		panels[selectedIdx].SetActive(true);
	}

	public void OpenPanel(int idx)
    {
		selectedIdx = idx;
		panels[selectedIdx].SetActive(true);
	}

    public void ExitPanel()
    {
		panels[selectedIdx].SetActive(false);
    }
}
