#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 UnityEngine.Vector3 UnityEngine.WheelHit::get_normal()
extern void WheelHit_get_normal_mBC99D67AD92266C0B5EBCF8C2FC771BAE34E9D12 (void);
// 0x00000002 System.Single UnityEngine.WheelHit::get_forwardSlip()
extern void WheelHit_get_forwardSlip_m8F11089F49F1049C5D993A0E360E8738D7E600FC (void);
// 0x00000003 System.Single UnityEngine.WheelHit::get_sidewaysSlip()
extern void WheelHit_get_sidewaysSlip_m6AA5854F880C9BCDA98A22DBB694408954BB0CED (void);
// 0x00000004 System.Single UnityEngine.WheelCollider::get_radius()
extern void WheelCollider_get_radius_mDB04C14DAB0BB1D5D7A2D160C5EE3F159CE3FA26 (void);
// 0x00000005 System.Void UnityEngine.WheelCollider::set_motorTorque(System.Single)
extern void WheelCollider_set_motorTorque_mFE7962DF8003D10BA646545E56F0A6B3ED8803DA (void);
// 0x00000006 System.Void UnityEngine.WheelCollider::set_brakeTorque(System.Single)
extern void WheelCollider_set_brakeTorque_mDAFB1032B6B3AD4C8103869D64807596774C1B54 (void);
// 0x00000007 System.Void UnityEngine.WheelCollider::set_steerAngle(System.Single)
extern void WheelCollider_set_steerAngle_m1E46602E8B77EB747B1EA44D84B5EC99F86BB968 (void);
// 0x00000008 System.Void UnityEngine.WheelCollider::GetWorldPose(UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern void WheelCollider_GetWorldPose_m227D45061C7734F3ED4A43B7F89605A398BE8BB5 (void);
// 0x00000009 System.Boolean UnityEngine.WheelCollider::GetGroundHit(UnityEngine.WheelHit&)
extern void WheelCollider_GetGroundHit_mDCD55AC74710E685DBA37F02C904B8F8F3E59DB9 (void);
static Il2CppMethodPointer s_methodPointers[9] = 
{
	WheelHit_get_normal_mBC99D67AD92266C0B5EBCF8C2FC771BAE34E9D12,
	WheelHit_get_forwardSlip_m8F11089F49F1049C5D993A0E360E8738D7E600FC,
	WheelHit_get_sidewaysSlip_m6AA5854F880C9BCDA98A22DBB694408954BB0CED,
	WheelCollider_get_radius_mDB04C14DAB0BB1D5D7A2D160C5EE3F159CE3FA26,
	WheelCollider_set_motorTorque_mFE7962DF8003D10BA646545E56F0A6B3ED8803DA,
	WheelCollider_set_brakeTorque_mDAFB1032B6B3AD4C8103869D64807596774C1B54,
	WheelCollider_set_steerAngle_m1E46602E8B77EB747B1EA44D84B5EC99F86BB968,
	WheelCollider_GetWorldPose_m227D45061C7734F3ED4A43B7F89605A398BE8BB5,
	WheelCollider_GetGroundHit_mDCD55AC74710E685DBA37F02C904B8F8F3E59DB9,
};
extern void WheelHit_get_normal_mBC99D67AD92266C0B5EBCF8C2FC771BAE34E9D12_AdjustorThunk (void);
extern void WheelHit_get_forwardSlip_m8F11089F49F1049C5D993A0E360E8738D7E600FC_AdjustorThunk (void);
extern void WheelHit_get_sidewaysSlip_m6AA5854F880C9BCDA98A22DBB694408954BB0CED_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[3] = 
{
	{ 0x06000001, WheelHit_get_normal_mBC99D67AD92266C0B5EBCF8C2FC771BAE34E9D12_AdjustorThunk },
	{ 0x06000002, WheelHit_get_forwardSlip_m8F11089F49F1049C5D993A0E360E8738D7E600FC_AdjustorThunk },
	{ 0x06000003, WheelHit_get_sidewaysSlip_m6AA5854F880C9BCDA98A22DBB694408954BB0CED_AdjustorThunk },
};
static const int32_t s_InvokerIndices[9] = 
{
	2484,
	2463,
	2463,
	2463,
	2070,
	2070,
	2070,
	987,
	1724,
};
extern const CustomAttributesCacheGenerator g_UnityEngine_VehiclesModule_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_VehiclesModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_VehiclesModule_CodeGenModule = 
{
	"UnityEngine.VehiclesModule.dll",
	9,
	s_methodPointers,
	3,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_UnityEngine_VehiclesModule_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
