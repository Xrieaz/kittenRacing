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

// Bezier3D
struct Bezier3D_t2097769904;
// OrientedPoint[]
struct OrientedPointU5BU5D_t3230427557;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void Bezier3D::.ctor()
extern "C"  void Bezier3D__ctor_m1564456683 (Bezier3D_t2097769904 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OrientedPoint[] Bezier3D::GetPath()
extern "C"  OrientedPointU5BU5D_t3230427557* Bezier3D_GetPath_m4206182527 (Bezier3D_t2097769904 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bezier3D::Start()
extern "C"  void Bezier3D_Start_m511594475 (Bezier3D_t2097769904 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bezier3D::ReDrawMesh()
extern "C"  void Bezier3D_ReDrawMesh_m322797213 (Bezier3D_t2097769904 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bezier3D::UpdateMesh()
extern "C"  void Bezier3D_UpdateMesh_m1045367759 (Bezier3D_t2097769904 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Bezier3D::GetInvertedPositionAroundPoint(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t4282066566  Bezier3D_GetInvertedPositionAroundPoint_m2216124426 (Bezier3D_t2097769904 * __this, Vector3_t4282066566  ___middle0, Vector3_t4282066566  ___point1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
