using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Audio;

public class SoundManager : MonoBehaviour
{
    [SerializeField]
    public AudioSource[] obj2;
    public AudioClip audioButton;
    public AudioClip audioPopUp;
    public AudioClip audioError;
    public AudioClip audioEquip;
    public AudioClip audioBuy;

    public Slider[] sli;
    private void Awake()
    {
        sli[0].value = PlayerPrefs.GetFloat("BgmVolume");
        sli[1].value = PlayerPrefs.GetFloat("SfxVolume");
    }
    public void ConfirmVolumeData(string str)
    {
        if (str == "Bgm")
        {
            obj2[0].volume = sli[0].value;
            PlayerPrefs.SetFloat("BgmVolume", sli[0].value);
        } else if (str == "Sfx")
        {
            obj2[1].volume = sli[1].value;
            PlayerPrefs.SetFloat("SfxVolume", sli[1].value);
        }
    }
    
    public void PlaySound(string text)
    {
        switch(text)
        {
            case "Button":
                obj2[1].clip = audioButton;
                break;
            case "PopUp":
                obj2[1].clip = audioPopUp;
                break;
            case "Error":
                obj2[1].clip = audioError;
                break;
            case "Equip":
                obj2[1].clip = audioEquip;
                break;
            case "Buy":
                obj2[1].clip = audioBuy;
                break;

        }
        obj2[1].Play();
    }
}
