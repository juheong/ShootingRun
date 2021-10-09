using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ItemDataSet : MonoBehaviour
{
    [SerializeField]
    private string itemId;
    [SerializeField]
    private string name;
    [SerializeField]
    private string type;
    [SerializeField]
    private string price;

    private DataManager data;
    GameObject obj1;

    private void Start()
    {
        obj1 = GameObject.Find("DataManager");
        data = obj1.GetComponent<DataManager>();
        Invoke("SetText", 2f);
    }

    public void SetText()       //DataManager 스크립트에서 불러 온 차트를 읽은 후 데이터 적용
    {
        for (int i = 0; i < data.item.Length; i++)
        {
            if (data.item[i].getId().ToString() == itemId)
            {
                this.name = data.item[i].getName();
                this.type = data.item[i].getType();
                this.price = data.item[i].getPrice().ToString();
            }
        }
    }
}
