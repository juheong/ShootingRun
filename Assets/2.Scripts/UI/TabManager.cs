using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TabManager : MonoBehaviour
{
    public GameObject[] Panel;
    //public Image[] TabBtnImage;
    //public Sprite[] IdleSprite, SelectSprite;


    void Start() => TabClick(0);

    public void TabClick(int n)
    {
        for (int i = 0; i < Panel.Length; i++)
        {
            Panel[i].SetActive(i == n);
            //TabBtnImage[i].sprite = i == n ? SelectSprite[i] : IdleSprite[i];
        }
    }
}
