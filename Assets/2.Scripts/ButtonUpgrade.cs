using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ButtonUpgrade : MonoBehaviour
{
    GameObject Player;
    GameObject Weapon;
    public GameObject[] Buttons;

    // Start is called before the first frame update
    private void Awake()
    {
        Player = GameObject.FindWithTag("Player");
        Weapon = GameObject.FindWithTag("Weapon");
    }

    void OnEnable()
    {
        int index = 3, rand;
        int[] check = new int[index];
        float xPos = 88.5f;

        for (int i = 0; i < index; i++)
            check[i] = 0;

        for (int i = 0; i <= 2; i++)
        {
            for (; ; )
            {
                rand = Random.Range(0, index);
                if (check[rand] != 1)
                {
                    check[rand] = 1;
                    break;
                }
            }
            Debug.Log(rand);
            Buttons[rand].transform.position = new Vector3(xPos, -94f, 0f);
            Buttons[rand].SetActive(true);
            xPos += 309f;
        }
    }

    public void AttackUp()
    {
        Weapon.GetComponent<Weapon>().damage = (int)(Weapon.GetComponent<Weapon>().damage*1.2f);
    }
    public void RateUp()
    {
        Weapon.GetComponent<Weapon>().rate = (Weapon.GetComponent<Weapon>().rate*0.8f);
    }
    public void RangeUp()
    {
        Weapon.GetComponent<Weapon>().range = (Weapon.GetComponent<Weapon>().range * 1.2f);
    }
}
