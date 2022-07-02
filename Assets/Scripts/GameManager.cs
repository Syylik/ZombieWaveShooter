using System.Collections;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    private int score;
    [SerializeField] private TMP_Text scoreText;
    [SerializeField] private Gun[] guns;
    private bool canDicreaseScore = true;

    [SerializeField] private GameObject losePanel;
    [SerializeField] private TMP_Text winnedWavesText;

    [SerializeField] private GameObject ammoBox;
    public static GameManager instance { get; private set; }
    private void Awake() => instance = this;
    private void Start()
    {
        Time.timeScale = 1f;
        StartCoroutine(DicreaseScore());
        StartCoroutine(SpawnAmmo());
    }
    public void AddScore(int value)
    {
        score += value;
        scoreText.text = score.ToString("000000");
        foreach(var g in guns)
        {
            if(g.scoreNeed <= score)
            {
                g.isActivated = true;
            }
        }
    }
    private IEnumerator DicreaseScore()
    {
        yield return new WaitForSeconds(2);
        if(score > 0 && canDicreaseScore) AddScore(-50);
        else score = 0;
        StartCoroutine(DicreaseScore());
    }
    private IEnumerator SpawnAmmo()
    {
        yield return new WaitForSeconds(Random.Range(5f, 10f));
        Vector3 spawnPos = new Vector3(Random.Range(20f, -20f), 10, Random.Range(25f, -25f));
        Instantiate(ammoBox, spawnPos, Quaternion.identity);
        StartCoroutine(SpawnAmmo());
    }
    public void Lose()
    {
        canDicreaseScore = false;
        if(WaveManager.instance.waveNum < 2) winnedWavesText.text = $"You defeat: {WaveManager.instance.waveNum} wave!";
        else winnedWavesText.text = $"You defeat: {WaveManager.instance.waveNum} waves!";
        losePanel.SetActive(true);
        Time.timeScale = 0f;
    }
    public void Restart()
    {
        Time.timeScale = 1f;
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }
    public void Menu()
    {
        Time.timeScale = 1f;
        SceneManager.LoadScene(0);
    }
}
