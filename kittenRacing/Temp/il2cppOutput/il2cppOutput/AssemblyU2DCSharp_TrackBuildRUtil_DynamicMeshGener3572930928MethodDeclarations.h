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

// TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh
struct DynamicMeshGenericMultiMaterialMesh_t3572930928;
// TrackBuildRUtil.DynamicMeshGenericMultiMaterial
struct DynamicMeshGenericMultiMaterial_t290085731;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t4024180168;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// TrackBuildRTexture[]
struct TrackBuildRTextureU5BU5D_t1271193445;
// UnityEngine.Rect[]
struct RectU5BU5D_t1023580025;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::.ctor()
extern "C"  void DynamicMeshGenericMultiMaterialMesh__ctor_m91515366 (DynamicMeshGenericMultiMaterialMesh_t3572930928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TrackBuildRUtil.DynamicMeshGenericMultiMaterial TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::get_Item(System.Int32)
extern "C"  DynamicMeshGenericMultiMaterial_t290085731 * DynamicMeshGenericMultiMaterialMesh_get_Item_m1471164144 (DynamicMeshGenericMultiMaterialMesh_t3572930928 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::get_meshCount()
extern "C"  int32_t DynamicMeshGenericMultiMaterialMesh_get_meshCount_m4053119595 (DynamicMeshGenericMultiMaterialMesh_t3572930928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::set_meshCount(System.Int32)
extern "C"  void DynamicMeshGenericMultiMaterialMesh_set_meshCount_m94835258 (DynamicMeshGenericMultiMaterialMesh_t3572930928 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::get_vertices()
extern "C"  Vector3U5BU5D_t215400611* DynamicMeshGenericMultiMaterialMesh_get_vertices_m4100160232 (DynamicMeshGenericMultiMaterialMesh_t3572930928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::get_uv()
extern "C"  Vector2U5BU5D_t4024180168* DynamicMeshGenericMultiMaterialMesh_get_uv_m4092451343 (DynamicMeshGenericMultiMaterialMesh_t3572930928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::get_triangles()
extern "C"  Int32U5BU5D_t3230847821* DynamicMeshGenericMultiMaterialMesh_get_triangles_m182368466 (DynamicMeshGenericMultiMaterialMesh_t3572930928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::MinWorldUvSize(System.Int32)
extern "C"  Vector2_t4282066565  DynamicMeshGenericMultiMaterialMesh_MinWorldUvSize_m1747207670 (DynamicMeshGenericMultiMaterialMesh_t3572930928 * __this, int32_t ___submesh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::MaxWorldUvSize(System.Int32)
extern "C"  Vector2_t4282066565  DynamicMeshGenericMultiMaterialMesh_MaxWorldUvSize_m2954428196 (DynamicMeshGenericMultiMaterialMesh_t3572930928 * __this, int32_t ___submesh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::Build()
extern "C"  void DynamicMeshGenericMultiMaterialMesh_Build_m1166782962 (DynamicMeshGenericMultiMaterialMesh_t3572930928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::Build(System.Boolean)
extern "C"  void DynamicMeshGenericMultiMaterialMesh_Build_m3734181865 (DynamicMeshGenericMultiMaterialMesh_t3572930928 * __this, bool ___calcTangents0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::Clear()
extern "C"  void DynamicMeshGenericMultiMaterialMesh_Clear_m1792615953 (DynamicMeshGenericMultiMaterialMesh_t3572930928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::get_vertexCount()
extern "C"  int32_t DynamicMeshGenericMultiMaterialMesh_get_vertexCount_m688404692 (DynamicMeshGenericMultiMaterialMesh_t3572930928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::get_built()
extern "C"  bool DynamicMeshGenericMultiMaterialMesh_get_built_m4190722925 (DynamicMeshGenericMultiMaterialMesh_t3572930928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::get_triangleCount()
extern "C"  int32_t DynamicMeshGenericMultiMaterialMesh_get_triangleCount_m937383408 (DynamicMeshGenericMultiMaterialMesh_t3572930928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::get_subMeshCount()
extern "C"  int32_t DynamicMeshGenericMultiMaterialMesh_get_subMeshCount_m225145211 (DynamicMeshGenericMultiMaterialMesh_t3572930928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::set_subMeshCount(System.Int32)
extern "C"  void DynamicMeshGenericMultiMaterialMesh_set_subMeshCount_m1019677326 (DynamicMeshGenericMultiMaterialMesh_t3572930928 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::get_hasTangents()
extern "C"  bool DynamicMeshGenericMultiMaterialMesh_get_hasTangents_m3963376503 (DynamicMeshGenericMultiMaterialMesh_t3572930928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::get_lightmapUvsCalculated()
extern "C"  bool DynamicMeshGenericMultiMaterialMesh_get_lightmapUvsCalculated_m2482035801 (DynamicMeshGenericMultiMaterialMesh_t3572930928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::set_lightmapUvsCalculated(System.Boolean)
extern "C"  void DynamicMeshGenericMultiMaterialMesh_set_lightmapUvsCalculated_m4250790504 (DynamicMeshGenericMultiMaterialMesh_t3572930928 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::get_optimised()
extern "C"  bool DynamicMeshGenericMultiMaterialMesh_get_optimised_m3892350031 (DynamicMeshGenericMultiMaterialMesh_t3572930928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::set_optimised(System.Boolean)
extern "C"  void DynamicMeshGenericMultiMaterialMesh_set_optimised_m1375680478 (DynamicMeshGenericMultiMaterialMesh_t3572930928 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::get_isEmpty()
extern "C"  bool DynamicMeshGenericMultiMaterialMesh_get_isEmpty_m2084357746 (DynamicMeshGenericMultiMaterialMesh_t3572930928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::SolveTangents()
extern "C"  void DynamicMeshGenericMultiMaterialMesh_SolveTangents_m1733429489 (DynamicMeshGenericMultiMaterialMesh_t3572930928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::UseNewMesh()
extern "C"  int32_t DynamicMeshGenericMultiMaterialMesh_UseNewMesh_m2893439798 (DynamicMeshGenericMultiMaterialMesh_t3572930928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::UseNewMesh(System.Int32)
extern "C"  int32_t DynamicMeshGenericMultiMaterialMesh_UseNewMesh_m3173709703 (DynamicMeshGenericMultiMaterialMesh_t3572930928 * __this, int32_t ___meshIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::CheckMeshSize(System.Int32)
extern "C"  int32_t DynamicMeshGenericMultiMaterialMesh_CheckMeshSize_m379434905 (DynamicMeshGenericMultiMaterialMesh_t3572930928 * __this, int32_t ___numberOfNewVerts0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::AddData(UnityEngine.Vector3[],UnityEngine.Vector2[],System.Int32[],System.Int32)
extern "C"  void DynamicMeshGenericMultiMaterialMesh_AddData_m2137262076 (DynamicMeshGenericMultiMaterialMesh_t3572930928 * __this, Vector3U5BU5D_t215400611* ___verts0, Vector2U5BU5D_t4024180168* ___uvs1, Int32U5BU5D_t3230847821* ___tris2, int32_t ___subMesh3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::AddTri(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Int32)
extern "C"  void DynamicMeshGenericMultiMaterialMesh_AddTri_m799696608 (DynamicMeshGenericMultiMaterialMesh_t3572930928 * __this, Vector3_t4282066566  ___p00, Vector3_t4282066566  ___p11, Vector3_t4282066566  ___p22, int32_t ___subMesh3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::AddPlane(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Int32)
extern "C"  void DynamicMeshGenericMultiMaterialMesh_AddPlane_m2538729374 (DynamicMeshGenericMultiMaterialMesh_t3572930928 * __this, Vector3_t4282066566  ___p00, Vector3_t4282066566  ___p11, Vector3_t4282066566  ___p22, Vector3_t4282066566  ___p33, int32_t ___subMesh4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::AddPlane(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector2,UnityEngine.Vector2,System.Int32)
extern "C"  void DynamicMeshGenericMultiMaterialMesh_AddPlane_m730827958 (DynamicMeshGenericMultiMaterialMesh_t3572930928 * __this, Vector3_t4282066566  ___p00, Vector3_t4282066566  ___p11, Vector3_t4282066566  ___p22, Vector3_t4282066566  ___p33, Vector2_t4282066565  ___minUV4, Vector2_t4282066565  ___maxUV5, int32_t ___subMesh6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::AddPlane(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Int32)
extern "C"  void DynamicMeshGenericMultiMaterialMesh_AddPlane_m1747988942 (DynamicMeshGenericMultiMaterialMesh_t3572930928 * __this, Vector3_t4282066566  ___p00, Vector3_t4282066566  ___p11, Vector3_t4282066566  ___p22, Vector3_t4282066566  ___p33, Vector2_t4282066565  ___uv04, Vector2_t4282066565  ___uv15, Vector2_t4282066565  ___uv26, Vector2_t4282066565  ___uv37, int32_t ___subMesh8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::CheckMaxTextureUVs(TrackBuildRTexture[])
extern "C"  void DynamicMeshGenericMultiMaterialMesh_CheckMaxTextureUVs_m1467722339 (DynamicMeshGenericMultiMaterialMesh_t3572930928 * __this, TrackBuildRTextureU5BU5D_t1271193445* ___textures0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::Atlas(UnityEngine.Rect[],TrackBuildRTexture[])
extern "C"  void DynamicMeshGenericMultiMaterialMesh_Atlas_m29725830 (DynamicMeshGenericMultiMaterialMesh_t3572930928 * __this, RectU5BU5D_t1023580025* ___newTextureCoords0, TrackBuildRTextureU5BU5D_t1271193445* ___textures1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::Atlas(System.Int32[],UnityEngine.Rect[])
extern "C"  void DynamicMeshGenericMultiMaterialMesh_Atlas_m2633986859 (DynamicMeshGenericMultiMaterialMesh_t3572930928 * __this, Int32U5BU5D_t3230847821* ___modifySubmeshes0, RectU5BU5D_t1023580025* ___newTextureCoords1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::Atlas(System.Int32[],UnityEngine.Rect[],TrackBuildRTexture[])
extern "C"  void DynamicMeshGenericMultiMaterialMesh_Atlas_m1180032429 (DynamicMeshGenericMultiMaterialMesh_t3572930928 * __this, Int32U5BU5D_t3230847821* ___modifySubmeshes0, RectU5BU5D_t1023580025* ___newTextureCoords1, TrackBuildRTextureU5BU5D_t1271193445* ___textures2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRUtil.DynamicMeshGenericMultiMaterialMesh::CollapseSubmeshes()
extern "C"  void DynamicMeshGenericMultiMaterialMesh_CollapseSubmeshes_m2251077490 (DynamicMeshGenericMultiMaterialMesh_t3572930928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
