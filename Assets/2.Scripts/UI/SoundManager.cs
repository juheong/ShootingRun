using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Audio;

public class SoundManager : MonoBehaviour
{
    [SerializeField]
    public AudioSource[] obj2;
    public AudioClip audioTouch;
    public AudioClip audioButton;
    public AudioClip audioPauseIn;
    public AudioClip audioPauseOut;

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
            case "Touch":
                obj2[1].clip = audioTouch;
                break;
            case "Button":
                obj2[1].clip = audioButton;
                break;
            case "PauseIn":
                obj2[1].clip = audioPauseIn;
                break;
            case "PauseOut":
                obj2[1].clip = audioPauseOut;
                break;

        }
        obj2[1].Play();
    }
}
