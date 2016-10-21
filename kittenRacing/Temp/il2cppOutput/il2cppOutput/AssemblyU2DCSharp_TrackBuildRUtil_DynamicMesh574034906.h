#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Mesh
struct Mesh_t4241756145;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1355284822;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1355284821;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t2522024052;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t1355284823;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>
struct Dictionary_2_t2519287291;
// TrackBuildRUtil.DynamicMesh
struct DynamicMesh_t574034906;

#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Bounds2711641849.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TrackBuildRUtil.DynamicMesh
struct  DynamicMesh_t574034906  : public Il2CppObject
{
public:
	// UnityEngine.Mesh TrackBuildRUtil.DynamicMesh::mesh
	Mesh_t4241756145 * ___mesh_0;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> TrackBuildRUtil.DynamicMesh::vertices
	List_1_t1355284822 * ___vertices_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> TrackBuildRUtil.DynamicMesh::uv
	List_1_t1355284821 * ___uv_2;
	// System.Collections.Generic.List`1<System.Int32> TrackBuildRUtil.DynamicMesh::triangles
	List_1_t2522024052 * ___triangles_3;
	// UnityEngine.Bounds TrackBuildRUtil.DynamicMesh::bounds
	Bounds_t2711641849  ___bounds_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> TrackBuildRUtil.DynamicMesh::tangents
	List_1_t1355284823 * ___tangents_5;
	// System.Int32 TrackBuildRUtil.DynamicMesh::_subMeshes
	int32_t ____subMeshes_6;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>> TrackBuildRUtil.DynamicMesh::subTriangles
	Dictionary_2_t2519287291 * ___subTriangles_7;
	// TrackBuildRUtil.DynamicMesh TrackBuildRUtil.DynamicMesh::_overflow
	DynamicMesh_t574034906 * ____overflow_8;

public:
	inline static int32_t get_offset_of_mesh_0() { return static_cast<int32_t>(offsetof(DynamicMesh_t574034906, ___mesh_0)); }
	inline Mesh_t4241756145 * get_mesh_0() const { return ___mesh_0; }
	inline Mesh_t4241756145 ** get_address_of_mesh_0() { return &___mesh_0; }
	inline void set_mesh_0(Mesh_t4241756145 * value)
	{
		___mesh_0 = value;
		Il2CppCodeGenWriteBarrier(&___mesh_0, value);
	}

	inline static int32_t get_offset_of_vertices_1() { return static_cast<int32_t>(offsetof(DynamicMesh_t574034906, ___vertices_1)); }
	inline List_1_t1355284822 * get_vertices_1() const { return ___vertices_1; }
	inline List_1_t1355284822 ** get_address_of_vertices_1() { return &___vertices_1; }
	inline void set_vertices_1(List_1_t1355284822 * value)
	{
		___vertices_1 = value;
		Il2CppCodeGenWriteBarrier(&___vertices_1, value);
	}

	inline static int32_t get_offset_of_uv_2() { return static_cast<int32_t>(offsetof(DynamicMesh_t574034906, ___uv_2)); }
	inline List_1_t1355284821 * get_uv_2() const { return ___uv_2; }
	inline List_1_t1355284821 ** get_address_of_uv_2() { return &___uv_2; }
	inline void set_uv_2(List_1_t1355284821 * value)
	{
		___uv_2 = value;
		Il2CppCodeGenWriteBarrier(&___uv_2, value);
	}

	inline static int32_t get_offset_of_triangles_3() { return static_cast<int32_t>(offsetof(DynamicMesh_t574034906, ___triangles_3)); }
	inline List_1_t2522024052 * get_triangles_3() const { return ___triangles_3; }
	inline List_1_t2522024052 ** get_address_of_triangles_3() { return &___triangles_3; }
	inline void set_triangles_3(List_1_t2522024052 * value)
	{
		___triangles_3 = value;
		Il2CppCodeGenWriteBarrier(&___triangles_3, value);
	}

	inline static int32_t get_offset_of_bounds_4() { return static_cast<int32_t>(offsetof(DynamicMesh_t574034906, ___bounds_4)); }
	inline Bounds_t2711641849  get_bounds_4() const { return ___bounds_4; }
	inline Bounds_t2711641849 * get_address_of_bounds_4() { return &___bounds_4; }
	inline void set_bounds_4(Bounds_t2711641849  value)
	{
		___bounds_4 = value;
	}

	inline static int32_t get_offset_of_tangents_5() { return static_cast<int32_t>(offsetof(DynamicMesh_t574034906, ___tangents_5)); }
	inline List_1_t1355284823 * get_tangents_5() const { return ___tangents_5; }
	inline List_1_t1355284823 ** get_address_of_tangents_5() { return &___tangents_5; }
	inline void set_tangents_5(List_1_t1355284823 * value)
	{
		___tangents_5 = value;
		Il2CppCodeGenWriteBarrier(&___tangents_5, value);
	}

	inline static int32_t get_offset_of__subMeshes_6() { return static_cast<int32_t>(offsetof(DynamicMesh_t574034906, ____subMeshes_6)); }
	inline int32_t get__subMeshes_6() const { return ____subMeshes_6; }
	inline int32_t* get_address_of__subMeshes_6() { return &____subMeshes_6; }
	inline void set__subMeshes_6(int32_t value)
	{
		____subMeshes_6 = value;
	}

	inline static int32_t get_offset_of_subTriangles_7() { return static_cast<int32_t>(offsetof(DynamicMesh_t574034906, ___subTriangles_7)); }
	inline Dictionary_2_t2519287291 * get_subTriangles_7() const { return ___subTriangles_7; }
	inline Dictionary_2_t2519287291 ** get_address_of_subTriangles_7() { return &___subTriangles_7; }
	inline void set_subTriangles_7(Dictionary_2_t2519287291 * value)
	{
		___subTriangles_7 = value;
		Il2CppCodeGenWriteBarrier(&___subTriangles_7, value);
	}

	inline static int32_t get_offset_of__overflow_8() { return static_cast<int32_t>(offsetof(DynamicMesh_t574034906, ____overflow_8)); }
	inline DynamicMesh_t574034906 * get__overflow_8() const { return ____overflow_8; }
	inline DynamicMesh_t574034906 ** get_address_of__overflow_8() { return &____overflow_8; }
	inline void set__overflow_8(DynamicMesh_t574034906 * value)
	{
		____overflow_8 = value;
		Il2CppCodeGenWriteBarrier(&____overflow_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
