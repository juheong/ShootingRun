using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class Scene_Mng : MonoBehaviour
{
    public void MainMenu()      // 메인메뉴
    {
        SceneManager.LoadScene("MainMenu");
    }
    public void CharacterSel()     // 캐릭터 선택창
    {
        SceneManager.LoadScene("Scene_Char");
    }
    public void EquipMenu()       // 장비메뉴
    {
        SceneManager.LoadScene("Scene_Equip");
    }
    public void OptionMenu()       // 옵션메뉴
    {
        SceneManager.LoadScene("Scene_Option");
    }
    public void StageMenu()     // 스테이지 선택창
    {
        SceneManager.LoadScene("Scene_Stage");
    }
    public void ShopMenu()      // 장비상점
    {
        SceneManager.LoadScene("Scene_Shop");
    }
    public void First_Stage()      // 첫스테이지
    {
        SceneManager.LoadScene("SampleScene");
    }
}
