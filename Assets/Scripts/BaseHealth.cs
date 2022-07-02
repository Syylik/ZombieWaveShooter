using UnityEngine;

public abstract class BaseHealth : MonoBehaviour
{
    public int health;
    public int maxHealth;
    public virtual void TakeHit(int damage)
    {
        health -= damage;
        if(health <= 0) Die();
    }
    public virtual void Heal(int healPoints)
    {
        health += healPoints;
        if(health > maxHealth) health = maxHealth;
    }
    public virtual void Knockback(Vector3 whoPushed, float knockbackPower)
    {
        var pushDir = (transform.position - whoPushed);
        GetComponent<Rigidbody>().AddForce(pushDir * knockbackPower);
    }
    public virtual void Die()
    {
        Destroy(gameObject);
    }
    
}
