using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuCharacter : MonoBehaviour
{
    GameObject obj1;

    public void Change(string name)
    {
		switch (name)
		{
			case "M1911":
				obj1 = GameObject.Find("Weapon Point").transform.Find("C_M1911").gameObject;
				break;
			case "PBR":
				obj1 = GameObject.Find("Weapon Point").transform.Find("C_PBR").gameObject;
				break;
			case "AK74":
				obj1 = GameObject.Find("Weapon Point").transform.Find("C_AK74").gameObject;
				break;
			case "M4_8":
				obj1 = GameObject.Find("Weapon Point").transform.Find("C_M4_8").gameObject;
				break;
			case "M107":
				obj1 = GameObject.Find("Weapon Point").transform.Find("C_M107").gameObject;
				break;
			case "SVD":
				obj1 = GameObject.Find("Weapon Point").transform.Find("C_SVD").gameObject;
				break;
		}
		if (obj1.activeSelf == false)
		{
			obj1.SetActive(true);

		}
	}
	public void Disabled(string name)
	{
		switch (name)
		{
			case "M1911":
				obj1 = GameObject.Find("C_M1911");
				obj1.gameObject.SetActive(false);
				break;
			case "PBR":
				obj1 = GameObject.Find("C_PBR");
				obj1.gameObject.SetActive(false);
				break;
			case "AK74":
				obj1 = GameObject.Find("C_AK74");
				obj1.gameObject.SetActive(false);
				break;
			case "M4_8":
				obj1 = GameObject.Find("C_M4_8");
				obj1.gameObject.SetActive(false);
				break;
			case "M107":
				obj1 = GameObject.Find("C_M107");
				obj1.gameObject.SetActive(false);
				break;
			case "SVD":
				obj1 = GameObject.Find("C_SVD");
				obj1.gameObject.SetActive(false);
				break;
		}
	}
}
