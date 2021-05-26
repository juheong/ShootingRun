using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BackEnd;
using UnityEngine.UI;
using System.Text.RegularExpressions;


public class LoginManager : MonoBehaviour
{
    [SerializeField] InputField nickname = null;
    DataManager data;

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
    }

    public void BtnLogin()
    {
        if (Backend.BMember.GetGuestID() != null)
        {
            BackendReturnObject bro = Backend.BMember.GuestLogin("°Ô½ºÆ®·Î ·Î±×ÀÎ");
            if (bro.IsSuccess())
            {
                Debug.Log("°Ô½ºÆ® ·Î±×ÀÎ¿¡ ¼º°øÇß½À´Ï´Ù.");
                LoadingSceneController.LoadString("MainMenu");
                data.InsertData();
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
            Debug.Log("°èÁ¤ÀÌ Á¸ÀçÇÏÁö ¾Ê½À´Ï´Ù.");
            
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
            return;
        }

        BackendReturnObject BRO = Backend.BMember.CreateNickname(nickname.text);

        if (BRO.IsSuccess())
        {
            Debug.Log("´Ð³×ÀÓ »ý¼º ¿Ï·á");
        }
        else
        {
            switch (BRO.GetStatusCode())
            {
                case "409":
                    Debug.Log("ÀÌ¹Ì Áßº¹µÈ ´Ð³×ÀÓÀÌ ÀÖ´Â °æ¿ì");
                    break;

                case "400":
                    if (BRO.GetMessage().Contains("too long")) Debug.Log("20ÀÚ ÀÌ»óÀÇ ´Ð³×ÀÓÀÎ °æ¿ì");
                    else if (BRO.GetMessage().Contains("blank")) Debug.Log("´Ð³×ÀÓ¿¡ ¾Õ/µÚ °ø¹éÀÌ ÀÖ´Â°æ¿ì");
                    break;

                default:
                    Debug.Log("¼­¹ö °øÅë ¿¡·¯ ¹ß»ý: " + BRO.GetErrorCode());
                    break;
            }
        }
    }
}
