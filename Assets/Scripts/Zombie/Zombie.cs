using UnityEngine;

public class Zombie : MonoBehaviour
{
    [SerializeField] private float moveSpeed;
    [SerializeField] private int damage;
    [SerializeField] private float stopDistance;
    [SerializeField] private float attackRadius;
    [SerializeField] private float attackColdown;
    private float attackTime;
    [SerializeField] private LayerMask playerLayer;
    private Transform target;
    private Rigidbody rb;
    public bool canMove = true;
    private void Start()
    {
        target = GameObject.FindObjectOfType<PlayerMove>().transform;
        rb = GetComponent<Rigidbody>();
    }
    private void FixedUpdate()
    {
        if(target == null) return;
        if(Vector3.Distance(transform.position, target.position) <= stopDistance && !GetComponent<EnemyHealth>().isDied)
        {
            canMove = false;
            if(attackTime <= 0) GetComponentInChildren<Animator>().SetTrigger("attack");
            else attackTime -= Time.fixedDeltaTime;
        }
        else canMove = true;
        transform.LookAt(target);
        if(!canMove) return;
        if(GetComponent<EnemyHealth>().isDied) return;
        var dir = (target.position - transform.position).normalized;
        rb.velocity = dir * moveSpeed;
        
    }
    public void Attack()
    {
        Collider[] player = Physics.OverlapSphere(transform.position, attackRadius, playerLayer);
        foreach(var pl in player) pl.GetComponent<PlayerHealth>().TakeHit(damage);
        attackTime = attackColdown;
    }
    private void OnDrawGizmosSelected()
    {
        Gizmos.DrawWireSphere(transform.position, stopDistance);
        Gizmos.color = Color.red; Gizmos.DrawWireSphere(transform.position, attackRadius);
    }
}
