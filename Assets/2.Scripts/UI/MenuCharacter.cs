using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuCharacter : MonoBehaviour
{
    GameObject obj1;
	public GameObject obj2;
	public GameObject Lock;
	private GameObject obj3;
	public Material obj4;
	SkinnedMeshRenderer[] meshs;

	[SerializeField]
	private GameObject[] Z_weapons;
	[SerializeField]
	private GameObject[] P_weapons;
	public void Change(string name)
    {
		int i = 0;
		switch (name)
		{
			case "M1911":
				i = 0;
				break;
			case "PBR":
				i = 1;
				break;
			case "AK74":
				i = 2;
				break;
			case "M4_8":
				i = 3;
				break;
			case "M107":
				i = 4;
				break;
			case "SVD":
				i = 5;
				break;
		}
		if (Z_weapons[i].activeSelf == false)
		{
			Z_weapons[i].SetActive(true);

		}
		if (P_weapons[i].activeSelf == false)
		{
			P_weapons[i].SetActive(true);

		}
	}
	public void Disabled(string name)
	{
		int i = 0;
		switch (name)
		{
			case "M1911":
				i = 0;
				break;
			case "PBR":
				i = 1;
				break;
			case "AK74":
				i = 2;
				break;
			case "M4_8":
				i = 3;
				break;
			case "M107":
				i = 4;
				break;
			case "SVD":
				i = 5;
				break;
		}
		if (Z_weapons[i].activeSelf == true)
		{
			Z_weapons[i].SetActive(false);

		}
		if (P_weapons[i].activeSelf == true)
		{
			P_weapons[i].SetActive(false);

		}
	}

	public void COpen()
    {
		
		Lock.gameObject.SetActive(false);
		obj3 = obj2.transform.Find("body").gameObject;
		meshs = obj3.GetComponentsInChildren<SkinnedMeshRenderer>();
		foreach (SkinnedMeshRenderer mesh in meshs)
			mesh.material = obj4;
	}
}
