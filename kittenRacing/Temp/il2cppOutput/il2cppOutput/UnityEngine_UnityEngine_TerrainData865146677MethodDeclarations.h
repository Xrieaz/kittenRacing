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

// UnityEngine.TerrainData
struct TerrainData_t865146677;
// System.Single[,]
struct SingleU5BU2CU5D_t2316563990;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void UnityEngine.TerrainData::.cctor()
extern "C"  void TerrainData__cctor_m575746355 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TerrainData::Internal_GetMaximumResolution()
extern "C"  int32_t TerrainData_Internal_GetMaximumResolution_m495208176 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TerrainData::Internal_GetMinimumDetailResolutionPerPatch()
extern "C"  int32_t TerrainData_Internal_GetMinimumDetailResolutionPerPatch_m1805498010 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TerrainData::Internal_GetMaximumDetailResolutionPerPatch()
extern "C"  int32_t TerrainData_Internal_GetMaximumDetailResolutionPerPatch_m4214458924 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TerrainData::Internal_GetMaximumDetailPatchCount()
extern "C"  int32_t TerrainData_Internal_GetMaximumDetailPatchCount_m1812702684 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TerrainData::Internal_GetMinimumAlphamapResolution()
extern "C"  int32_t TerrainData_Internal_GetMinimumAlphamapResolution_m3216138556 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TerrainData::Internal_GetMaximumAlphamapResolution()
extern "C"  int32_t TerrainData_Internal_GetMaximumAlphamapResolution_m3670723150 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TerrainData::Internal_GetMinimumBaseMapResolution()
extern "C"  int32_t TerrainData_Internal_GetMinimumBaseMapResolution_m852931783 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TerrainData::Internal_GetMaximumBaseMapResolution()
extern "C"  int32_t TerrainData_Internal_GetMaximumBaseMapResolution_m3915637109 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TerrainData::get_heightmapWidth()
extern "C"  int32_t TerrainData_get_heightmapWidth_m1963864420 (TerrainData_t865146677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TerrainData::get_heightmapHeight()
extern "C"  int32_t TerrainData_get_heightmapHeight_m1254069227 (TerrainData_t865146677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.TerrainData::get_heightmapScale()
extern "C"  Vector3_t4282066566  TerrainData_get_heightmapScale_m2615577646 (TerrainData_t865146677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TerrainData::INTERNAL_get_heightmapScale(UnityEngine.Vector3&)
extern "C"  void TerrainData_INTERNAL_get_heightmapScale_m1768705803 (TerrainData_t865146677 * __this, Vector3_t4282066566 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.TerrainData::get_size()
extern "C"  Vector3_t4282066566  TerrainData_get_size_m1704519610 (TerrainData_t865146677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TerrainData::INTERNAL_get_size(UnityEngine.Vector3&)
extern "C"  void TerrainData_INTERNAL_get_size_m432832791 (TerrainData_t865146677 * __this, Vector3_t4282066566 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[,] UnityEngine.TerrainData::GetHeights(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  SingleU5BU2CU5D_t2316563990* TerrainData_GetHeights_m2798962768 (TerrainData_t865146677 * __this, int32_t ___xBase0, int32_t ___yBase1, int32_t ___width2, int32_t ___height3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TerrainData::SetHeights(System.Int32,System.Int32,System.Single[,])
extern "C"  void TerrainData_SetHeights_m3396227887 (TerrainData_t865146677 * __this, int32_t ___xBase0, int32_t ___yBase1, SingleU5BU2CU5D_t2316563990* ___heights2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TerrainData::Internal_SetHeights(System.Int32,System.Int32,System.Int32,System.Int32,System.Single[,])
extern "C"  void TerrainData_Internal_SetHeights_m1876148159 (TerrainData_t865146677 * __this, int32_t ___xBase0, int32_t ___yBase1, int32_t ___width2, int32_t ___height3, SingleU5BU2CU5D_t2316563990* ___heights4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
