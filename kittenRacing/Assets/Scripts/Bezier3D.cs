using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization.Formatters;

[ExecuteInEditMode]
public class Bezier3D : MonoBehaviour
{

    public Vector3 p1 = new Vector3(0, 0, 0);
    public Vector3 p2 = new Vector3(3, 3, 1);
    public Vector3 p3 = new Vector3(6, -3, 0);
    public Vector3 p4 = new Vector3(10, 0, 0);

    public float rotationP1 = 0;
    public float rotationP4 = 0;

    public int segments = 15;

    public Bezier3D prevSegment;
    public Bezier3D nextSegment;

    public OrientedPoint[] m_path;

    public OrientedPoint[] GetPath()
    {
        return m_path;
    }

    void Start()
    {

        ReDrawMesh();
    }

    public void ReDrawMesh()
    {

        Vector3[] points = new Vector3[]
        {

            p1, p2, p3, p4
        };

        BezierCurve curve = new BezierCurve(points, rotationP1, rotationP4);

        Mesh mesh = new Mesh();

        ExtrudeShape shape = new ExtrudeShape();

        float steps = 6;
        float width = 10f;
        float step = width / (steps - 1);
        float halfWidth = width / 2f;

        shape.verts = new Vector2[]
        {
            new Vector2(0 * step - halfWidth, 0),
            new Vector2(1 * step - halfWidth, 0),
            new Vector2(2 * step - halfWidth, 0),
            new Vector2(3 * step - halfWidth, 0),
            new Vector2(4 * step - halfWidth, 0),
            new Vector2(5 * step - halfWidth, 0),
            new Vector2(5 * step - halfWidth, -1),
            new Vector2(-halfWidth, -1),
            new Vector2(-halfWidth, 0)
        };

        shape.normals = new Vector2[]
        {
            new Vector2(0, 1),
            new Vector2(0, 1),
            new Vector2(0, 1),
            new Vector2(0, 1),
            new Vector2(0, 1),
            new Vector2(0, 1),
            new Vector2(0, 1),
            new Vector2(0, 1),
            new Vector2(0, 1)
        };

        shape.uCoords = new float[]
        {
            0.03f, 
            0.20f, 
            0.40f, 
            0.60f, 
            0.80f, 
            0.97f,
            0.95f, 
            0.97f,
            0.95f
        };

        m_path = curve.GeneratePath(segments).ToArray();

        curve.Extrude(mesh, shape, m_path);

        MeshFilter mf = GetComponent<MeshFilter>();

        mf.sharedMesh = mesh;
    }

    public void UpdateMesh()
    {

        ReDrawMesh();

        if (nextSegment != null)
        {

            nextSegment.p2 = GetInvertedPositionAroundPoint(nextSegment.p1, p3);

            nextSegment.p1 = p4;

            nextSegment.ReDrawMesh();
        }

        if (prevSegment != null)
        {
			
            prevSegment.rotationP4 = rotationP1;

            prevSegment.ReDrawMesh();
        }
    }

    private Vector3 GetInvertedPositionAroundPoint(Vector3 middle, Vector3 point)
    {

        // Gets a vector that points from the player's position to the target's.
        Vector3 heading = middle - point;

        return middle + heading;
    }
}
