using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using BackEnd;
using TMPro;
using LitJson;

[Serializable]
public class PlayerData 
{
    public string nickname;
    public int level;
    public int current_exp;
    public int next_exp;
    public int[] levelChart = new int[100];
    public int[] expChart = new int[100];
    public int coin;
    public string indate;
    public string uuid;
    public bool[] ch1_clear = new bool[100];
    public int[] ch1_score = new int[100];
    public string equip;
    public bool[] hasItem = new bool[6];
}

[Serializable]
public class WeaponData
{
    private int id;
    private string name;
    private string type;
    private string discription;
    private int damage;
    private float rate;
    private float range;
    public WeaponData(int id, string name, string type, string discription, int damage, float rate, float range)
    {
        this.id = id;
        this.name = name;
        this.type = type;
        this.discription = discription;
        this.damage = damage;
        this.rate = rate;
        this.range = range;
    }

    public int getId()
    {
        return this.id;
    }
    public string getName()
    {
        return this.name;
    }
    public string getType()
    {
        return this.type;
    }
    public string getDis()
    {
        return this.discription;
    }
    public int getDamage()
    {
        return this.damage;
    }
    public float getRate()
    {
        return this.rate;
    }
    public float getRange()
    {
        return this.range;
    }
}
public class ItemData           //상점 아이템 데이터
{
    private int id;
    private string name;
    private string type;
    private int price;

    public ItemData(int id, string name, string type, int price)
    {
        this.id = id;
        this.name = name;
        this.type = type;
        this.price = price;
    }
    public int getId()
    {
        return this.id;
    }
    public int getPrice()
    {
        return this.price;
    }
    public string getName()
    {
        return this.name;
    }
    public string getType()
    {
        return this.type;
    }
}
public class DataManager : MonoBehaviour
{
    [SerializeField]
    private TextMeshProUGUI textName;
    [SerializeField]
    private TextMeshProUGUI textLevel;
    [SerializeField]
    private TextMeshProUGUI textCoin;
    [SerializeField]
    private TextMeshProUGUI textExp;
    [SerializeField]

    public PlayerData player;
    public WeaponData[] weapon;
    public ItemData[] item;

    private void Update()
    {
        //Backend.AsyncPoll();
    }

    public void InsertData()
    {
        //=============== 유저 데이터 추가 =================
        int Level = 1;
        int Exp = 0;
        int Coin = 0;
        Param param = new Param();
        param.Add("Level", Level);
        param.Add("Exp", Exp);
        param.Add("Coin", Coin);

        string equipment = "M1911";

        param.Add("Equip", equipment);

        BackendReturnObject BRO = Backend.GameData.Insert("User", param);

        if (BRO.IsSuccess())
        {
            Debug.Log("indate : " + BRO.GetInDate());
        }
        else
        {
            errorCode(BRO.GetStatusCode(), BRO.GetMessage());            
        }
        //=============== 아이템 데이터 추가 =================      // 처음엔 M1911만 지닌 채로 시작
        Dictionary<string, bool> Weapon = new Dictionary<string, bool>
        {
            { "101", true},
            { "102", false},
            { "103", false},
            { "104", false},
            { "105", false},
            { "106", false}

        };
        Param param3 = new Param();
        param3.Add("Weapon", Weapon);
        BackendReturnObject BRO3 = Backend.GameData.Insert("Item", param3);

        //=============== 스테이지 데이터 추가 =================
        Dictionary<string, bool> clear = new Dictionary<string, bool>
        {
            { "stage1", true},
            { "stage2", false},
            { "stage3", false},
            { "stage4", false}
        };
        Dictionary<string, int> score = new Dictionary<string, int>
        {
            { "stage1", 0},
            { "stage2", 0},
            { "stage3", 0},
            { "stage4", 0}
        };
        Param param2 = new Param();
        param2.Add("ch1_clear", clear);
        param2.Add("ch1_score", score);
        BackendReturnObject BRO2 = Backend.GameData.Insert("Stage", param2);

        if (BRO2.IsSuccess())
        {
            
        }
        else
        {
            errorCode(BRO2.GetStatusCode(), BRO2.GetMessage());
        }

    }

