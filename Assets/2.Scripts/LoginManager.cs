using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BackEnd;
using UnityEngine.UI;
using TMPro;
using System.Text.RegularExpressions;
using System;


public class LoginManager : MonoBehaviour
{
    [SerializeField] TMP_InputField nickname = null;

    DataManager data;
    PanelController panel;
    TextMeshProUGUI warningText;
    [SerializeField] TMP_InputField text = null;
    private string nickname2;

    private void Start()
    {
        var bro = Backend.Initialize(true);
        if (bro.IsSuccess())
        {
            Debug.Log("Backend 초기화 성공");            
        }
        else
        {
            Debug.Log("Backend 초기화 실패");
        }
        data = GetComponent<DataManager>();
               
    }

    public void BtnLogin()
    {
        panel = GameObject.Find("GameManager").GetComponent<PanelController>();

        if (Backend.BMember.GetGuestID() != "")
        {
            BackendReturnObject bro = Backend.BMember.GuestLogin("게스트로 로그인");
            BackendReturnObject bro2 = Backend.BMember.GetUserInfo();

            if (bro.IsSuccess())
            {
                Debug.Log("게스트 로그인에 성공했습니다.");
                try
                {
                    nickname2 = bro2.GetReturnValuetoJSON()["row"]["nickname"].ToString();
                }
                catch (Exception ex)
                {
                    Debug.Log(ex + "현재 계정에 닉네임이 존재하지 않습니다.");
                    panel.OpenSwapPanel(2);
                }
                finally
                {
                    Debug.Log(nickname2);
                    if (nickname2 != null)
                    {
                        LoadingSceneController.LoadString("MainMenu");
                        panel.OpenSwapPanel(3);
                    }
                }
            }
            else
            {
                if (bro.GetStatusCode() =="401")
                {
                    Debug.Log(bro.GetMessage());
                    Debug.Log("존재하지 않는 ID입니다.");
                }
            }
        }
        else
        {
            Debug.Log("게스트로 회원가입");
            BackendReturnObject bro = Backend.BMember.GuestLogin("게스트로 로그인");
            if (bro.IsSuccess())
            {                
                Debug.Log("게스트 회원가입에 성공했습니다.");                  
                panel.OpenSwapPanel(2);
                data.InsertData();
            }
            else
            {
                if (bro.GetStatusCode() == "401")
                {
                    Debug.Log("존재하지 않는 ID입니다.");
                }
                else if (bro.GetStatusCode() == "403")
                {
                    Debug.Log("AU 초과의 경우");
                    Debug.Log(bro.GetMessage());
                }
                else
                {
                    Debug.Log(bro.GetStatusCode());
                }
            }
                       
        }
  
    }
    private bool CheckNickname()
    {
        return Regex.IsMatch(nickname.text, "^[0-9a-zA-Z가-힣]*$");
    }

    public void BtnName()
    {
        if (CheckNickname() == false)
        {
            Debug.Log("닉네임은 한글, 영어, 숫자로만 만들 수 있습니다.");

            panel.OpenPanel(4);
            warningText = GameObject.Find("Toast_Popup").GetComponentInChildren<TextMeshProUGUI>();

            warningText.text = "닉네임은 한글, 영어, 숫자로만 만들 수 있습니다.";
            return;
        }

        BackendReturnObject BRO = Backend.BMember.CreateNickname(nickname.text);

        if (BRO.IsSuccess())
        {
            Debug.Log("닉네임 생성 완료");
            LoadingSceneController.LoadString("MainMenu");
            panel.OpenSwapPanel(3);
                      

        }
        else
        {
            panel.OpenPanel(4);
            warningText = GameObject.Find("Toast_Popup").GetComponentInChildren<TextMeshProUGUI>();

            switch (BRO.GetStatusCode())
            {
                case "409":
                    Debug.Log("이미 중복된 닉네임이 있는 경우");
                    warningText.text = "이미 중복된 닉네임이 존재합니다.";
                    break;

                case "400":
                    if (BRO.GetMessage().Contains("too long")) { Debug.Log("20자 이상의 닉네임인 경우"); warningText.text = "20자 이하의 닉네임을 입력해주세요."; }
                    else if (BRO.GetMessage().Contains("blank")) { Debug.Log("닉네임에 앞/뒤 공백이 있는경우"); warningText.text = "닉네임 앞뒤 공백이 없어야합니다."; }
                        break;

                default:
                    Debug.Log("서버 공통 에러 발생: " + BRO.GetErrorCode());
                    warningText.text = "서버 공통 에러가 발생하였습니다.";
                    break;
            }
        }
    }

    public void BtnInitial()
    {
        if (Backend.BMember.GetGuestID() != "")
        {
            Backend.BMember.DeleteGuestInfo();
            Debug.Log("게스트 계정 초기화");
        }
    }

    public void getGooglehash()
    {
        Backend.Utils.GetGoogleHash();

        //example
        string googlehash = Backend.Utils.GetGoogleHash();

        Debug.Log("구글 해시 키 : " + googlehash);
        text.text = googlehash;
    }
}
