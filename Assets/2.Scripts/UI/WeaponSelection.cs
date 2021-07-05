using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class WeaponSelection : MonoBehaviour
{
	public GameObject[] weapon;
	public static int selectedWeapon = 0;
	public static int equipedWeapon = 0;
	private Image equipImage;
	public Sprite basicSprite;
	public Sprite equipSprite;
	private DataManager data;
	GameObject obj1;
	GameObject obj2;

	private void Start()
	{
		obj1 = GameObject.Find("DataManager");
		data = obj1.GetComponent<DataManager>();
	}

	public void InitialWeapon(string name)
	{
		obj2 = GameObject.Find(name);
		equipImage = obj2.GetComponent<Image>();
		equipImage.sprite = equipSprite;
		obj2.transform.Find("Text_State").gameObject.SetActive(true);
		switch (name)
        {
			case "M1911":
				equipedWeapon = 0;
				break;
			case "PBR":
				equipedWeapon = 1;
				break;
			case "AK74":
				equipedWeapon = 2;
				break;
			case "M4_8":
				equipedWeapon = 3;
				break;
			case "M107":
				equipedWeapon = 4;
				break;
			case "SVD":
				equipedWeapon = 5;
				break;
		}
	}

	public void SelectWeapon(int num)
    {
		weapon[selectedWeapon].transform.Find("Frame_Focus").gameObject.SetActive(false);
		selectedWeapon = num;
		weapon[selectedWeapon].transform.Find("Frame_Focus").gameObject.SetActive(true);
	}

	public void EquipWeapon()
    {
		if (equipedWeapon == selectedWeapon) return;

		equipImage = weapon[equipedWeapon].GetComponent<Image>();
		equipImage.sprite = basicSprite;
		weapon[equipedWeapon].transform.Find("Text_State").gameObject.SetActive(false);
		equipImage = weapon[selectedWeapon].GetComponent<Image>();
		equipImage.sprite = equipSprite;
		weapon[selectedWeapon].transform.Find("Text_State").gameObject.SetActive(true);
		equipedWeapon = selectedWeapon;
		data.equipUpdate(weapon[equipedWeapon].name);
		
	}
}