    public void ReadData()
    {
        var bro = Backend.GameData.GetMyData("User", new Where(), 10);        
        if (bro.IsSuccess() == false)
        {
            Debug.Log(bro);
            return;
        }
        if (bro.GetReturnValuetoJSON()["rows"].Count <= 0)
        {           
            Debug.Log(bro);
            return;
        }
        for (int i = 0; i < bro.Rows().Count; ++i)          
        {   BackendReturnObject bro2 = Backend.BMember.GetUserInfo();
            var name = bro2.GetReturnValuetoJSON()["row"]["nickname"].ToString();
            var level = bro.Rows()[i]["Level"]["N"].ToString();
            var exp = bro.Rows()[i]["Exp"]["N"].ToString();
            var coin = bro.Rows()[i]["Coin"]["N"].ToString();
            var equip = bro.Rows()[i]["Equip"]["S"].ToString();
            var indate = bro2.GetReturnValuetoJSON()["row"]["inDate"].ToString();         
         
            player.indate = indate;
            player.nickname = name;
            player.level = int.Parse(level);
            player.current_exp = int.Parse(exp);
            player.coin = int.Parse(coin);
            player.equip = equip;
            BackendReturnObject bro3 = Backend.Chart.GetChartList();            
            if (bro3.IsSuccess())
            {

                var uuid = bro3.GetReturnValuetoJSON()["rows"][1]["selectedChartFileId"]["N"].ToString();
                BackendReturnObject bro4 = Backend.Chart.GetAllChartAndSave(true);                
                if (bro4.IsSuccess())
                {
                    Debug.Log("차트 로드 성공");
                    JsonData levelChart = JsonMapper.ToObject(Backend.Chart.GetLocalChartData("Level"));
                    var rows = levelChart["rows"];                            
                    for (int j = 0; j < rows.Count; j++)
                    {
                        var lev = rows[j]["Level"]["S"].ToString();
                        player.levelChart[j] = int.Parse(lev);                                
                        var ex = rows[j]["Exp"]["S"].ToString();
                        player.expChart[j] = int.Parse(ex);
                        if (player.level == player.levelChart[j])
                        {
                            player.next_exp = player.expChart[j];
                        }
                    }
                    JsonData weaponChart = JsonMapper.ToObject(Backend.Chart.GetLocalChartData("Weapon"));
                    var rows2 = weaponChart["rows"];
                    weapon = new WeaponData[rows2.Count];
                    for (int j = 0; j < rows2.Count; j++)
                    {
                        var id = rows2[j]["itemID"]["S"].ToString();
                        var weaponname = rows2[j]["name"]["S"].ToString();
                        var type = rows2[j]["type"]["S"].ToString();
                        var dis = rows2[j]["discription"]["S"].ToString();
                        var damage = rows2[j]["damage"]["S"].ToString();
                        var rate = rows2[j]["rate"]["S"].ToString();
                        var range = rows2[j]["range"]["S"].ToString();
                        weapon[j] = new WeaponData(int.Parse(id), weaponname, type, dis, int.Parse(damage), 
                            float.Parse(rate), float.Parse(range));
                    }

                    JsonData itemChart = JsonMapper.ToObject(Backend.Chart.GetLocalChartData("Store"));     //상점 차트 읽기
                    var rows3 = itemChart["rows"];
                    item = new ItemData[rows3.Count];
                    for (int j = 0; j < rows3.Count; j++)
                    {
                        var id = rows3[j]["ItemID"]["S"].ToString();
                        var itemName = rows3[j]["Name"]["S"].ToString();
                        var type = rows3[j]["Type"]["S"].ToString();
                        var price = rows3[j]["Price"]["S"].ToString();
                        item[j] = new ItemData(int.Parse(id), itemName, type, int.Parse(price));
                    }
                }                                                   
                else
                {
                    Debug.Log("실패");
                }
            }
            else
            {
                Debug.Log("실패");
            }
            ReadChapter();
            ReadItem();
        }
    }

