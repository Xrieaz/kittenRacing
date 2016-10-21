#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<AxleInfo>
struct List_1_t1000507310;
// Bezier3D
struct Bezier3D_t2097769904;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleCarController
struct  SimpleCarController_t2626395614  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.List`1<AxleInfo> SimpleCarController::axleInfos
	List_1_t1000507310 * ___axleInfos_2;
	// System.Single SimpleCarController::maxMotorTorque
	float ___maxMotorTorque_3;
	// System.Single SimpleCarController::maxSteeringAngle
	float ___maxSteeringAngle_4;
	// System.Single SimpleCarController::brakeForce
	float ___brakeForce_5;
	// UnityEngine.Vector3 SimpleCarController::centerOfMassCorrection
	Vector3_t4282066566  ___centerOfMassCorrection_6;
	// System.Boolean SimpleCarController::playerControlled
	bool ___playerControlled_7;
	// System.Boolean SimpleCarController::braking
	bool ___braking_8;
	// Bezier3D SimpleCarController::m_currentBezier
	Bezier3D_t2097769904 * ___m_currentBezier_9;
	// UnityEngine.Vector3 SimpleCarController::m_targetDir
	Vector3_t4282066566  ___m_targetDir_10;
	// System.Int32 SimpleCarController::m_pathIndex
	int32_t ___m_pathIndex_11;
	// System.Single SimpleCarController::timerToStart
	float ___timerToStart_12;
	// System.Single SimpleCarController::time
	float ___time_13;

public:
	inline static int32_t get_offset_of_axleInfos_2() { return static_cast<int32_t>(offsetof(SimpleCarController_t2626395614, ___axleInfos_2)); }
	inline List_1_t1000507310 * get_axleInfos_2() const { return ___axleInfos_2; }
	inline List_1_t1000507310 ** get_address_of_axleInfos_2() { return &___axleInfos_2; }
	inline void set_axleInfos_2(List_1_t1000507310 * value)
	{
		___axleInfos_2 = value;
		Il2CppCodeGenWriteBarrier(&___axleInfos_2, value);
	}

	inline static int32_t get_offset_of_maxMotorTorque_3() { return static_cast<int32_t>(offsetof(SimpleCarController_t2626395614, ___maxMotorTorque_3)); }
	inline float get_maxMotorTorque_3() const { return ___maxMotorTorque_3; }
	inline float* get_address_of_maxMotorTorque_3() { return &___maxMotorTorque_3; }
	inline void set_maxMotorTorque_3(float value)
	{
		___maxMotorTorque_3 = value;
	}

	inline static int32_t get_offset_of_maxSteeringAngle_4() { return static_cast<int32_t>(offsetof(SimpleCarController_t2626395614, ___maxSteeringAngle_4)); }
	inline float get_maxSteeringAngle_4() const { return ___maxSteeringAngle_4; }
	inline float* get_address_of_maxSteeringAngle_4() { return &___maxSteeringAngle_4; }
	inline void set_maxSteeringAngle_4(float value)
	{
		___maxSteeringAngle_4 = value;
	}

	inline static int32_t get_offset_of_brakeForce_5() { return static_cast<int32_t>(offsetof(SimpleCarController_t2626395614, ___brakeForce_5)); }
	inline float get_brakeForce_5() const { return ___brakeForce_5; }
	inline float* get_address_of_brakeForce_5() { return &___brakeForce_5; }
	inline void set_brakeForce_5(float value)
	{
		___brakeForce_5 = value;
	}

	inline static int32_t get_offset_of_centerOfMassCorrection_6() { return static_cast<int32_t>(offsetof(SimpleCarController_t2626395614, ___centerOfMassCorrection_6)); }
	inline Vector3_t4282066566  get_centerOfMassCorrection_6() const { return ___centerOfMassCorrection_6; }
	inline Vector3_t4282066566 * get_address_of_centerOfMassCorrection_6() { return &___centerOfMassCorrection_6; }
	inline void set_centerOfMassCorrection_6(Vector3_t4282066566  value)
	{
		___centerOfMassCorrection_6 = value;
	}

	inline static int32_t get_offset_of_playerControlled_7() { return static_cast<int32_t>(offsetof(SimpleCarController_t2626395614, ___playerControlled_7)); }
	inline bool get_playerControlled_7() const { return ___playerControlled_7; }
	inline bool* get_address_of_playerControlled_7() { return &___playerControlled_7; }
	inline void set_playerControlled_7(bool value)
	{
		___playerControlled_7 = value;
	}

	inline static int32_t get_offset_of_braking_8() { return static_cast<int32_t>(offsetof(SimpleCarController_t2626395614, ___braking_8)); }
	inline bool get_braking_8() const { return ___braking_8; }
	inline bool* get_address_of_braking_8() { return &___braking_8; }
	inline void set_braking_8(bool value)
	{
		___braking_8 = value;
	}

	inline static int32_t get_offset_of_m_currentBezier_9() { return static_cast<int32_t>(offsetof(SimpleCarController_t2626395614, ___m_currentBezier_9)); }
	inline Bezier3D_t2097769904 * get_m_currentBezier_9() const { return ___m_currentBezier_9; }
	inline Bezier3D_t2097769904 ** get_address_of_m_currentBezier_9() { return &___m_currentBezier_9; }
	inline void set_m_currentBezier_9(Bezier3D_t2097769904 * value)
	{
		___m_currentBezier_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_currentBezier_9, value);
	}

	inline static int32_t get_offset_of_m_targetDir_10() { return static_cast<int32_t>(offsetof(SimpleCarController_t2626395614, ___m_targetDir_10)); }
	inline Vector3_t4282066566  get_m_targetDir_10() const { return ___m_targetDir_10; }
	inline Vector3_t4282066566 * get_address_of_m_targetDir_10() { return &___m_targetDir_10; }
	inline void set_m_targetDir_10(Vector3_t4282066566  value)
	{
		___m_targetDir_10 = value;
	}

	inline static int32_t get_offset_of_m_pathIndex_11() { return static_cast<int32_t>(offsetof(SimpleCarController_t2626395614, ___m_pathIndex_11)); }
	inline int32_t get_m_pathIndex_11() const { return ___m_pathIndex_11; }
	inline int32_t* get_address_of_m_pathIndex_11() { return &___m_pathIndex_11; }
	inline void set_m_pathIndex_11(int32_t value)
	{
		___m_pathIndex_11 = value;
	}

	inline static int32_t get_offset_of_timerToStart_12() { return static_cast<int32_t>(offsetof(SimpleCarController_t2626395614, ___timerToStart_12)); }
	inline float get_timerToStart_12() const { return ___timerToStart_12; }
	inline float* get_address_of_timerToStart_12() { return &___timerToStart_12; }
	inline void set_timerToStart_12(float value)
	{
		___timerToStart_12 = value;
	}

	inline static int32_t get_offset_of_time_13() { return static_cast<int32_t>(offsetof(SimpleCarController_t2626395614, ___time_13)); }
	inline float get_time_13() const { return ___time_13; }
	inline float* get_address_of_time_13() { return &___time_13; }
	inline void set_time_13(float value)
	{
		___time_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
