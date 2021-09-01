using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SceneController : MonoBehaviour
{
    public float Speed = 10f;
    [Range(-0.5f, 0.5f)] public float BendX = 0.1f;
    public Material[] materials;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void LateUpdate()
    {
        foreach(var m in materials)
        {
            m.SetFloat(Shader.PropertyToID("_Amount"), BendX);
        }
        //transform.Translate(Vector3.back * Speed * Time.deltaTime);
    }
}
