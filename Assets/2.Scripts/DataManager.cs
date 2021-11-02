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
    public string indateRank;
    public string indate;
    public string uuid;
    public int highScore;
    public int highStage;
    public string equip;
    public string[] equipSkin = new string[3];
    public bool[] hasItem = new bool[17];
    public int character;
}

[Serializable]
public class RankData
{
    private string name;
    private int rank;
    private int score;
    private int stage;
    public RankData(string name, int rank, int score, int stage)
    {
        this.name = name;
        this.rank = rank;
        this.score = score;
        this.stage = stage;
    }
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
    private TextMeshProUGUI textMRank;
    [SerializeField]
    private TextMeshProUGUI textMRankName;
    [SerializeField]
    private TextMeshProUGUI textMRankScore;
    [SerializeField]
    private TextMeshProUGUI textMRankStage;
    private TextMeshProUGUI textRank;
    private TextMeshProUGUI textRankName;
    private TextMeshProUGUI textRankScore;
    private TextMeshProUGUI textRankStage;

    public PlayerData player;
    public WeaponData[] weapon;
    public ItemData[] item;
    public RankData[] rankdata;

    public GameObject Rank1;
    public GameObject Rank2;
    public GameObject Rank3;
    public GameObject Rank4;

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
        int Score = 0;
        int Stage = 0;
        string[] equipskin = new string[3];
        equipskin[0] = "310";
        equipskin[1] = "320";
        equipskin[2] = "330";