    public void ReadChapter()
    {
        var bro = Backend.GameData.GetMyData("Stage", new Where(), 10);
        if (bro.IsSuccess() == false)
        {
            Debug.Log(bro);
            return;
        }
        if (bro.GetReturnValuetoJSON()["rows"].Count <= 0)
        {
            Debug.Log(bro);
            return;
        }
        for (int i = 0; i < bro.Rows().Count; ++i)
        {
            var c1 = bro.Rows()[i]["ch1_clear"][0]["stage1"]["BOOL"].ToString();
            var c2 = bro.Rows()[i]["ch1_clear"][0]["stage2"]["BOOL"].ToString();
            var c3 = bro.Rows()[i]["ch1_clear"][0]["stage3"]["BOOL"].ToString();
            var c4 = bro.Rows()[i]["ch1_clear"][0]["stage4"]["BOOL"].ToString();
            player.ch1_clear[0] = Convert.ToBoolean(c1);
            player.ch1_clear[1] = Convert.ToBoolean(c2);
            player.ch1_clear[2] = Convert.ToBoolean(c3);
            player.ch1_clear[3] = Convert.ToBoolean(c4);
            var s1 = bro.Rows()[i]["ch1_score"][0]["stage1"]["N"].ToString();
            var s2 = bro.Rows()[i]["ch1_score"][0]["stage2"]["N"].ToString();
            var s3 = bro.Rows()[i]["ch1_score"][0]["stage3"]["N"].ToString();
            var s4 = bro.Rows()[i]["ch1_score"][0]["stage4"]["N"].ToString();
            player.ch1_score[0] = int.Parse(s1);
            player.ch1_score[1] = int.Parse(s2);
            player.ch1_score[2] = int.Parse(s3);
            player.ch1_score[3] = int.Parse(s4);
        }
    }
    public void ReadItem()      //아이템 구매여부 확인
    {
        var bro = Backend.GameData.GetMyData("Item", new Where(), 10);


        if (bro.IsSuccess() == false)
        {
            Debug.Log(bro);
            return;
        }
        if (bro.GetReturnValuetoJSON()["rows"].Count <= 0)
        {
            Debug.Log(bro);
            return;
        }
        Debug.Log("구매품목 확인");

        for (int i = 0; i < bro.Rows().Count; ++i)
        {  
            //수가 많아지면 int형 변수를 통해서 반복문으로 입력
            String[] c1 = new String[10];
            c1[0] = bro.Rows()[i]["Weapon"][0]["101"]["BOOL"].ToString();
            c1[1] = bro.Rows()[i]["Weapon"][0]["102"]["BOOL"].ToString();
            c1[2] = bro.Rows()[i]["Weapon"][0]["103"]["BOOL"].ToString();
            c1[3] = bro.Rows()[i]["Weapon"][0]["104"]["BOOL"].ToString();
            c1[4] = bro.Rows()[i]["Weapon"][0]["105"]["BOOL"].ToString();
            c1[5] = bro.Rows()[i]["Weapon"][0]["106"]["BOOL"].ToString();

            for (int j = 0; j < 6; j++)
            {
                player.hasItem[j] = Convert.ToBoolean(c1[j]);
            }
        }
    }

    public void SetText()
    {
        //========== 유저 데이터 표시 =============
        textName.text = player.nickname;
        textLevel.text = player.level.ToString();
        textCoin.text = player.coin.ToString();
        textExp.text = player.current_exp.ToString()+ " / " + player.next_exp.ToString();
    }

