using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BackEnd;
using UnityEngine.UI;
using TMPro;
using System.Text.RegularExpressions;


public class LoginManager : MonoBehaviour
{
    [SerializeField] TMP_InputField nickname = null;

    DataManager data;
    PanelController panel;
    TextMeshProUGUI warningText;

    private void Start()
    {
        var bro = Backend.Initialize(true);
        if (bro.IsSuccess())
        {
            Debug.Log("Backend ÃÊ±âÈ­ ¼º°ø");            
        }
        else
        {
            Debug.Log("Backend ÃÊ±âÈ­ ½ÇÆÐ");
        }
        data = GetComponent<DataManager>();

        if (Backend.BMember.GetGuestID() != "")
        {
            Backend.BMember.DeleteGuestInfo();
            Debug.Log("°Ô½ºÆ® °èÁ¤ »èÁ¦(Å×½ºÆ®¿ë)");
        }
    }

    public void BtnLogin()
    {
        panel = GameObject.Find("GameManager").GetComponent<PanelController>();

        if (Backend.BMember.GetGuestID() != "")
        {
            BackendReturnObject bro = Backend.BMember.GuestLogin("°Ô½ºÆ®·Î ·Î±×ÀÎ");
            if (bro.IsSuccess())
            {
                Debug.Log("°Ô½ºÆ® ·Î±×ÀÎ¿¡ ¼º°øÇß½À´Ï´Ù.");
                LoadingSceneController.LoadString("MainMenu");
                panel.OpenSwapPanel(3);
            }
            else
            {
                if (bro.GetStatusCode() =="401")
                {
                    Debug.Log("Á¸ÀçÇÏÁö ¾Ê´Â IDÀÔ´Ï´Ù.");
                }
            }
        }
        else
        {
            Debug.Log("°Ô½ºÆ®·Î È¸¿ø°¡ÀÔ");
            BackendReturnObject bro = Backend.BMember.GuestLogin("°Ô½ºÆ®·Î ·Î±×ÀÎ");
            if (bro.IsSuccess())
            {                
                Debug.Log("°Ô½ºÆ® È¸¿ø°¡ÀÔ¿¡ ¼º°øÇß½À´Ï´Ù.");                  
                panel.OpenSwapPanel(2);
                data.InsertData();
            }
            else
            {
                if (bro.GetStatusCode() == "401")
                {
                    Debug.Log("Á¸ÀçÇÏÁö ¾Ê´Â IDÀÔ´Ï´Ù.");
                }
                else if (bro.GetStatusCode() == "403")
                {
                    Debug.Log("AU ÃÊ°úÀÇ °æ¿ì");
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
        return Regex.IsMatch(nickname.text, "^[0-9a-zA-Z°¡-ÆR]*$");
    }

    public void BtnName()
    {
        if (CheckNickname() == false)
        {
            Debug.Log("´Ð³×ÀÓÀº ÇÑ±Û, ¿µ¾î, ¼ýÀÚ·Î¸¸ ¸¸µé ¼ö ÀÖ½À´Ï´Ù.");

            panel.OpenPanel(4);
            warningText = GameObject.Find("Toast_Popup").GetComponentInChildren<TextMeshProUGUI>();

            warningText.text = "´Ð³×ÀÓÀº ÇÑ±Û, ¿µ¾î, ¼ýÀÚ·Î¸¸ ¸¸µé ¼ö ÀÖ½À´Ï´Ù.";
            return;
        }

        BackendReturnObject BRO = Backend.BMember.CreateNickname(nickname.text);

        if (BRO.IsSuccess())
        {
            Debug.Log("´Ð³×ÀÓ »ý¼º ¿Ï·á");
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
                    Debug.Log("ÀÌ¹Ì Áßº¹µÈ ´Ð³×ÀÓÀÌ ÀÖ´Â °æ¿ì");
                    warningText.text = "ÀÌ¹Ì Áßº¹µÈ ´Ð³×ÀÓÀÌ Á¸ÀçÇÕ´Ï´Ù.";
                    break;

                case "400":
                    if (BRO.GetMessage().Contains("too long")) { Debug.Log("20ÀÚ ÀÌ»óÀÇ ´Ð³×ÀÓÀÎ °æ¿ì"); warningText.text = "20ÀÚ ÀÌÇÏÀÇ ´Ð³×ÀÓÀ» ÀÔ·ÂÇØÁÖ¼¼¿ä."; }
                    else if (BRO.GetMessage().Contains("blank")) { Debug.Log("´Ð³×ÀÓ¿¡ ¾Õ/µÚ °ø¹éÀÌ ÀÖ´Â°æ¿ì"); warningText.text = "´Ð³×ÀÓ ¾ÕµÚ °ø¹éÀÌ ¾ø¾î¾ßÇÕ´Ï´Ù."; }
                        break;

                default:
                    Debug.Log("¼­¹ö °øÅë ¿¡·¯ ¹ß»ý: " + BRO.GetErrorCode());
                    warningText.text = "¼­¹ö °øÅë ¿¡·¯°¡ ¹ß»ýÇÏ¿´½À´Ï´Ù.";
                    break;
            }
        }
    }
}
