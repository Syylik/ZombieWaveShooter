using System.Collections;
using UnityEngine;

public class EnemyHealth : BaseHealth
{
    [SerializeField] private int scoreAdd = 200;
    [HideInInspector] public bool isDied = false;
    public override void TakeHit(int damage)
    {
        if(!isDied) base.TakeHit(damage);
        GetComponentInChildren<Animator>().SetTrigger("hurt");
    }
    public override void Die()
    {
        isDied = true;
        GetComponent<Zombie>().canMove = false;
        StartCoroutine(Died());
        GameManager.instance.AddScore(scoreAdd);
    }
    private IEnumerator Died()
    {
        WaveManager.instance.zombiesLeft--;
        GetComponentInChildren<Animator>().SetTrigger("die");
        if(TryGetComponent<Zombie>(out Zombie zombie)) zombie.canMove = false;
        yield return new WaitForSeconds(3f);
        Destroy(gameObject);
    }
}
