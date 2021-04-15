using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;

public class SoundManager : MonoBehaviour
{
    [SerializeField]
    public AudioSource[] obj2;
    public AudioClip audioTouch;
    public AudioClip audioButton;
    public AudioClip audioPauseIn;
    public AudioClip audioPauseOut;
    void Awake()
    {
    }

    // Update is called once per frame
    void Update()
    {
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
