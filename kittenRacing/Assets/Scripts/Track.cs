using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Track : MonoBehaviour
{
    public GameObject segmentPrefab;

    public List<Bezier3D> segments;

    public Bezier3D lastSegment;

    // Use this for initialization
    void Start()
    {
        foreach (Bezier3D segment in segments)
        {
            segment.gameObject.AddComponent<MeshCollider>();
        }
    }

    public Bezier3D AddSegment()
    {

        GameObject go = GameObject.Instantiate(segmentPrefab, Vector3.zero, Quaternion.identity) as GameObject;

        go.transform.SetParent(this.transform, true);

        Bezier3D segment = go.GetComponent<Bezier3D>();

        if (segment != null)
        {

            segments.Add(segment);
        }

        if (lastSegment != null)
        {

            segment.prevSegment = lastSegment;
            lastSegment.nextSegment = segment;

            segment.p1 = lastSegment.p4;
            segment.p2 += lastSegment.p4;
            segment.p3 += lastSegment.p4;
            segment.p4 += lastSegment.p4;

            lastSegment.UpdateMesh();
        }


        segment.UpdateMesh();
	
        lastSegment = segment;

        return segment;
    }
}
