using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class WeaponSelection : MonoBehaviour
{
	public GameObject[] weapon;
	public static int selectedWeapon = 0;
	public static int equipedWeapon = -1;
	public Image equipImage;
	public Sprite basicSprite;
	public Sprite equipSprite;
	private DataManager data;
	private MenuCharacter character;
	private TabManager tab;
	GameObject obj1;
	GameObject obj2;
	GameObject obj3;
	GameObject obj4;


	private void Start()
	{
		obj1 = GameObject.Find("DataManager");
		data = obj1.GetComponent<DataManager>();
		obj3 = GameObject.Find("C_1");
		character = obj3.GetComponent<MenuCharacter>();
		obj4 = GameObject.Find("TopTab_Eq");
		tab = obj4.GetComponent<TabManager>();
	}

	public void InitialWeapon(string name)
	{
		character.Change(name);
		switch (name)
        {
			case "M1911":
				tab.TabClick(0);
				SelectWeapon(0);
				EquipWeapon();
				break;
			case "PBR":
				tab.TabClick(0);
				SelectWeapon(1);
				EquipWeapon();
				break;
			case "AK74":
				tab.TabClick(1);				
				SelectWeapon(2);
				EquipWeapon();
				break;
			case "M4_8":
				tab.TabClick(1);
				SelectWeapon(3);
				EquipWeapon();
				break;
			case "M107":
				tab.TabClick(2);
				SelectWeapon(4);
				EquipWeapon();
				break;
			case "SVD":
				tab.TabClick(2);
				SelectWeapon(5);
				EquipWeapon();
				break;
		}
	}

	public void SelectWeapon(int num)
    {
		weapon[selectedWeapon].transform.parent.Find("Frame_Focus").gameObject.SetActive(false);
		selectedWeapon = num;
		weapon[selectedWeapon].transform.parent.Find("Frame_Focus").gameObject.SetActive(true);
	}

	public void EquipWeapon()
    {
		if (equipedWeapon == -1)
			equipedWeapon = selectedWeapon;

		equipImage = weapon[equipedWeapon].GetComponent<Image>();
		equipImage.sprite = basicSprite;
		weapon[equipedWeapon].transform.parent.Find("Text_State").gameObject.SetActive(false);
		equipImage = weapon[selectedWeapon].GetComponent<Image>();
		equipImage.sprite = equipSprite;
		weapon[selectedWeapon].transform.parent.Find("Text_State").gameObject.SetActive(true);
		character.Disabled(weapon[equipedWeapon].name);
		equipedWeapon = selectedWeapon;
		character.Change(weapon[equipedWeapon].name);
		data.equipUpdate(weapon[equipedWeapon].name);		
	}
}
