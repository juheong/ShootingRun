using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SceneController : MonoBehaviour
{
    public float Speed = 10f;
    [Range(-1f, 1f)] public float BendX = 0.1f;
    [Range(-1f, 1f)] public float BendY = 0.1f;
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
            m.SetFloat(Shader.PropertyToID("X_Axis"), BendX);
            m.SetFloat(Shader.PropertyToID("Y_Axis"), BendY);
        }
        transform.Translate(Vector3.back * Speed * Time.deltaTime);
    }
}
