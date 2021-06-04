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
    public PlayerData player;

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

        bool[] equipment = { true, true, true, true, true, true };

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
            Debug.Log("indate : " + BRO2.GetInDate());
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
            var weapon1 = bro.GetFlattenJSON()["rows"][0]["Equip"][0].ToString();
            var weapon2 = bro.GetFlattenJSON()["rows"][0]["Equip"][1].ToString();
            var weapon3 = bro.GetFlattenJSON()["rows"][0]["Equip"][2].ToString();
            var weapon4 = bro.GetFlattenJSON()["rows"][0]["Equip"][3].ToString();
            var weapon5 = bro.GetFlattenJSON()["rows"][0]["Equip"][4].ToString();
            var weapon6 = bro.GetFlattenJSON()["rows"][0]["Equip"][5].ToString();
            var indate = bro2.GetReturnValuetoJSON()["row"]["inDate"].ToString();         
         
            player.indate = indate;
            player.nickname = name;
            player.level = int.Parse(level);
            player.current_exp = int.Parse(exp);
            player.coin = int.Parse(coin);
            BackendReturnObject bro3 = Backend.Chart.GetChartList();            
            if (bro3.IsSuccess())
            {

                var uuid = bro3.GetReturnValuetoJSON()["rows"][1]["selectedChartFileId"]["N"].ToString();
                BackendReturnObject bro4 = Backend.Chart.GetOneChartAndSave(uuid, "Level");                
                if (bro4.IsSuccess())
                {
                    Debug.Log("레벨 차트 로드 성공");
                    JsonData chartJson = JsonMapper.ToObject(Backend.Chart.GetLocalChartData("Level"));
                    var rows = chartJson["rows"];                            
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

    public void SetText()
    {
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
