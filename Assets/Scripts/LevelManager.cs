using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class LevelManager : MonoBehaviour
{
    [SerializeField] private Image currentLevelImage;
    [SerializeField] private LevelData[] maps;
    private int curMapNum;
    [SerializeField] private GameObject previusButt, nextButt;
    private void Start()
    {
        currentLevelImage.sprite = maps[curMapNum].levelImage;
        HideButts();
    }
    public void PreviusMap()
    {
        curMapNum--;
        if(curMapNum < 0) curMapNum = 0;
        currentLevelImage.sprite = maps[curMapNum].levelImage;
        HideButts();
    }
    public void NextMap()
    {
        curMapNum++;
        if(curMapNum > maps.Length -1) curMapNum = maps.Length -1;
        currentLevelImage.sprite = maps[curMapNum].levelImage;
        HideButts();
    }
    private void HideButts()
    {
        if(curMapNum <= 0) previusButt.SetActive(false);
        else previusButt.SetActive(true);
        if(curMapNum >= maps.Length -1) nextButt.SetActive(false);
        else nextButt.SetActive(true);
    }
    public void OpenLevel() => SceneManager.LoadScene(maps[curMapNum].levelId);
    public void Menu() => SceneManager.LoadScene(0);
}
