using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkinSelection : MonoBehaviour
{
    public static int selectedSkin = 0;

    private DataManager data;
    public GameObject[] skin;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    public void SelectSkin(int num)        //선택기능
    {
        skin[selectedSkin].transform.parent.Find("Frame_Focus").gameObject.SetActive(false);
        selectedSkin = num;
        skin[selectedSkin].transform.parent.Find("Frame_Focus").gameObject.SetActive(true);
    }
}
