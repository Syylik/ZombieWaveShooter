using System.Collections;
using UnityEngine;

public class PlayerMove : MonoBehaviour
{
    [SerializeField] private Joystick moveJoystick;
    [SerializeField] private float moveSpeed;

    private Rigidbody rb;
    private Animator anim;
    private void Start()
    {
        rb = GetComponent<Rigidbody>();
        anim = GetComponentInChildren<Animator>();
    }
    private void FixedUpdate()
    {
        rb.velocity = new Vector3 (moveSpeed * moveJoystick.Horizontal, rb.velocity.y, moveSpeed * moveJoystick.Vertical); 
        if(moveJoystick.Horizontal != 0 || moveJoystick.Vertical != 0)
        {
            transform.rotation = Quaternion.LookRotation(rb.velocity);
            anim.SetBool("isRunning", true);
        }
        else anim.SetBool("isRunning", false);
    }
}
