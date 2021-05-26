using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BackEnd;
using TMPro;


public class DataManager : MonoBehaviour
{
    [SerializeField]
    private TextMeshProUGUI textName;
    [SerializeField]
    private TextMeshProUGUI textLevel;
    [SerializeField]
    private TextMeshProUGUI textCoin;
    DataSet dataset;

    public void InsertData()
    {

        int charLevel = 1;
        int charExp = 0;
        int charScore = 0;
        int charCoin = 100;
        // Param은 뒤끝 서버와 통신을 할 떄 넘겨주는 파라미터 클래스 입니다. 
        Param param = new Param();
        param.Add("Lv", charLevel);
        param.Add("Exp", charExp);
        param.Add("Score", charScore);
        param.Add("Coin", charCoin);

        // 값을 Dictionary 로 사용하기
        bool[] equipment = { true, true, true, true, true, true };

        param.Add("Equip", equipment);

        BackendReturnObject BRO = Backend.GameData.Insert("User", param);

        if (BRO.IsSuccess())
        {
            Debug.Log("indate : " + BRO.GetInDate());
        }
        else
        {
            switch (BRO.GetStatusCode())
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
                    Debug.Log("서버 공통 에러 발생: " + BRO.GetMessage());
                    break;
            }
        }
    }

    public void ReadData()
    {
        var bro = Backend.GameData.GetMyData("User", new Where(), 10);        
        if (bro.IsSuccess() == false)
        {
            // 요청 실패 처리
            Debug.Log(bro);
            return;
        }
        if (bro.GetReturnValuetoJSON()["rows"].Count <= 0)
        {
            // 요청이 성공해도 where 조건에 부합하는 데이터가 없을 수 있기 때문에
            // 데이터가 존재하는지 확인
            // 위와 같은 new Where() 조건의 경우 테이블에 row가 하나도 없으면 Count가 0 이하 일 수 있다.
            Debug.Log(bro);
            return;
        }
        // 검색한 데이터의 모든 row의 inDate 값 확인
        for (int i = 0; i < bro.Rows().Count; ++i)
        {
            var level = bro.Rows()[i]["Lv"]["N"].ToString();
            var exp = bro.Rows()[i]["Exp"]["N"].ToString();
            var score = bro.Rows()[i]["Score"]["N"].ToString(); 
            var coin = bro.Rows()[i]["Coin"]["N"].ToString();
            var weapon1 = bro.GetFlattenJSON()["rows"][0]["Equip"][0].ToString();
            var weapon2 = bro.GetFlattenJSON()["rows"][0]["Equip"][1].ToString();
            var weapon3 = bro.GetFlattenJSON()["rows"][0]["Equip"][2].ToString();
            var weapon4 = bro.GetFlattenJSON()["rows"][0]["Equip"][3].ToString();
            var weapon5 = bro.GetFlattenJSON()["rows"][0]["Equip"][4].ToString();
            var weapon6 = bro.GetFlattenJSON()["rows"][0]["Equip"][5].ToString();

            BackendReturnObject bro2 = Backend.BMember.GetUserInfo();
            var name = bro2.GetReturnValuetoJSON()["row"]["nickname"].ToString();
            textName.text = name;
            textLevel.text = level;
            textCoin.text = coin;
            dataset = gameObject.GetComponent<DataSet>();
            dataset.nickname = name;
        }
    }
}
