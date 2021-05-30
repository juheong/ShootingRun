using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BackEnd;

public class DataSet : MonoBehaviour
{
    DataManager data; 

    void Start()
    {
        data = gameObject.GetComponent<DataManager>();
        data.ReadData();
        data.SetText();
        DontDestroyOnLoad(this.gameObject);
    }
}
