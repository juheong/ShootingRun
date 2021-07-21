using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tree_Component : MonoBehaviour
{
    [SerializeField]
    private CapsuleCollider parentCol;  // 전체적인 나무에 붙어있는 캡슐 콜라이더. 나무가 쓰러지면 이걸 비활성화 해주어야 함.
    [SerializeField]
    private CapsuleCollider childCol;  // 쓰러질 나무인 나무 윗부분에 붙어있는 캡슐 콜라이더. 나무가 쓰러지면 이걸 활성화 해주어야 함.
    [SerializeField]
    private Rigidbody childRigid; // 쓰러질 나무인 나무 윗부분에 붙어있는 Rigidbody를 통해 나무가 쓰러지면 중력을 활성화 해주어야 함.

    [SerializeField]
    private float force;  // 나무가 땅에 쓰러지도록 밀어줄 힘의 세기(랜덤으로 정할 것) 
    [SerializeField]
    private GameObject go_ChildTree;  // 쓰러질 나무 윗부분. 쓰러지고 난 다음에 지연 시간 후 파괴 되야 해서 필요함.

    [SerializeField]
    private GameObject go_Tree_Prefabs;  // 통나무. 나무가 쓰러진 이후 생성할.

    [SerializeField]
    private float destroyTime;
       
    private Transform playertf;

    /* 회전값 변수 */
    private Vector3 originRot;   // 나뭇 가지 원래 회전 값. (나뭇 가지 때리면 기울이게 할 것이라서 나중에 원래대로 돌아 올 때 필요)
    private Vector3 wantedRot;   // 나뭇 가지 때릴 때 회전 되길 원하는 값.
    private Vector3 currentRot;  // wanted_Rot 이 되기 위해 계속 업뎃해나갈 회전 값
    GameObject obj1;
    

    private void Start()
    {
        originRot = transform.rotation.eulerAngles;  // 보기 편하게 Vector3 로.
        currentRot = originRot;  // currentRot 초기값
        obj1 = GameObject.Find("Player_Zeniel");

        StartCoroutine(HitSwayCoroutine(obj1.gameObject.transform));


    }

    private void FallDownTree()
    {
        //SoundManager.instance.PlaySE(falldown_sound);

        //Destroy(go_treeCenter);

        parentCol.enabled = false;
        childCol.enabled = true;
        //childRigid.useGravity = true;

        //childRigid.AddForce(-force, 0f, force);

        StartCoroutine(HitSwayCoroutine(obj1.gameObject.transform));
    }

    IEnumerator HitSwayCoroutine(Transform tf)
    {
 
        Vector3 direction = (tf.position - transform.position).normalized; // 플레이어 나뭇가지 로 향하는 방향 

        Vector3 rotationDir = Quaternion.LookRotation(direction).eulerAngles;  // 플레이어 나뭇가지 방향을 바라보는 방향의 각도 값.
        Debug.Log(rotationDir);
        CheckDirection(rotationDir);

        while (!CheckThreadhold())
        {
            currentRot = Vector3.Lerp(currentRot, wantedRot, 0.01f);
            transform.rotation = Quaternion.Euler(currentRot);
            yield return null;
        }

        wantedRot = originRot;

        //while (!CheckThreadhold())
        //{
        //    currentRot = Vector3.Lerp(currentRot, originRot, 0.15f);
        //    transform.rotation = Quaternion.Euler(currentRot);
        //    yield return null;
        //}
    }

    private bool CheckThreadhold()
    {
        if (Mathf.Abs(wantedRot.x - currentRot.x) <= 0.5f && Mathf.Abs(wantedRot.z - currentRot.z) <= 0.5f)
            return true;
        return false;
    }

    private void CheckDirection(Vector3 _rotationDir)  // 어느 방향으로 나뭇 가지를 눕힐지.
    {
       

       
        if (_rotationDir.y > 180)
        {
            if (_rotationDir.y > 300)  // 300 ~ 360 
                wantedRot = new Vector3(-80f, 0f, -80f);
            else if (_rotationDir.y > 240) // 240 ~ 300
                wantedRot = new Vector3(0f, 0f, -80f);
            else    // 180 ~ 240
                wantedRot = new Vector3(80f, 0f, -80f);
        }
        else if (_rotationDir.y <= 180)
        {
            if (_rotationDir.y < 60)  // 0 ~ 60
                wantedRot = new Vector3(-80f, 0f, 80f);
            else if (_rotationDir.y > 120)  // 120 ~ 180
                wantedRot = new Vector3(0f, 0f, 80f);
            else  // 60 ~ 120
                wantedRot = new Vector3(80f, 0f,80f);
        }
    }

    //IEnumerator LogCoroutine()
    //{
    //    yield return new WaitForSeconds(destroyTime);

    //    //SoundManager.instance.PlaySE(logChange_sound);

    //    //Instantiate(go_Tree_Prefabs, go_ChildTree.transform.position + (go_ChildTree.transform.up * 3f), Quaternion.LookRotation(go_ChildTree.transform.up));


    //   // Destroy(go_ChildTree.gameObject);
    //}
}