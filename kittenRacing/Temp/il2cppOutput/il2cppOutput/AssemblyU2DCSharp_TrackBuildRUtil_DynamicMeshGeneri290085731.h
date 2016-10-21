#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Mesh
struct Mesh_t4241756145;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1355284822;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1355284821;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t2522024052;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>
struct Dictionary_2_t2519287291;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t701588350;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TrackBuildRUtil.DynamicMeshGenericMultiMaterial
struct  DynamicMeshGenericMultiMaterial_t290085731  : public Il2CppObject
{
public:
	// System.String TrackBuildRUtil.DynamicMeshGenericMultiMaterial::name
	String_t* ___name_0;
	// UnityEngine.Mesh TrackBuildRUtil.DynamicMeshGenericMultiMaterial::mesh
	Mesh_t4241756145 * ___mesh_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> TrackBuildRUtil.DynamicMeshGenericMultiMaterial::vertices
	List_1_t1355284822 * ___vertices_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> TrackBuildRUtil.DynamicMeshGenericMultiMaterial::uv
	List_1_t1355284821 * ___uv_3;
	// System.Collections.Generic.List`1<System.Int32> TrackBuildRUtil.DynamicMeshGenericMultiMaterial::triangles
	List_1_t2522024052 * ___triangles_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> TrackBuildRUtil.DynamicMeshGenericMultiMaterial::_minWorldUVSize
	List_1_t1355284821 * ____minWorldUVSize_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> TrackBuildRUtil.DynamicMeshGenericMultiMaterial::_maxWorldUVSize
	List_1_t1355284821 * ____maxWorldUVSize_6;
	// System.Int32 TrackBuildRUtil.DynamicMeshGenericMultiMaterial::_subMeshes
	int32_t ____subMeshes_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>> TrackBuildRUtil.DynamicMeshGenericMultiMaterial::subTriangles
	Dictionary_2_t2519287291 * ___subTriangles_8;
	// UnityEngine.Vector3[] TrackBuildRUtil.DynamicMeshGenericMultiMaterial::tan1
	Vector3U5BU5D_t215400611* ___tan1_9;
	// UnityEngine.Vector3[] TrackBuildRUtil.DynamicMeshGenericMultiMaterial::tan2
	Vector3U5BU5D_t215400611* ___tan2_10;
	// UnityEngine.Vector4[] TrackBuildRUtil.DynamicMeshGenericMultiMaterial::tangents
	Vector4U5BU5D_t701588350* ___tangents_11;
	// System.Boolean TrackBuildRUtil.DynamicMeshGenericMultiMaterial::_built
	bool ____built_12;
	// System.Boolean TrackBuildRUtil.DynamicMeshGenericMultiMaterial::_hasTangents
	bool ____hasTangents_13;
	// System.Boolean TrackBuildRUtil.DynamicMeshGenericMultiMaterial::_optimised
	bool ____optimised_14;
	// System.Boolean TrackBuildRUtil.DynamicMeshGenericMultiMaterial::<lightmapUvsCalculated>k__BackingField
	bool ___U3ClightmapUvsCalculatedU3Ek__BackingField_15;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DynamicMeshGenericMultiMaterial_t290085731, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_mesh_1() { return static_cast<int32_t>(offsetof(DynamicMeshGenericMultiMaterial_t290085731, ___mesh_1)); }
	inline Mesh_t4241756145 * get_mesh_1() const { return ___mesh_1; }
	inline Mesh_t4241756145 ** get_address_of_mesh_1() { return &___mesh_1; }
	inline void set_mesh_1(Mesh_t4241756145 * value)
	{
		___mesh_1 = value;
		Il2CppCodeGenWriteBarrier(&___mesh_1, value);
	}

	inline static int32_t get_offset_of_vertices_2() { return static_cast<int32_t>(offsetof(DynamicMeshGenericMultiMaterial_t290085731, ___vertices_2)); }
	inline List_1_t1355284822 * get_vertices_2() const { return ___vertices_2; }
	inline List_1_t1355284822 ** get_address_of_vertices_2() { return &___vertices_2; }
	inline void set_vertices_2(List_1_t1355284822 * value)
	{
		___vertices_2 = value;
		Il2CppCodeGenWriteBarrier(&___vertices_2, value);
	}

	inline static int32_t get_offset_of_uv_3() { return static_cast<int32_t>(offsetof(DynamicMeshGenericMultiMaterial_t290085731, ___uv_3)); }
	inline List_1_t1355284821 * get_uv_3() const { return ___uv_3; }
	inline List_1_t1355284821 ** get_address_of_uv_3() { return &___uv_3; }
	inline void set_uv_3(List_1_t1355284821 * value)
	{
		___uv_3 = value;
		Il2CppCodeGenWriteBarrier(&___uv_3, value);
	}

	inline static int32_t get_offset_of_triangles_4() { return static_cast<int32_t>(offsetof(DynamicMeshGenericMultiMaterial_t290085731, ___triangles_4)); }
	inline List_1_t2522024052 * get_triangles_4() const { return ___triangles_4; }
	inline List_1_t2522024052 ** get_address_of_triangles_4() { return &___triangles_4; }
	inline void set_triangles_4(List_1_t2522024052 * value)
	{
		___triangles_4 = value;
		Il2CppCodeGenWriteBarrier(&___triangles_4, value);
	}

	inline static int32_t get_offset_of__minWorldUVSize_5() { return static_cast<int32_t>(offsetof(DynamicMeshGenericMultiMaterial_t290085731, ____minWorldUVSize_5)); }
	inline List_1_t1355284821 * get__minWorldUVSize_5() const { return ____minWorldUVSize_5; }
	inline List_1_t1355284821 ** get_address_of__minWorldUVSize_5() { return &____minWorldUVSize_5; }
	inline void set__minWorldUVSize_5(List_1_t1355284821 * value)
	{
		____minWorldUVSize_5 = value;
		Il2CppCodeGenWriteBarrier(&____minWorldUVSize_5, value);
	}

