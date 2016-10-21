#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// TrackBuildRUtil.DynamicMesh
struct DynamicMesh_t574034906;
// System.String
struct String_t;
// UnityEngine.Mesh[]
struct MeshU5BU5D_t1759126828;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t4024180168;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t701588350;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// System.Void TrackBuildRUtil.DynamicMesh::.ctor(System.String)
extern "C"  void DynamicMesh__ctor_m1531982278 (DynamicMesh_t574034906 * __this, String_t* ___newName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TrackBuildRUtil.DynamicMesh::get_name()
extern "C"  String_t* DynamicMesh_get_name_m3922921657 (DynamicMesh_t574034906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRUtil.DynamicMesh::set_name(System.String)
extern "C"  void DynamicMesh_set_name_m134380370 (DynamicMesh_t574034906 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRUtil.DynamicMesh::Build()
extern "C"  void DynamicMesh_Build_m446531272 (DynamicMesh_t574034906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRUtil.DynamicMesh::BuildThisMesh()
extern "C"  void DynamicMesh_BuildThisMesh_m915883731 (DynamicMesh_t574034906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRUtil.DynamicMesh::Clear()
extern "C"  void DynamicMesh_Clear_m1072364263 (DynamicMesh_t574034906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TrackBuildRUtil.DynamicMesh::get_vertexCount()
extern "C"  int32_t DynamicMesh_get_vertexCount_m1017037866 (DynamicMesh_t574034906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TrackBuildRUtil.DynamicMesh::get_triangleCount()
extern "C"  int32_t DynamicMesh_get_triangleCount_m3221251014 (DynamicMesh_t574034906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TrackBuildRUtil.DynamicMesh::get_subMeshCount()
extern "C"  int32_t DynamicMesh_get_subMeshCount_m1822839013 (DynamicMesh_t574034906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TrackBuildRUtil.DynamicMesh::get_meshCount()
extern "C"  int32_t DynamicMesh_get_meshCount_m585308993 (DynamicMesh_t574034906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh[] TrackBuildRUtil.DynamicMesh::get_meshes()
extern "C"  MeshU5BU5D_t1759126828* DynamicMesh_get_meshes_m1556070837 (DynamicMesh_t574034906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TrackBuildRUtil.DynamicMesh::get_isEmpty()
extern "C"  bool DynamicMesh_get_isEmpty_m116784840 (DynamicMesh_t574034906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRUtil.DynamicMesh::AddData(UnityEngine.Vector3[],UnityEngine.Vector2[],System.Int32[],UnityEngine.Vector3[],UnityEngine.Vector4[],System.Int32)
extern "C"  void DynamicMesh_AddData_m2348708229 (DynamicMesh_t574034906 * __this, Vector3U5BU5D_t215400611* ___verts0, Vector2U5BU5D_t4024180168* ___uvs1, Int32U5BU5D_t3230847821* ___tris2, Vector3U5BU5D_t215400611* ___norms3, Vector4U5BU5D_t701588350* ___tan4, int32_t ___subMesh5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRUtil.DynamicMesh::AddPlane(UnityEngine.Vector3[],UnityEngine.Vector2[],System.Int32)
extern "C"  void DynamicMesh_AddPlane_m45069425 (DynamicMesh_t574034906 * __this, Vector3U5BU5D_t215400611* ___verts0, Vector2U5BU5D_t4024180168* ___uvs1, int32_t ___submesh2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRUtil.DynamicMesh::AddPlane(UnityEngine.Vector3[],UnityEngine.Vector2[],System.Int32[],System.Int32)
extern "C"  void DynamicMesh_AddPlane_m1504711144 (DynamicMesh_t574034906 * __this, Vector3U5BU5D_t215400611* ___verts0, Vector2U5BU5D_t4024180168* ___uvs1, Int32U5BU5D_t3230847821* ___tris2, int32_t ___submesh3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRUtil.DynamicMesh::AddPlane(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Int32)
extern "C"  void DynamicMesh_AddPlane_m2384637960 (DynamicMesh_t574034906 * __this, Vector3_t4282066566  ___p00, Vector3_t4282066566  ___p11, Vector3_t4282066566  ___p22, Vector3_t4282066566  ___p33, int32_t ___subMesh4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRUtil.DynamicMesh::AddPlane(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector2,UnityEngine.Vector2,System.Int32)
extern "C"  void DynamicMesh_AddPlane_m1827805984 (DynamicMesh_t574034906 * __this, Vector3_t4282066566  ___p00, Vector3_t4282066566  ___p11, Vector3_t4282066566  ___p22, Vector3_t4282066566  ___p33, Vector2_t4282066565  ___minUV4, Vector2_t4282066565  ___maxUV5, int32_t ___subMesh6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRUtil.DynamicMesh::AddPlane(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Int32)
extern "C"  void DynamicMesh_AddPlane_m834571832 (DynamicMesh_t574034906 * __this, Vector3_t4282066566  ___p00, Vector3_t4282066566  ___p11, Vector3_t4282066566  ___p22, Vector3_t4282066566  ___p33, Vector2_t4282066565  ___uv04, Vector2_t4282066565  ___uv15, Vector2_t4282066565  ___uv26, Vector2_t4282066565  ___uv37, int32_t ___subMesh8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRUtil.DynamicMesh::AddPlane(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void DynamicMesh_AddPlane_m864887896 (DynamicMesh_t574034906 * __this, Vector3_t4282066566  ___p00, Vector3_t4282066566  ___p11, Vector3_t4282066566  ___p22, Vector3_t4282066566  ___p33, Vector2_t4282066565  ___uv04, Vector2_t4282066565  ___uv15, Vector2_t4282066565  ___uv26, Vector2_t4282066565  ___uv37, int32_t ___tri08, int32_t ___tri19, int32_t ___tri210, int32_t ___tri311, int32_t ___tri412, int32_t ___tri513, int32_t ___subMesh14, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TrackBuildRUtil.DynamicMesh::MeshOverflow(System.Int32)
extern "C"  bool DynamicMesh_MeshOverflow_m915970804 (DynamicMesh_t574034906 * __this, int32_t ___numberOfNewVerts0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
