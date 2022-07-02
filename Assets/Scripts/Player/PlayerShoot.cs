using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Collections.Generic;

public class PlayerShoot : MonoBehaviour
{
    [SerializeField] private Gun[] guns;
    public List<Gun> activatedGuns;
    [SerializeField] private Gun curGun;
    private int curGunNum;
    [SerializeField] private Transform shootPoint;
    [SerializeField] private ParticleSystem shootEffect;
    [SerializeField] private LayerMask enemy;
    private float timeToShoot; //время до выстрела
    [SerializeField] private Image cooldownImage;
    [SerializeField] private TMP_Text ammoAded;
    [SerializeField] private TMP_Text ammoHave;
    [SerializeField] private Vector3 bulletSize;
    private bool shooting = false;
    private void Start()
    {
        cooldownImage.fillAmount = 0;
        foreach(var gun in guns)
        {
            gun.ammo = gun.baseAmmo;
            gun.isActivated = false;
        }
        guns[0].isActivated = true;
        UpdateUI();
    }
    private void Update()
    {
        timeToShoot -= Time.deltaTime;
        if(timeToShoot >= -0.02f)
        {
            cooldownImage.fillAmount = timeToShoot / curGun.shotTime;
        }
        if(shooting) Shot();
    }
    public void Shot()
    {
        if(curGun.ammo > 0 && timeToShoot <= 0)
        {
            timeToShoot = curGun.shotTime;
            curGun.ammo--;
            if(curGun.ammo <= 0)
            {
                curGun.HasAmmo = false;
                activatedGuns.Remove(curGun);
                SwapWeapon();
            }
            UpdateUI();
            Destroy(Instantiate(curGun.shotSound, transform.position, Quaternion.identity), 0.7f);
            shootEffect.Play();
            Collider[] enemies = Physics.OverlapBox(shootPoint.position, bulletSize, transform.rotation, enemy);
            foreach(var hitEntity in enemies)
            {
                if(hitEntity.TryGetComponent<EnemyHealth>(out EnemyHealth enemyHealth))
                {
                    enemyHealth.TakeHit(curGun.shotDamage);
                    enemyHealth.Knockback(transform.position, curGun.bulletKnockback);
                }
            }
        }
    }
    public void Shooting(bool state) => shooting = state;
    public void SwapWeapon()
    {
        foreach(var gun in guns)
        {
            if(gun.isActivated && !activatedGuns.Contains(gun) && gun.HasAmmo) activatedGuns.Add(gun);
        }
        curGunNum++;
        if(curGunNum > activatedGuns.Count - 1) curGunNum = 0;        
        curGun = activatedGuns[curGunNum];
        UpdateUI();
    }
    public void UpdateUI()
    {
        if(curGun == guns[0]) ammoHave.text = "∞";
        else ammoHave.text = $"{curGun.ammo}/{curGun.baseAmmo}";
    }
    private void OnCollisionEnter(Collision collision)
    {
        if(collision.gameObject.CompareTag("AmmoBox"))
        {
            int ammoAdd = Random.Range(1, 25);
            var addAmmoTo = guns[Random.Range(0, guns.Length)]; 
            addAmmoTo.AddAmmo(ammoAdd);
            ammoAded.GetComponent<Animator>().SetTrigger("activate");
            if(addAmmoTo == guns[0]) ammoAded.text = "+" + addAmmoTo.gunName;
            else ammoAded.text = $"{addAmmoTo.gunName}: +{ammoAdd}";
            Destroy(collision.gameObject);
        }
    }
    private void OnDrawGizmosSelected()
    {
        Gizmos.DrawWireCube(shootPoint.position, bulletSize);
    }
}