        Param param = new Param();
        param.Add("Level", Level);
        param.Add("Exp", Exp);
        param.Add("Coin", Coin);
        param.Add("HighScore", Score);
        param.Add("HighStage", Stage);
        //param.Add("EquipSkin",equipskin);

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
        InitInventory();

    }
    public void InitInventory()
    {
        //무기 데이터
        Dictionary<string, bool> Weapon = new Dictionary<string, bool>
        {
            { "101", true},
            { "102", false},
            { "103", false},
            { "104", false},
            { "105", false},
            { "106", false}

        };
        Dictionary<string, bool> Character = new Dictionary<string, bool>
        {
            { "201", false}         

        };
        //스킨 데이터
        Dictionary<string, bool> Skin = new Dictionary<string, bool> { };
        int i, j;
        for (i = 310; i < 340; i += 10)     //반복문으로 스킨 데이터 입력
        {
            for(j=1;j<4;j++)
            {
                Skin.Add((i + j).ToString(), false);
            }
        }
        Param param = new Param();
        param.Add("Weapon", Weapon);
        param.Add("Character", Character);
        param.Add("Skin", Skin);

        BackendReturnObject BRO = Backend.GameData.Insert("Item", param);
        Debug.Log("신규 정보 입력 완료");
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
        { BackendReturnObject bro2 = Backend.BMember.GetUserInfo();
            var name = bro2.GetReturnValuetoJSON()["row"]["nickname"].ToString();
            var level = bro.Rows()[i]["Level"]["N"].ToString();
            var exp = bro.Rows()[i]["Exp"]["N"].ToString();
            var coin = bro.Rows()[i]["Coin"]["N"].ToString();
            var score = bro.Rows()[i]["HighScore"]["N"].ToString();
            var stage = bro.Rows()[i]["HighStage"]["N"].ToString();
            var equip = bro.Rows()[i]["Equip"]["S"].ToString();
            var indateR = bro.Rows()[i]["inDate"]["S"].ToString();
            var indate = bro2.GetReturnValuetoJSON()["row"]["inDate"].ToString();

            player.indateRank = indateR;
            player.indate = indate;
            player.nickname = name;
            player.level = int.Parse(level);
            player.current_exp = int.Parse(exp);
            player.coin = int.Parse(coin);
            player.highScore = int.Parse(score);
            player.highStage = int.Parse(stage);
            player.equip = equip;
            // 장착 스킨이 없으면 업데이트
            var data0 = bro.GetReturnValuetoJSON();
            try
            {
                for (int j = 0; j < 3; j++)
                {
                    player.equipSkin[j] = bro.Rows()[i]["EquipSkin"][0][j]["S"].ToString();
                }
            }
            catch (Exception ex)
            {
                addEquipSkinData();

            }
            BackendReturnObject bro3 = Backend.Chart.GetChartList();
            //
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
                    //Weapon Chart를 통한 무기 정보 입력
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

                    //itemChart를 통한 상점 정보 입력
                    JsonData itemChart = JsonMapper.ToObject(Backend.Chart.GetLocalChartData("Store"));
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
            string[] select = { "owner_inDate", "Skin" };

            //스킨 정보 확인 후 추가
            var bro0 = Backend.GameData.GetMyData("Item", new Where(), select);
            data0 = bro0.GetReturnValuetoJSON();
            try
            {
                Debug.Log(data0["rows"][0]["Skin"].Count);
            }
            catch (Exception ex)
            {
                addSkinData();
            }
            //
            ReadItem();
            getRank();
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
            String[] c1 = new String[17];
            int key = 101, j;

            for (j = 0; j < 8; j++)
            {
                if (j < 6)
                    c1[j] = bro.Rows()[i]["Weapon"][0][(key + j).ToString()]["BOOL"].ToString();
                else if (j == 7)
                {
                    key = 201;
                    c1[j] = bro.Rows()[i]["Character"][0][key.ToString()]["BOOL"].ToString();                                        
                }         
            }
            key = 311;
            for (j=8;j<17;j++)
            {
                c1[j] = bro.Rows()[i]["Skin"][0][key.ToString()]["BOOL"].ToString();
                key++;
                if (key == 314 || key == 324)
                    key += 7;
            }

            for (j = 0; j < 17; j++)
            {
                player.hasItem[j] = Convert.ToBoolean(c1[j]);
            }
        }
    }
    public void addSkinData()
    {
        Param param = new Param();
        Where where = new Where();
        where.Equal("owner_inDate", player.indate);

        Dictionary<string, bool> Skin = new Dictionary<string, bool> { };
        int i, j;
        for (i = 310; i < 340; i += 10)     //반복문으로 스킨 데이터 입력
        {
            for (j = 1; j < 4; j++)
            {
                Skin.Add((i + j).ToString(), false);
            }
        }
        param.Add("Skin", Skin);

        BackendReturnObject bro2 = Backend.GameData.Update("Item", where, param);       //서버의 플레이어 정보 업데이트
        if(bro2.IsSuccess())
        {
            ReadItem();
            Debug.Log("스킨 정보 업데이트 성공");
        }

    }
    public void addEquipSkinData()
    {
        Param param = new Param();
        Where where = new Where();
        where.Equal("owner_inDate", player.indate);


        string[] equipskin = new string[3];
        equipskin[0] = "310";
        equipskin[1] = "320";
        equipskin[2] = "330";

        param.Add("EquipSkin", equipskin);

        BackendReturnObject bro2 = Backend.GameData.Update("User", where, param);       //서버의 플레이어 정보 업데이트
        var bro = Backend.GameData.GetMyData("User", new Where(), 10);

        if (bro2.IsSuccess())
        {
            for (int j = 0; j < 3; j++)
            {
                player.equipSkin[j] = bro.Rows()[0]["EquipSkin"][0][j]["S"].ToString();
            }
            Debug.Log("장착 스킨 업데이트 성공");
        }
    }

    public void SetText()
    {
        //========== 유저 데이터 표시 =============
        textName.text = player.nickname;
        textLevel.text = player.level.ToString();
        textCoin.text = player.coin.ToString();
        textExp.text = player.current_exp.ToString()+ " / " + player.next_exp.ToString();
        BackendReturnObject bro = Backend.URank.User.GetMyRank("46965e40-359d-11ec-8a8c-53246299c7e2");
        if (bro.IsSuccess())
        {   
            textMRank.text = bro.GetReturnValuetoJSON()["rows"][0]["rank"]["N"].ToString();
        }        
        textMRankName.text = player.nickname;
        textMRankScore.text = player.highScore.ToString();
        textMRankStage.text = "최고 스테이지 : " + player.highStage.ToString();
        
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

    public void coinUpdate(int coin)
    {
        Param updateParam = new Param();
        updateParam.AddCalculation("Coin", GameInfoOperator.addition, coin);
        Where where = new Where();
        where.Equal("owner_inDate", player.indate);
        BackendReturnObject bro = Backend.GameData.UpdateWithCalculation("User", where, updateParam);
        if (bro.IsSuccess())
        {
            Debug.Log("코인 업데이트 성공");
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
    public void skinUpdate(string name, int num)
    {
        Param param = new Param();
        Where where = new Where();
        where.Equal("owner_inDate", player.indate);

        player.equipSkin[num] = name;
        string[] equipskin = new string[3];
        for(int i=0;i<3;i++)
             equipskin[i]=player.equipSkin[i];
        param.Add("EquipSkin", equipskin);

        BackendReturnObject bro = Backend.GameData.Update("User", where, param);
        if (bro.IsSuccess())
        {
            Debug.Log("스킨장착 업데이트 성공");
        }
    }
    public void ItemUpdate(string itemId)
    {
        int idInt;
        idInt = Int32.Parse(itemId);
        Debug.Log(idInt);
        Param param = new Param();
        Where where = new Where();
        where.Equal("owner_inDate", player.indate);
        var bro = Backend.GameData.GetMyData("Item", new Where());      //서버 게임정보/Item 테이블을 가져옴

        Dictionary<string, bool> items = new Dictionary<string, bool>();        //업데이트를 위한 딕셔너리

        //200 아래면 무기, 300이상이면 스킨
        if (idInt < 200)
        {
            for (int i = 1; i <= 6; i++)      //현재 테이블에 존재하는 딕셔너리 복사
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
        }
        else if (idInt>300)
        {
            for (int i = 10; i <= 30; i+=10)
            {
                for(int j=1;j<=3;j++)
                {
                    String findId = (300 + i + j).ToString();
                    if (findId == itemId)       //구매한 품목과 동일하면 true
                    {
                        items.Add(findId, true);
                    }
                    else
                    {
                        items.Add(findId, Convert.ToBoolean(bro.Rows()[0]["Skin"][0][findId]["BOOL"].ToString()));        //동일하지 않은 품목은 그대로 복사
                    }
                }
            }
            param.Add("Skin", items);

        }
        else
        {
            
            if (itemId == "201")       //구매한 품목과 동일하면 true
            {
                items.Add(itemId, true);
            }
            else
            {
                items.Add(itemId, Convert.ToBoolean(bro.Rows()[0]["Character"][0][itemId]["BOOL"].ToString()));        //동일하지 않은 품목은 그대로 복사
            }

            param.Add("Character", items);
        }

        BackendReturnObject bro2 = Backend.GameData.Update("Item", where, param);       //서버의 플레이어 정보 업데이트

        if (bro2.IsSuccess())
        {
            ReadItem();
            Debug.Log("상점 구매 업데이트 성공");
        }
    }
    public void RankUpdate(int score, int stage)
    {
        player.highScore = score;
        player.highStage = stage;
        Param param = new Param();
        param.Add("HighScore", score);
        param.Add("HighStage", stage);
        
        BackendReturnObject bro = Backend.URank.User.UpdateUserScore("46965e40-359d-11ec-8a8c-53246299c7e2", "User", player.indateRank, param);
        if (bro.IsSuccess())
        {
            Debug.Log("랭킹 갱신");
        }
        else
        {
            errorCode(bro.GetStatusCode(), bro.GetMessage());
        }
    }

    public void getRank()    
    {    
        BackendReturnObject bro = Backend.URank.User.GetRankList("46965e40-359d-11ec-8a8c-53246299c7e2");
        if (bro.IsSuccess())
        {            
            GameObject RImage;
            var rows = bro.GetReturnValuetoJSON()["rows"];
            rankdata = new RankData[rows.Count];
            for (int i = 0; i < rows.Count; ++i)
            {
                var name = rows[i]["nickname"]["S"].ToString();
                var score = rows[i]["score"]["N"].ToString();
                var stage = rows[i]["HighStage"]["N"].ToString();
                var rank = rows[i]["rank"]["N"].ToString();
                rankdata[i] = new RankData(name, int.Parse(rank), int.Parse(score), int.Parse(stage));

                switch (i)
                {
                    case 0:
                        RImage = Instantiate(Rank1) as GameObject;
                        break;
                    case 1:
                        RImage = Instantiate(Rank2) as GameObject;
                        break;
                    case 2:
                        RImage = Instantiate(Rank3) as GameObject;
                        break;
                    default:
                        RImage = Instantiate(Rank4) as GameObject;
                        textRank = RImage.transform.Find("Text_Rank").GetComponent<TextMeshProUGUI>();
                        textRank.text = rank;  
                        break;
                }                
                RImage.transform.parent = GameObject.Find("RContent").transform;
                RImage.transform.localScale = new Vector3(1, 1, 1);                            
                RImage.SetActive(true);                
                RImage.transform.localPosition = new Vector3(transform.position.x, transform.position.y, transform.position.z);
                textRankName = RImage.transform.Find("Text_NickName").GetComponent<TextMeshProUGUI>();
                textRankScore = RImage.transform.Find("Text_Score").GetComponent<TextMeshProUGUI>();
                textRankStage = RImage.transform.Find("Text_Stage").GetComponent<TextMeshProUGUI>();                        
                textRankName.text = name;
                textRankScore.text = score;
                textRankStage.text = "최고 스테이지 : " + stage;
            }            
        }
        else
        {
            errorCode(bro.GetStatusCode(), bro.GetMessage());
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

    public int getHighScore()
    {
        return player.highScore;
    }

    public int getHighStage()
    {
        return player.highStage;
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
            case "400":
                Debug.Log(msg);
                break;
            case "404":
                Debug.Log("존재하지 않는 tableName인 경우");
                Debug.Log(msg);
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