	inline static int32_t get_offset_of__maxWorldUVSize_6() { return static_cast<int32_t>(offsetof(DynamicMeshGenericMultiMaterial_t290085731, ____maxWorldUVSize_6)); }
	inline List_1_t1355284821 * get__maxWorldUVSize_6() const { return ____maxWorldUVSize_6; }
	inline List_1_t1355284821 ** get_address_of__maxWorldUVSize_6() { return &____maxWorldUVSize_6; }
	inline void set__maxWorldUVSize_6(List_1_t1355284821 * value)
	{
		____maxWorldUVSize_6 = value;
		Il2CppCodeGenWriteBarrier(&____maxWorldUVSize_6, value);
	}

	inline static int32_t get_offset_of__subMeshes_7() { return static_cast<int32_t>(offsetof(DynamicMeshGenericMultiMaterial_t290085731, ____subMeshes_7)); }
	inline int32_t get__subMeshes_7() const { return ____subMeshes_7; }
	inline int32_t* get_address_of__subMeshes_7() { return &____subMeshes_7; }
	inline void set__subMeshes_7(int32_t value)
	{
		____subMeshes_7 = value;
	}

	inline static int32_t get_offset_of_subTriangles_8() { return static_cast<int32_t>(offsetof(DynamicMeshGenericMultiMaterial_t290085731, ___subTriangles_8)); }
	inline Dictionary_2_t2519287291 * get_subTriangles_8() const { return ___subTriangles_8; }
	inline Dictionary_2_t2519287291 ** get_address_of_subTriangles_8() { return &___subTriangles_8; }
	inline void set_subTriangles_8(Dictionary_2_t2519287291 * value)
	{
		___subTriangles_8 = value;
		Il2CppCodeGenWriteBarrier(&___subTriangles_8, value);
	}

	inline static int32_t get_offset_of_tan1_9() { return static_cast<int32_t>(offsetof(DynamicMeshGenericMultiMaterial_t290085731, ___tan1_9)); }
	inline Vector3U5BU5D_t215400611* get_tan1_9() const { return ___tan1_9; }
	inline Vector3U5BU5D_t215400611** get_address_of_tan1_9() { return &___tan1_9; }
	inline void set_tan1_9(Vector3U5BU5D_t215400611* value)
	{
		___tan1_9 = value;
		Il2CppCodeGenWriteBarrier(&___tan1_9, value);
	}

	inline static int32_t get_offset_of_tan2_10() { return static_cast<int32_t>(offsetof(DynamicMeshGenericMultiMaterial_t290085731, ___tan2_10)); }
	inline Vector3U5BU5D_t215400611* get_tan2_10() const { return ___tan2_10; }
	inline Vector3U5BU5D_t215400611** get_address_of_tan2_10() { return &___tan2_10; }
	inline void set_tan2_10(Vector3U5BU5D_t215400611* value)
	{
		___tan2_10 = value;
		Il2CppCodeGenWriteBarrier(&___tan2_10, value);
	}

	inline static int32_t get_offset_of_tangents_11() { return static_cast<int32_t>(offsetof(DynamicMeshGenericMultiMaterial_t290085731, ___tangents_11)); }
	inline Vector4U5BU5D_t701588350* get_tangents_11() const { return ___tangents_11; }
	inline Vector4U5BU5D_t701588350** get_address_of_tangents_11() { return &___tangents_11; }
	inline void set_tangents_11(Vector4U5BU5D_t701588350* value)
	{
		___tangents_11 = value;
		Il2CppCodeGenWriteBarrier(&___tangents_11, value);
	}

	inline static int32_t get_offset_of__built_12() { return static_cast<int32_t>(offsetof(DynamicMeshGenericMultiMaterial_t290085731, ____built_12)); }
	inline bool get__built_12() const { return ____built_12; }
	inline bool* get_address_of__built_12() { return &____built_12; }
	inline void set__built_12(bool value)
	{
		____built_12 = value;
	}

	inline static int32_t get_offset_of__hasTangents_13() { return static_cast<int32_t>(offsetof(DynamicMeshGenericMultiMaterial_t290085731, ____hasTangents_13)); }
	inline bool get__hasTangents_13() const { return ____hasTangents_13; }
	inline bool* get_address_of__hasTangents_13() { return &____hasTangents_13; }
	inline void set__hasTangents_13(bool value)
	{
		____hasTangents_13 = value;
	}

	inline static int32_t get_offset_of__optimised_14() { return static_cast<int32_t>(offsetof(DynamicMeshGenericMultiMaterial_t290085731, ____optimised_14)); }
	inline bool get__optimised_14() const { return ____optimised_14; }
	inline bool* get_address_of__optimised_14() { return &____optimised_14; }
	inline void set__optimised_14(bool value)
	{
		____optimised_14 = value;
	}

	inline static int32_t get_offset_of_U3ClightmapUvsCalculatedU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(DynamicMeshGenericMultiMaterial_t290085731, ___U3ClightmapUvsCalculatedU3Ek__BackingField_15)); }
	inline bool get_U3ClightmapUvsCalculatedU3Ek__BackingField_15() const { return ___U3ClightmapUvsCalculatedU3Ek__BackingField_15; }
	inline bool* get_address_of_U3ClightmapUvsCalculatedU3Ek__BackingField_15() { return &___U3ClightmapUvsCalculatedU3Ek__BackingField_15; }
	inline void set_U3ClightmapUvsCalculatedU3Ek__BackingField_15(bool value)
	{
		___U3ClightmapUvsCalculatedU3Ek__BackingField_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
