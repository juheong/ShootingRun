using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SkinSelection : MonoBehaviour
{
    public static int selectedSkin = 0;

    private DataManager data;
    public GameObject[] skin;
    public Sprite basicSprite;
    public Sprite equipSprite;
    public Image equipImage;

    int[] equipedSkin = new int[3];

    // Start is called before the first frame update
    void Start()
    {
        equipedSkin[0] = -1;
        equipedSkin[1] = -1;
        equipedSkin[2] = -1;
        SetSkinNums();
        data = GameObject.Find("DataManager").GetComponent<DataManager>();
    }

    public void SetSkinNums()
    {
        SkinNumbers skinNumbers;
        int hun = 300;
        int ten = 10;
        for (int i=0;i<9;i++)
        {
            skinNumbers = skin[i].GetComponent<SkinNumbers>();
            if (i % 3 == 0&&i!=0)
                ten += 10;
            skinNumbers.skinId = ((hun+ten+1)+i%3).ToString();
        }
    }
    public void InitialSkin(string name,int num)
	{
        if (num == 0)
        {
            switch (name)
            {
                case "311":
                    SelectSkin(0);
                    EquipSkin();
                    break;
                case "312":
                    SelectSkin(1);
                    EquipSkin();
                    break;
                case "313":
                    SelectSkin(2);
                    EquipSkin();
                    break;
            }
        }
        else if (num == 1)
        {
            switch (name)
            {
                case "321":
                    SelectSkin(3);
                    EquipSkin();
                    break;
                case "322":
                    SelectSkin(4);
                    EquipSkin();
                    break;
                case "323":
                    SelectSkin(5);
                    EquipSkin();
                    break;
            }
        }
        else
        {
            switch (name)
            {
                case "331":
                    SelectSkin(6);
                    EquipSkin();
                    break;
                case "332":
                    SelectSkin(7);
                    EquipSkin();
                    break;
                case "333":
                    SelectSkin(8);
                    EquipSkin();
                    break;
            }
        }
    }
	public void SelectSkin(int num)        //선택기능
    {
        skin[selectedSkin].transform.parent.Find("Frame_Focus").gameObject.SetActive(false);
        selectedSkin = num;
        skin[selectedSkin].transform.parent.Find("Frame_Focus").gameObject.SetActive(true);
    }
    public void ChangeState(int num)
    {
        if (equipedSkin[num] == selectedSkin) return;
        if (equipedSkin[num] == -1)
        {
            equipedSkin[num] = selectedSkin;
        }
        equipImage = skin[equipedSkin[num]].GetComponent<Image>();
        equipImage.sprite = basicSprite;
        skin[equipedSkin[num]].transform.parent.Find("Text_State").gameObject.SetActive(false);
        equipImage = skin[selectedSkin].GetComponent<Image>();
        equipImage.sprite = equipSprite;
        skin[selectedSkin].transform.parent.Find("Text_State").gameObject.SetActive(true);
        equipedSkin[num] = selectedSkin;

    }
    public void EquipSkin()
    {
        string name = skin[selectedSkin].GetComponent<SkinNumbers>().skinId;
        if (selectedSkin<=2)
        {
            ChangeState(0);
            data.skinUpdate(name, 0);
        }
        else if(selectedSkin<=5)
        {
            ChangeState(1);
            data.skinUpdate(name, 1);
        }
        else
        {
            ChangeState(2);
            data.skinUpdate(name, 2);
        }
    }
}
