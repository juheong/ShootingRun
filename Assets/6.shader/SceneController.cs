using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SceneController : MonoBehaviour
{
    public float Speed = 10f;
    private float _BendX;
    GameObject obj1;
    [Range(-0.5f, 0.5f)] public float BendX = 0.005f;
    public Material[] materials;
    // Start is called before the first frame update
    void Start()
    {
        _BendX = BendX;
        BendX = 0f;
        Invoke("Bending", 5.7f);
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

    void Bending()
    {
        obj1 = GameObject.Find("StartMap");
        obj1.gameObject.SetActive(false);
        BendX = _BendX;
    }
}
