using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;

public class Button : MonoBehaviour
{


    // Options for which axes to use
    public enum Side
    {
        Left,
        Right
    }

    [SerializeField] private Side sideOfScreen = Side.Left;

    private Image m_Image;

    // Use this for initialization
    void Start()
    {
	
    }
	
    // Update is called once per frame
    void Update()
    {
	
    }
}
