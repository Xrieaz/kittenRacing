using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityStandardAssets.CrossPlatformInput;

[System.Serializable]
public class AxleInfo
{
    public WheelCollider leftWheel;
    public WheelCollider rightWheel;
    public bool motor;
    public bool steering;
}

public class SimpleCarController : MonoBehaviour
{
    //Handling
    public List<AxleInfo> axleInfos;
    public float maxMotorTorque;
    public float maxSteeringAngle;
    public float brakeForce;

    public Vector3 centerOfMassCorrection;
    //Internal
    public bool playerControlled;
    bool braking;

    public Bezier3D m_currentBezier;

    public Vector3 m_targetDir;

    private int m_pathIndex = 0;

    float timerToStart = 3;
    float time = 0;

    void Start()
    {
        GetComponent<Rigidbody>().centerOfMass = centerOfMassCorrection;
        GetComponent<Rigidbody>().useGravity = false;
        if (!playerControlled)
        {
            maxMotorTorque += (Random.Range(0, 40) - 20);
        }
    }



    // correctly applies the transform
    public void ApplyLocalPositionToVisuals(WheelCollider collider)
    {
        if (collider.transform.childCount == 0)
        {
            return;
        }
         
        Transform visualWheel = collider.transform.GetChild(0);
         
        Vector3 position;
        Quaternion rotation;
        collider.GetWorldPose(out position, out rotation);
         
        visualWheel.transform.position = position;
        visualWheel.transform.rotation = rotation;
    }

    public void FixedUpdate()
    {
        if (time <= timerToStart)
        {
            time += Time.fixedDeltaTime;
            if (time > timerToStart)
            {
                GetComponent<Rigidbody>().useGravity = true;
            }
        }
        else
        {
            if (this.transform.position.y <= -20)
            {
                if (m_pathIndex - 1 < 0)
                {
                    this.transform.position = new Vector3(m_currentBezier.prevSegment.GetPath()[m_currentBezier.prevSegment.GetPath().Length - 1].position.x, m_currentBezier.prevSegment.GetPath()[m_currentBezier.prevSegment.GetPath().Length - 1].position.y + 1, m_currentBezier.prevSegment.GetPath()[m_currentBezier.prevSegment.GetPath().Length - 1].position.z);
                }
                else
                {
                    this.transform.position = new Vector3(m_currentBezier.GetPath()[m_pathIndex - 1].position.x, m_currentBezier.GetPath()[m_pathIndex - 1].position.y + 1, m_currentBezier.GetPath()[m_pathIndex - 1].position.z);
                }
                this.transform.LookAt(m_currentBezier.GetPath()[m_pathIndex].position);
            }

            float motor = maxMotorTorque;
            float steering = 0;

            Vector3 targetPos = new Vector3(m_currentBezier.GetPath()[m_pathIndex].position.x, 0, m_currentBezier.GetPath()[m_pathIndex].position.z);
            Vector3 myPos = new Vector3(this.transform.position.x, 0, this.transform.position.z);

            m_targetDir = targetPos - myPos;

            if (m_targetDir.sqrMagnitude < 100)
            {
                m_pathIndex++;
                if (m_pathIndex >= m_currentBezier.GetPath().Length)
                {
                    m_pathIndex = 0;
                    m_currentBezier = m_currentBezier.nextSegment;
                }
            }

            if (playerControlled)
            {
                steering = maxSteeringAngle * CrossPlatformInputManager.GetAxis("Horizontal");
            }
            else
            {
                m_targetDir = targetPos - myPos;

                float angleBetween = 0.0F;

                angleBetween = Vector3.Angle(this.transform.right, m_targetDir);


                float modifier = 0;

                if (angleBetween - 90 > 5)
                {
                    modifier = -1;
                }
                else if (angleBetween - 90 < -5)
                {
                    modifier = 1;
                }

                steering = modifier * maxSteeringAngle;
            }


            foreach (AxleInfo axleInfo in axleInfos)
            {
                if (axleInfo.steering)
                {
                    axleInfo.leftWheel.steerAngle = steering;
                    axleInfo.rightWheel.steerAngle = steering;
                }

                if (axleInfo.motor)
                {
                    axleInfo.leftWheel.motorTorque = motor;
                    axleInfo.rightWheel.motorTorque = motor;
                }

                //Braking
                if (braking)
                {
                    axleInfo.leftWheel.brakeTorque = brakeForce;
                    axleInfo.rightWheel.brakeTorque = brakeForce;
                }
                else
                {
                    axleInfo.leftWheel.brakeTorque = 0;
                    axleInfo.rightWheel.brakeTorque = 0;
                }

                ApplyLocalPositionToVisuals(axleInfo.leftWheel);
                ApplyLocalPositionToVisuals(axleInfo.rightWheel);
            }
        }
    }
}