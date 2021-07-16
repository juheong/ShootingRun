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
				obj1 = GameObject.Find("C_M1911");
				obj1.gameObject.SetActive(true);
				break;
			case "PBR":
				obj1 = GameObject.Find("C_PBR");
				obj1.gameObject.SetActive(true);
				break;
			case "AK74":
				
				obj1 = GameObject.Find("C_AK74");
				if(obj1.gameObject.activeSelf == false)
                {	
					obj1.gameObject.SetActive(true);

                }
				
				break;
			case "M4_8":
				obj1 = GameObject.Find("C_M4_8");
				obj1.gameObject.SetActive(true);
				break;
			case "M107":
				obj1 = GameObject.Find("C_M107");
				obj1.gameObject.SetActive(true);
				break;
			case "SVD":
				obj1 = GameObject.Find("C_SVD");
				obj1.gameObject.SetActive(true);
				break;
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
