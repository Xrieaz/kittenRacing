using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

public class ExtrudeShape
{
	public Vector2[] verts;
	public Vector2[] normals;
	public float[] uCoords;

	IEnumerable<int> LineSegment(int i)
	{
		yield return i;
		yield return i + 1;
	}

	int[] lines;
	public int[] Lines
	{
		get
		{
			if (lines == null)
			{
				lines = Enumerable.Range(0, verts.Length - 1)
					.SelectMany(i => LineSegment(i))
					.ToArray();
			}

			return lines;
		}
	}
};

public struct OrientedPoint
{
	public Vector3 position;
	public Quaternion rotation;
	public float vCoordinate;

	public OrientedPoint(Vector3 position, Quaternion rotation, float vCoordinate = 0)
	{
		this.position = position;
		this.rotation = rotation;
		this.vCoordinate = vCoordinate;
	}

	public Vector3 LocalToWorld(Vector3 point)
	{
		return position + rotation * point;
	}

	public Vector3 WorldToLocal(Vector3 point)
	{
		return Quaternion.Inverse(rotation) * (point - position);
	}

	public Vector3 LocalToWorldDirection(Vector3 dir)
	{
		return rotation * dir;
	}
}