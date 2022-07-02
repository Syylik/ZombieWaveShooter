using System.Collections;
using UnityEngine;
using TMPro;

public class WaveManager : MonoBehaviour
{
    [SerializeField] private Transform[] spawnPoints;
    [SerializeField] private GameObject zombie;
    [SerializeField] private GameObject zombieBoss;
    [HideInInspector] public bool canSpawn = true;
    [HideInInspector] public int waveNum = 1;
    [SerializeField] private TMP_Text waveText;
    [SerializeField] private int spawnCount;
    [HideInInspector] public int zombiesLeft = 1;

    public static WaveManager instance { get; private set; }
    private void Awake() => instance = this;
    private void Start()
    {
        StartCoroutine(Waves());
    }
    private IEnumerator Waves()
    {   
        SpawnWave();
        zombiesLeft = spawnCount;
        if(waveNum % 5 == 0)
        {
            yield return new WaitForSeconds(2f);
            SpawnBoss();
            zombiesLeft++;
        }
        yield return new WaitUntil(() => zombiesLeft <= 0);
        waveText.GetComponent<Animator>().SetTrigger("activate");
        waveText.text = $"Wave {waveNum} won";
        yield return new WaitForSeconds(5f);
        spawnCount += 2;
        waveNum++;
        StartCoroutine(Waves());
    }
    private void SpawnWave()
    {
        waveText.GetComponent<Animator>().SetTrigger("activate");
        waveText.text = $"Wave {waveNum} comming";
        for(int i = 0; i < spawnCount; i++)
        {
            if(canSpawn) Instantiate(zombie, spawnPoints[Random.Range(0, spawnPoints.Length)].transform.position, Quaternion.identity);
        }
    }
    private void SpawnBoss()
    {
        if(canSpawn) Instantiate(zombieBoss, spawnPoints[Random.Range(0, spawnPoints.Length)].transform.position, Quaternion.identity);
    }
}
