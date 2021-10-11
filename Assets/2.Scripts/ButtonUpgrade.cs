using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using TMPro;

public class ButtonUpgrade : MonoBehaviour
{
    public TextMeshProUGUI Attacktext;
    public TextMeshProUGUI Rangetext;
    public TextMeshProUGUI Ratetext;
    GameObject Player;
    GameObject Weapon;
    Weapon weaponData;
    Player playerData;
    AreaSpawner areaSpawner;
    public GameObject[] Buttons;
    private int AttackCount = 0;
    private int RangeCount = 0;
    private int RateCount = 0;

    // Start is called before the first frame update
    private void Awake()
    {
        Player = GameObject.FindWithTag("Player");
        Weapon = GameObject.FindWithTag("Weapon");
        weaponData = Weapon.GetComponent<Weapon>();
        playerData = Player.GetComponent<Player>();
        areaSpawner = GameObject.Find("AreaSpawner").GetComponent<AreaSpawner>();
    }

    void OnEnable()     //버튼 활성화
    {
        int index , rand, isThree=0;
        index = Buttons.Length;

        int[] check = new int[index];
        float xPos = 88.5f;

        if (areaSpawner.stage % 3 == 0)     //스테이지가 3의 배수이면 사거리 업그레이드 추가
        {
            isThree = 1;
            Buttons[0].transform.position = new Vector3(xPos, -94f, 0f);
            Buttons[0].SetActive(true);
            xPos += 309f;
        }
        else
            isThree = 0;

        for (int i = isThree; i < index; i++)       //중복 체크를 위한 배열
            check[i] = 0;

        for (int i = isThree; i <= 2; i++)
        {
            for (; ; )          //중복되지 않으면 활성화
            {
                rand = Random.Range(isThree, index- isThree);
                if (check[rand] != 1)
                {
                    check[rand] = 1;
                    break;
                }
            }
            Buttons[rand].transform.position = new Vector3(xPos, -94f, 0f);
            Buttons[rand].SetActive(true);
            xPos += 309f;
        }
    }
    void OnDisable()        //선택 후 활성화 된 버튼 초기화
    {
        ButtonOff();
        areaSpawner.stage++;

    }

    private void ButtonOff()        //버튼 초기화를 위한 함수
    {
        int index;
        index = Buttons.Length;
        for (int i = 0; i < index; i++)
            Buttons[i].SetActive(false);
    }
    public void AttackUp()
    {
        AttackCount += 1;
        weaponData.damage = (int)(weaponData.damage*1.2f);
        Attacktext.text = "0" + AttackCount.ToString();
    }
    public void RateUp()
    {
        RateCount += 1;
        weaponData.rate = (weaponData.rate*0.8f);
        Ratetext.text = "0" + RateCount.ToString();
    }
    public void RangeUp()
    {
        RangeCount += 1;
        weaponData.range = (weaponData.range * 1.2f);
        Rangetext.text = "0" + RangeCount.ToString();
    }
    public void MaxHPUp()
    {
        playerData.maxhealth = (int)(playerData.maxhealth * 1.5f);
    }
    public void HealHp()
    {
        playerData.health = playerData.maxhealth;
    }
    public void CoinUp()
    {
    }
}
