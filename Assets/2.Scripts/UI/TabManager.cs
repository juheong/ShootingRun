using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TabManager : MonoBehaviour
{
    public GameObject[] Panel;
    public RectTransform[] BtnRectImage;
    private int targetIndex;

    //public Image[] TabBtnImage;
    //public Sprite[] IdleSprite, SelectSprite;


    void Start() => TabClick(0);

    private void Update()
    {
        for (int i = 0; i < Panel.Length; i++)
        {

            Panel[i].SetActive(i == targetIndex);
            BtnRectImage[i].transform.GetChild(0).gameObject.SetActive(i==targetIndex);
            //TabBtnImage[i].sprite = i == n ? SelectSprite[i] : IdleSprite[i];
        }
    }
        public void TabClick(int n)
    {
            targetIndex = n;
    }
}
