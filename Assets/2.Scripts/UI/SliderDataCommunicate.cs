using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SliderDataCommunicate : MonoBehaviour
{
    public SoundManager sm;
    public Slider sli;
    public enum Target { Bgm, Sfx };
    public Target target;
    

    private void Update()
    {
        if (target.ToString() == "Bgm") 
            sm.obj2[0].volume = sli.value;
        else if(target.ToString() == "Sfx")
            sm.obj2[1].volume = sli.value;
    }
}
