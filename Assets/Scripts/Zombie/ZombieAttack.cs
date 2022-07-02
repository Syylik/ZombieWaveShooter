using UnityEngine;

public class ZombieAttack : MonoBehaviour
{
    public void AttackAtAnim() => GetComponentInParent<Zombie>().Attack();
}