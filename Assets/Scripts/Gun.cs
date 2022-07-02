using UnityEngine;

[CreateAssetMenu(menuName = "ScriptableObjects/Gun")]
public class Gun : ScriptableObject
{
    public string gunName;
    public bool isActivated = false;
    public bool HasAmmo = true;
    public int shotDamage;
    public float shotTime;
    public int ammo;
    public int baseAmmo;
    public GameObject shotSound;
    public int scoreNeed;
    public int bulletKnockback;
    public void AddAmmo(int ammoNum)
    {
        ammo += ammoNum;
        if(ammo > 0) HasAmmo = true;
        if(ammo > baseAmmo) ammo = baseAmmo;
        GameObject.FindObjectOfType<PlayerShoot>().UpdateUI();
    }
}
