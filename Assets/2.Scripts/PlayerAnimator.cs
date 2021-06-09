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

    public void OnScene()
    {
        animator.SetTrigger("isScene");
    }

    public void OnJump()
    {
        animator.ResetTrigger("PistolShoot");
        animator.ResetTrigger("RifleShoot");
        animator.SetTrigger("onJump");

    }

    public void OnSlide()
    {
        animator.ResetTrigger("PistolShoot");
        animator.ResetTrigger("RifleShoot");
        animator.SetTrigger("onSlide");
              
    }

    public void PistolShoot()
    {
        animator.SetTrigger("PistolShoot");
    }

    public void RifleShoot()
    {
        animator.SetTrigger("RifleShoot");
    }

    public void isPistol()
    {
        animator.SetTrigger("isPistol");
    }

    public void isRifle()
    {
        animator.SetTrigger("isRifle");
    }

    public void isBoss()
    {
        animator.SetTrigger("isBoss");
    }

    public void OnBossA()
    {
        animator.SetTrigger("onBossShoot");
    }

    public void DoDie()
    {
        animator.ResetTrigger("PistolShoot");
        animator.ResetTrigger("RifleShoot");
        animator.SetTrigger("doDie");
    }
}
