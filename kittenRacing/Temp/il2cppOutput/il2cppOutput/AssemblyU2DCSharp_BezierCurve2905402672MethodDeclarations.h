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

// BezierCurve
struct BezierCurve_t2905402672;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// UnityEngine.Mesh
struct Mesh_t4241756145;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t4024180168;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// System.Collections.Generic.IEnumerable`1<OrientedPoint>
struct IEnumerable_1_t2492920681;
// ExtrudeShape
struct ExtrudeShape_t1791658780;
// OrientedPoint[]
struct OrientedPointU5BU5D_t3230427557;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"
#include "AssemblyU2DCSharp_OrientedPoint3486975020.h"
#include "UnityEngine_UnityEngine_Mesh4241756145.h"
#include "AssemblyU2DCSharp_ExtrudeShape1791658780.h"

// System.Void BezierCurve::.ctor(UnityEngine.Vector3[],System.Single,System.Single)
extern "C"  void BezierCurve__ctor_m2498413158 (BezierCurve_t2905402672 * __this, Vector3U5BU5D_t215400611* ___points0, float ___rotationP11, float ___rotationP42, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BezierCurve::GenerateSamples()
extern "C"  void BezierCurve_GenerateSamples_m709098285 (BezierCurve_t2905402672 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 BezierCurve::GetNormal(System.Single,UnityEngine.Vector3)
extern "C"  Vector3_t4282066566  BezierCurve_GetNormal_m1875832910 (BezierCurve_t2905402672 * __this, float ___t0, Vector3_t4282066566  ___up1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 BezierCurve::CalculateNormal(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t4282066566  BezierCurve_CalculateNormal_m1737658092 (BezierCurve_t2905402672 * __this, Vector3_t4282066566  ___tangent0, Vector3_t4282066566  ___up1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 BezierCurve::CalculateTangent(System.Single,System.Single,System.Single)
extern "C"  Vector3_t4282066566  BezierCurve_CalculateTangent_m2829485767 (BezierCurve_t2905402672 * __this, float ___t0, float ___t21, float ___it22, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 BezierCurve::CalculatePoint(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  Vector3_t4282066566  BezierCurve_CalculatePoint_m3294115851 (BezierCurve_t2905402672 * __this, float ___t0, float ___t21, float ___t32, float ___it3, float ___it24, float ___it35, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 BezierCurve::GetTangent(System.Single)
extern "C"  Vector3_t4282066566  BezierCurve_GetTangent_m4078891181 (BezierCurve_t2905402672 * __this, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 BezierCurve::GetPoint(System.Single,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  Vector3_t4282066566  BezierCurve_GetPoint_m2182973245 (BezierCurve_t2905402672 * __this, float ___t0, Vector3_t4282066566 * ___tangent1, Vector3_t4282066566 * ___normal2, Quaternion_t1553702882 * ___orientation3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 BezierCurve::GetPoint(System.Single,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  Vector3_t4282066566  BezierCurve_GetPoint_m1306638114 (BezierCurve_t2905402672 * __this, float ___t0, Vector3_t4282066566 * ___tangent1, Vector3_t4282066566 * ___normal2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 BezierCurve::GetPoint(System.Single,UnityEngine.Vector3&)
extern "C"  Vector3_t4282066566  BezierCurve_GetPoint_m1591603671 (BezierCurve_t2905402672 * __this, float ___t0, Vector3_t4282066566 * ___tangent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 BezierCurve::GetPoint(System.Single)
extern "C"  Vector3_t4282066566  BezierCurve_GetPoint_m3492728834 (BezierCurve_t2905402672 * __this, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion BezierCurve::GetOrientation(System.Single)
extern "C"  Quaternion_t1553702882  BezierCurve_GetOrientation_m3174080976 (BezierCurve_t2905402672 * __this, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OrientedPoint BezierCurve::GetOrientedPoint(System.Single)
extern "C"  OrientedPoint_t3486975020  BezierCurve_GetOrientedPoint_m3835856627 (BezierCurve_t2905402672 * __this, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh BezierCurve::ToMesh(UnityEngine.Vector2[],UnityEngine.Vector2[],System.Single[])
extern "C"  Mesh_t4241756145 * BezierCurve_ToMesh_m114224629 (BezierCurve_t2905402672 * __this, Vector2U5BU5D_t4024180168* ___verts0, Vector2U5BU5D_t4024180168* ___normals1, SingleU5BU5D_t2316563989* ___uCoords2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<OrientedPoint> BezierCurve::GeneratePath(System.Single)
extern "C"  Il2CppObject* BezierCurve_GeneratePath_m2339761952 (BezierCurve_t2905402672 * __this, float ___subDivisions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BezierCurve::Extrude(UnityEngine.Mesh,ExtrudeShape,OrientedPoint[])
extern "C"  void BezierCurve_Extrude_m622752366 (BezierCurve_t2905402672 * __this, Mesh_t4241756145 * ___mesh0, ExtrudeShape_t1791658780 * ___shape1, OrientedPointU5BU5D_t3230427557* ___path2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
