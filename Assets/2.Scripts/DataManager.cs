using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LitJson;
using System.IO;

[System.Serializable]
public class ItemData
{
    public int ID;
    public string Name;
    public string Dis;
    public int Damage;
    public double Rate;
    public double Range;

    public ItemData(int id, string name, string dis, int damage, double rate, double range)
    {
        ID = id;
        Name = name;
        Dis = dis;
        Damage = damage;
        Rate = rate;
        Range = range;
    }
}

[System.Serializable]
public class PlayerData
{
    public string Name;
    public int Coin;

    public PlayerData(string name, int coin)
    {
        Name = name;
        Coin = coin;
    }
}

public class DataManager : MonoBehaviour
{
    public List<ItemData> ItemList = new List<ItemData>();
    public List<PlayerData> PlayerData = new List<PlayerData>();

    Player player;
    GameController gameController;
    string itemfilePath;
    string playerfilePath;

    void Start()
    {
        player = FindObjectOfType<Player>();
        gameController = FindObjectOfType<GameController>();
        ItemList.Add(new ItemData(0, "자동소총", "설명1", 10, 0.2, 1.5));
        ItemList.Add(new ItemData(1, "권총", "설명2", 20, 0.4, 1.5));
        ItemList.Add(new ItemData(2, "저격총", "설명3", 40, 0.7, 1.5));

        itemfilePath = Application.persistentDataPath + "/ItemData.json";
        playerfilePath = Application.persistentDataPath + "/PlayerData.json";
        LoadItem();
        LoadPlayer();
    }

    public void Save()
    {  
        JsonData ItemJson = JsonMapper.ToJson(ItemList);
        File.WriteAllText(itemfilePath, ItemJson.ToString());

        PlayerData.Add(new PlayerData("기본", player.coin));
        JsonData PlayerJson = JsonMapper.ToJson(PlayerData);
        File.WriteAllText(playerfilePath, PlayerJson.ToString());
    }

    public void LoadItem()
    {
        if (!File.Exists(itemfilePath)) { return; }

        string ItemString = File.ReadAllText(itemfilePath);
        JsonData itemData = JsonMapper.ToObject(ItemString);
    }

    public void LoadPlayer()
    {
        if (!File.Exists(playerfilePath)) { return; }
        string PlayerString = File.ReadAllText(playerfilePath);
        JsonData playerdata = JsonMapper.ToObject(PlayerString);
        Parsing(playerdata);

    }

    private void Parsing(JsonData data)
    {

        player.coin = (int)data[0]["Coin"];
        gameController.InitialCoin(player.coin);

    }

    private void OnApplicationQuit()
    {
        Save();
    }
}
