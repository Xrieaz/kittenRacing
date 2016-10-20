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
// System.Collections.Generic.List`1<TrackBuildRUtil.DynamicMeshGenericMultiMaterial>
struct List_1_t1658271283;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh
struct  DynamicMeshGenericMultiMaterialMesh_t3572930928  : public Il2CppObject
{
public:
	// System.String TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::name
	String_t* ___name_0;
	// System.Collections.Generic.List`1<TrackBuildRUtil.DynamicMeshGenericMultiMaterial> TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::_meshes
	List_1_t1658271283 * ____meshes_1;
	// System.Int32 TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::_subMeshCount
	int32_t ____subMeshCount_2;
	// System.Int32 TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::_vertexCount
	int32_t ____vertexCount_3;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DynamicMeshGenericMultiMaterialMesh_t3572930928, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of__meshes_1() { return static_cast<int32_t>(offsetof(DynamicMeshGenericMultiMaterialMesh_t3572930928, ____meshes_1)); }
	inline List_1_t1658271283 * get__meshes_1() const { return ____meshes_1; }
	inline List_1_t1658271283 ** get_address_of__meshes_1() { return &____meshes_1; }
	inline void set__meshes_1(List_1_t1658271283 * value)
	{
		____meshes_1 = value;
		Il2CppCodeGenWriteBarrier(&____meshes_1, value);
	}

	inline static int32_t get_offset_of__subMeshCount_2() { return static_cast<int32_t>(offsetof(DynamicMeshGenericMultiMaterialMesh_t3572930928, ____subMeshCount_2)); }
	inline int32_t get__subMeshCount_2() const { return ____subMeshCount_2; }
	inline int32_t* get_address_of__subMeshCount_2() { return &____subMeshCount_2; }
	inline void set__subMeshCount_2(int32_t value)
	{
		____subMeshCount_2 = value;
	}

	inline static int32_t get_offset_of__vertexCount_3() { return static_cast<int32_t>(offsetof(DynamicMeshGenericMultiMaterialMesh_t3572930928, ____vertexCount_3)); }
	inline int32_t get__vertexCount_3() const { return ____vertexCount_3; }
	inline int32_t* get_address_of__vertexCount_3() { return &____vertexCount_3; }
	inline void set__vertexCount_3(int32_t value)
	{
		____vertexCount_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
