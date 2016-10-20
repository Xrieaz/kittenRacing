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

// TrackBuildRTexture
struct TrackBuildRTexture_t1839788396;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t2526458961;
// UnityEngine.ProceduralMaterial
struct ProceduralMaterial_t3619291528;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_t211873335;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Texture2526458961.h"
#include "UnityEngine_UnityEngine_ProceduralMaterial3619291528.h"
#include "UnityEngine_UnityEngine_Material3870600107.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_PhysicMaterial211873335.h"

// System.Void TrackBuildRTexture::.ctor()
extern "C"  void TrackBuildRTexture__ctor_m2046290095 (TrackBuildRTexture_t1839788396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRTexture::Reset()
extern "C"  void TrackBuildRTexture_Reset_m3987690332 (TrackBuildRTexture_t1839788396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TrackBuildRTexture TrackBuildRTexture::Duplicate()
extern "C"  TrackBuildRTexture_t1839788396 * TrackBuildRTexture_Duplicate_m1076864359 (TrackBuildRTexture_t1839788396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TrackBuildRTexture TrackBuildRTexture::Duplicate(System.String)
extern "C"  TrackBuildRTexture_t1839788396 * TrackBuildRTexture_Duplicate_m1841445115 (TrackBuildRTexture_t1839788396 * __this, String_t* ___newName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture TrackBuildRTexture::get_texture()
extern "C"  Texture_t2526458961 * TrackBuildRTexture_get_texture_m3257049712 (TrackBuildRTexture_t1839788396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRTexture::set_texture(UnityEngine.Texture)
extern "C"  void TrackBuildRTexture_set_texture_m3696638435 (TrackBuildRTexture_t1839788396 * __this, Texture_t2526458961 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TrackBuildRTexture::get_isSubstance()
extern "C"  bool TrackBuildRTexture_get_isSubstance_m859572598 (TrackBuildRTexture_t1839788396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TrackBuildRTexture::get_isUSer()
extern "C"  bool TrackBuildRTexture_get_isUSer_m2415054791 (TrackBuildRTexture_t1839788396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ProceduralMaterial TrackBuildRTexture::get_proceduralMaterial()
extern "C"  ProceduralMaterial_t3619291528 * TrackBuildRTexture_get_proceduralMaterial_m3347497924 (TrackBuildRTexture_t1839788396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRTexture::set_proceduralMaterial(UnityEngine.ProceduralMaterial)
extern "C"  void TrackBuildRTexture_set_proceduralMaterial_m2415802747 (TrackBuildRTexture_t1839788396 * __this, ProceduralMaterial_t3619291528 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material TrackBuildRTexture::get_userMaterial()
extern "C"  Material_t3870600107 * TrackBuildRTexture_get_userMaterial_m4256419983 (TrackBuildRTexture_t1839788396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRTexture::set_userMaterial(UnityEngine.Material)
extern "C"  void TrackBuildRTexture_set_userMaterial_m24871046 (TrackBuildRTexture_t1839788396 * __this, Material_t3870600107 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TrackBuildRTexture::get_tileUnitUV()
extern "C"  Vector2_t4282066565  TrackBuildRTexture_get_tileUnitUV_m2756689516 (TrackBuildRTexture_t1839788396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRTexture::set_tileUnitUV(UnityEngine.Vector2)
extern "C"  void TrackBuildRTexture_set_tileUnitUV_m3745005205 (TrackBuildRTexture_t1839788396 * __this, Vector2_t4282066565  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TrackBuildRTexture::get_textureUnitSize()
extern "C"  Vector2_t4282066565  TrackBuildRTexture_get_textureUnitSize_m3409807145 (TrackBuildRTexture_t1839788396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRTexture::set_textureUnitSize(UnityEngine.Vector2)
extern "C"  void TrackBuildRTexture_set_textureUnitSize_m2003330442 (TrackBuildRTexture_t1839788396 * __this, Vector2_t4282066565  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRTexture::CheckMaxUV(UnityEngine.Vector2)
extern "C"  void TrackBuildRTexture_CheckMaxUV_m1624009512 (TrackBuildRTexture_t1839788396 * __this, Vector2_t4282066565  ___checkUV0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRTexture::MaxWorldUnitsFromUVs(UnityEngine.Vector2)
extern "C"  void TrackBuildRTexture_MaxWorldUnitsFromUVs_m2625140222 (TrackBuildRTexture_t1839788396 * __this, Vector2_t4282066565  ___uv0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material TrackBuildRTexture::GetMaterial()
extern "C"  Material_t3870600107 * TrackBuildRTexture_GetMaterial_m845197931 (TrackBuildRTexture_t1839788396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.PhysicMaterial TrackBuildRTexture::get_physicMaterial()
extern "C"  PhysicMaterial_t211873335 * TrackBuildRTexture_get_physicMaterial_m74560356 (TrackBuildRTexture_t1839788396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRTexture::set_physicMaterial(UnityEngine.PhysicMaterial)
extern "C"  void TrackBuildRTexture_set_physicMaterial_m3642736219 (TrackBuildRTexture_t1839788396 * __this, PhysicMaterial_t211873335 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