    public void expUpdate(int value)
    {
        player.current_exp += value;
        for(int i = 0; i < player.levelChart.Length; i++)
        {            
            if (player.level == player.levelChart[i])
            {
                for (int j = i; player.current_exp >= player.expChart[j]; j++)
                {
                    player.current_exp -= player.expChart[j];
                    player.next_exp = player.expChart[i+1];
                    player.level += 1;
                    levelUpdate();
                }
            }
        }
        Param updateParam = new Param();
        updateParam.Add("Exp", player.current_exp);
        Where where = new Where();
        where.Equal("owner_inDate", player.indate);
        BackendReturnObject bro = Backend.GameData.Update("User", where, updateParam);
        if (bro.IsSuccess())
        {
            Debug.Log("경험치 업데이트 성공");
        }
        else
        {
            switch (bro.GetStatusCode())
            {
                case "404":
                    Debug.Log("존재하지 않는 tableName인 경우");
                    break;

                case "412":
                    Debug.Log("비활성화 된 tableName인 경우");
                    break;

                case "413":
                    Debug.Log("하나의 row( column들의 집합 )이 400KB를 넘는 경우");
                    break;

                default:
                    Debug.Log("서버 공통 에러 발생: " + bro.GetMessage());
                    break;
            }

        }
  
        
    }

    public void levelUpdate()
    {
        Param updateParam = new Param();
        updateParam.AddCalculation("Level", GameInfoOperator.addition, 1);
        Where where = new Where();
        where.Equal("owner_inDate", player.indate);
        BackendReturnObject bro = Backend.GameData.UpdateWithCalculation("User", where, updateParam);
        if (bro.IsSuccess())
        {
            Debug.Log("레벨 업데이트 성공");
        }
    }

    public void equipUpdate(string name)
    {
        Param param = new Param();
        param.Add("Equip", name);

        Where where = new Where();
        where.Equal("owner_inDate", player.indate);
        BackendReturnObject bro = Backend.GameData.Update("User", where, param);
        if (bro.IsSuccess())
        {
            player.equip = name;
            Debug.Log("장비장착 업데이트 성공");
        }
    }
    public void ItemUpdate(string itemId)
    {
        Param param = new Param();

        Where where = new Where();
        where.Equal("owner_inDate", player.indate);
        var bro = Backend.GameData.GetMyData("Item", new Where());      //서버 게임정보/Item 테이블을 가져옴
        Dictionary<string, bool> items = new Dictionary<string, bool>();        //업데이트를 위한 딕셔너리

        for (int i=1;i<=6;i++)      //현재 테이블에 존재하는 딕셔너리 복사
        {
            String findId = (100 + i).ToString();
            if (findId == itemId)       //구매한 품목과 동일하면 true
            {
                items.Add(findId, true);
            }
            else
            {
                items.Add(findId, Convert.ToBoolean(bro.Rows()[0]["Weapon"][0][findId]["BOOL"].ToString()));        //동일하지 않은 품목은 그대로 복사
            }
        }
        param.Add("Weapon", items);

        BackendReturnObject bro2 = Backend.GameData.Update("Item", where, param);       //서버의 플레이어 정보 업데이트

        if (bro2.IsSuccess())
        {
            ReadItem();
            Debug.Log("상점 구매 업데이트 성공");
        }
    }
    public string getName()
    {
        return player.nickname;
    }

    public int getLevel()
    {
        return player.level;
    }

    public int getExp()
    {
        return player.current_exp;
    }
   
    public string getEquip()
    {
        if (player.equip != "")
        {
            return player.equip;
        }
        else
        {
            return "M1911";
        }
        
    }
    private void errorCode(string code, string msg)
    {
        switch (code)
        {
            case "404":
                Debug.Log("존재하지 않는 tableName인 경우");
                break;

            case "412":
                Debug.Log("비활성화 된 tableName인 경우");
                break;

            case "413":
                Debug.Log("하나의 row( column들의 집합 )이 400KB를 넘는 경우");
                break;

            default:
                Debug.Log("서버 공통 에러 발생: " + msg);
                break;
        }
    }
}
