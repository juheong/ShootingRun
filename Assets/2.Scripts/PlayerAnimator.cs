using System.Collections;
using UnityEngine;

public class PlayerAnimator : MonoBehaviour
{
    [SerializeField]
    private GameObject attackCollision;
    private Animator animator;

    private void Awake()
    {
        animator = GetComponent<Animator>();
    }

    public void OnMovement(float vertical)
    {
        animator.SetFloat("vertical", vertical);
    }

    public void OnJump()
    {
        animator.ResetTrigger("onShoot");
        animator.SetTrigger("onJump");

    }

    public void OnSlide()
    {
        animator.ResetTrigger("onShoot");
        animator.SetTrigger("onSlide");
              
    }

    public void OnShoot()
    {
        animator.SetTrigger("onShoot");
    }

    public void OnBossA()
    {
        animator.SetTrigger("onBossShoot");
    }

    public void DoDie()
    {
        animator.ResetTrigger("onShoot");
        animator.SetTrigger("doDie");
    }
}
