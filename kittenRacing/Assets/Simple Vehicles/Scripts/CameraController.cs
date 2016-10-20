using UnityEngine;
using System.Collections;

public class CameraController : MonoBehaviour {

    public float followSpeed = 8f;
    public float rotationSpeed = 80;
    public Transform target;
    public Vector3 offset;
    Transform cam;

    void Start()
    {
        cam = transform.GetChild(0);
    }
	
	// Update is called once per frame
	void Update () {

        transform.position = Vector3.Lerp(transform.position, target.position, followSpeed * Time.deltaTime);
        transform.eulerAngles += new Vector3(0, Input.GetAxis("Mouse X")*rotationSpeed, 0);
	}
}
