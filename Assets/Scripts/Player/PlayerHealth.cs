using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class PlayerHealth : BaseHealth
{
    [SerializeField] private int numOfHearts;
    [SerializeField] private Image[] hearts;
    [SerializeField] private Sprite fullHeart, emptyHeart;
    public override void TakeHit(int damage)
    {
        base.TakeHit(damage);
        UpdateHearts();
    }
    public override void Die()
    {
        GameManager.instance.Lose();
        base.Die(); 
    }
    public override void Heal(int healPoints)
    {
        base.Heal(healPoints);
        UpdateHearts();
    }
    private void UpdateHearts()
    {
        if(health > numOfHearts) health = numOfHearts;
        for(int i = 0; i < hearts.Length; i++)
        {
            if(i < health) hearts[i].sprite = fullHeart;
            else hearts[i].sprite = emptyHeart;
            if(i < numOfHearts) hearts[i].enabled = true;  
            else hearts[i].enabled = false;
        }
    }
}
