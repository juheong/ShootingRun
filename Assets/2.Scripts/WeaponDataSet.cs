using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class WeaponDataSet : MonoBehaviour
{
    [SerializeField]
    private TextMeshProUGUI textName;
    [SerializeField]
    private TextMeshProUGUI textDamage;
    [SerializeField]
    private TextMeshProUGUI textRate;
    [SerializeField]
    private TextMeshProUGUI textRange;
    [SerializeField]
    private TextMeshProUGUI textDis;
    [SerializeField]
    private string weaponId;
    private DataManager data;
    GameObject obj1;
    
    private void Start()
    {
        obj1 = GameObject.Find("DataManager");
        data = obj1.GetComponent<DataManager>();
        Invoke("SetText", 2f);
    }

    public void SetText()
    {
        for(int i = 0; i < data.weapon.Length; i++)
        {  
            if(data.weapon[i].getId().ToString() == weaponId)
            {   
                textName.text = data.weapon[i].getName();
                textDamage.text = data.weapon[i].getDamage().ToString();
                textRate.text = data.weapon[i].getRate().ToString();
                textRange.text = data.weapon[i].getRange().ToString();
                textDis.text = data.weapon[i].getDis();
            }
        } 
    }
}
