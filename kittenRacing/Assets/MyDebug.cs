using UnityEngine;
using System.Collections;

public class MyDebug : MonoBehaviour
{
    // Update is called once per frame
    void Update()
    {
        Debug.Log("this.transform.right ( " + this.transform.right + " )");
    }
}
