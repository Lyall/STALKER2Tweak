#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Padlock_Prototype_01

#include "Basic.hpp"

#include "Stalker2_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function BP_Padlock_Prototype_01.BP_Padlock_Prototype_01_C.BndEvt__BP_Padlock_Prototype_01_DamageInteractable_K2Node_ComponentBoundEvent_0_OnDamageAccumulated__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_Padlock_Prototype_01_C_BndEvt__BP_Padlock_Prototype_01_DamageInteractable_K2Node_ComponentBoundEvent_0_OnDamageAccumulated__DelegateSignature final
{
public:
	struct FUID                                   LastDamageDealerUID;                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                          bProjectileFlownThroughObject;                     // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Padlock_Prototype_01_C_BndEvt__BP_Padlock_Prototype_01_DamageInteractable_K2Node_ComponentBoundEvent_0_OnDamageAccumulated__DelegateSignature) == 0x000004, "Wrong alignment on BP_Padlock_Prototype_01_C_BndEvt__BP_Padlock_Prototype_01_DamageInteractable_K2Node_ComponentBoundEvent_0_OnDamageAccumulated__DelegateSignature");
static_assert(sizeof(BP_Padlock_Prototype_01_C_BndEvt__BP_Padlock_Prototype_01_DamageInteractable_K2Node_ComponentBoundEvent_0_OnDamageAccumulated__DelegateSignature) == 0x000008, "Wrong size on BP_Padlock_Prototype_01_C_BndEvt__BP_Padlock_Prototype_01_DamageInteractable_K2Node_ComponentBoundEvent_0_OnDamageAccumulated__DelegateSignature");
static_assert(offsetof(BP_Padlock_Prototype_01_C_BndEvt__BP_Padlock_Prototype_01_DamageInteractable_K2Node_ComponentBoundEvent_0_OnDamageAccumulated__DelegateSignature, LastDamageDealerUID) == 0x000000, "Member 'BP_Padlock_Prototype_01_C_BndEvt__BP_Padlock_Prototype_01_DamageInteractable_K2Node_ComponentBoundEvent_0_OnDamageAccumulated__DelegateSignature::LastDamageDealerUID' has a wrong offset!");
static_assert(offsetof(BP_Padlock_Prototype_01_C_BndEvt__BP_Padlock_Prototype_01_DamageInteractable_K2Node_ComponentBoundEvent_0_OnDamageAccumulated__DelegateSignature, bProjectileFlownThroughObject) == 0x000004, "Member 'BP_Padlock_Prototype_01_C_BndEvt__BP_Padlock_Prototype_01_DamageInteractable_K2Node_ComponentBoundEvent_0_OnDamageAccumulated__DelegateSignature::bProjectileFlownThroughObject' has a wrong offset!");

// Function BP_Padlock_Prototype_01.BP_Padlock_Prototype_01_C.BndEvt__BP_Padlock_Prototype_SignalReceiver_K2Node_ComponentBoundEvent_1_SignalReceiverComponentReceiveSignature__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_Padlock_Prototype_01_C_BndEvt__BP_Padlock_Prototype_SignalReceiver_K2Node_ComponentBoundEvent_1_SignalReceiverComponentReceiveSignature__DelegateSignature final
{
public:
	class UObject*                                DataObject;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Padlock_Prototype_01_C_BndEvt__BP_Padlock_Prototype_SignalReceiver_K2Node_ComponentBoundEvent_1_SignalReceiverComponentReceiveSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_Padlock_Prototype_01_C_BndEvt__BP_Padlock_Prototype_SignalReceiver_K2Node_ComponentBoundEvent_1_SignalReceiverComponentReceiveSignature__DelegateSignature");
static_assert(sizeof(BP_Padlock_Prototype_01_C_BndEvt__BP_Padlock_Prototype_SignalReceiver_K2Node_ComponentBoundEvent_1_SignalReceiverComponentReceiveSignature__DelegateSignature) == 0x000008, "Wrong size on BP_Padlock_Prototype_01_C_BndEvt__BP_Padlock_Prototype_SignalReceiver_K2Node_ComponentBoundEvent_1_SignalReceiverComponentReceiveSignature__DelegateSignature");
static_assert(offsetof(BP_Padlock_Prototype_01_C_BndEvt__BP_Padlock_Prototype_SignalReceiver_K2Node_ComponentBoundEvent_1_SignalReceiverComponentReceiveSignature__DelegateSignature, DataObject) == 0x000000, "Member 'BP_Padlock_Prototype_01_C_BndEvt__BP_Padlock_Prototype_SignalReceiver_K2Node_ComponentBoundEvent_1_SignalReceiverComponentReceiveSignature__DelegateSignature::DataObject' has a wrong offset!");

// Function BP_Padlock_Prototype_01.BP_Padlock_Prototype_01_C.ExecuteUbergraph_BP_Padlock_Prototype_01
// 0x0038 (0x0038 - 0x0000)
struct BP_Padlock_Prototype_01_C_ExecuteUbergraph_BP_Padlock_Prototype_01 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsBroken_ReturnValue;                     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0008(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_ComponentBoundEvent_DataObject;             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUnbreakable_ReturnValue;                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsBroken_ReturnValue_1;                   // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x2];                                       // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUID                                   K2Node_ComponentBoundEvent_LastDamageDealerUID;    // 0x0024(0x0004)(NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bProjectileFlownThroughObject; // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bInteractPaint;                       // 0x0029(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x2];                                       // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAnySignal_ReturnValue;                 // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Padlock_Prototype_01_C_ExecuteUbergraph_BP_Padlock_Prototype_01) == 0x000008, "Wrong alignment on BP_Padlock_Prototype_01_C_ExecuteUbergraph_BP_Padlock_Prototype_01");
static_assert(sizeof(BP_Padlock_Prototype_01_C_ExecuteUbergraph_BP_Padlock_Prototype_01) == 0x000038, "Wrong size on BP_Padlock_Prototype_01_C_ExecuteUbergraph_BP_Padlock_Prototype_01");
static_assert(offsetof(BP_Padlock_Prototype_01_C_ExecuteUbergraph_BP_Padlock_Prototype_01, EntryPoint) == 0x000000, "Member 'BP_Padlock_Prototype_01_C_ExecuteUbergraph_BP_Padlock_Prototype_01::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Padlock_Prototype_01_C_ExecuteUbergraph_BP_Padlock_Prototype_01, CallFunc_IsBroken_ReturnValue) == 0x000004, "Member 'BP_Padlock_Prototype_01_C_ExecuteUbergraph_BP_Padlock_Prototype_01::CallFunc_IsBroken_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Padlock_Prototype_01_C_ExecuteUbergraph_BP_Padlock_Prototype_01, Temp_delegate_Variable) == 0x000008, "Member 'BP_Padlock_Prototype_01_C_ExecuteUbergraph_BP_Padlock_Prototype_01::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_Padlock_Prototype_01_C_ExecuteUbergraph_BP_Padlock_Prototype_01, K2Node_ComponentBoundEvent_DataObject) == 0x000018, "Member 'BP_Padlock_Prototype_01_C_ExecuteUbergraph_BP_Padlock_Prototype_01::K2Node_ComponentBoundEvent_DataObject' has a wrong offset!");
static_assert(offsetof(BP_Padlock_Prototype_01_C_ExecuteUbergraph_BP_Padlock_Prototype_01, CallFunc_IsUnbreakable_ReturnValue) == 0x000020, "Member 'BP_Padlock_Prototype_01_C_ExecuteUbergraph_BP_Padlock_Prototype_01::CallFunc_IsUnbreakable_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Padlock_Prototype_01_C_ExecuteUbergraph_BP_Padlock_Prototype_01, CallFunc_IsBroken_ReturnValue_1) == 0x000021, "Member 'BP_Padlock_Prototype_01_C_ExecuteUbergraph_BP_Padlock_Prototype_01::CallFunc_IsBroken_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Padlock_Prototype_01_C_ExecuteUbergraph_BP_Padlock_Prototype_01, K2Node_ComponentBoundEvent_LastDamageDealerUID) == 0x000024, "Member 'BP_Padlock_Prototype_01_C_ExecuteUbergraph_BP_Padlock_Prototype_01::K2Node_ComponentBoundEvent_LastDamageDealerUID' has a wrong offset!");
static_assert(offsetof(BP_Padlock_Prototype_01_C_ExecuteUbergraph_BP_Padlock_Prototype_01, K2Node_ComponentBoundEvent_bProjectileFlownThroughObject) == 0x000028, "Member 'BP_Padlock_Prototype_01_C_ExecuteUbergraph_BP_Padlock_Prototype_01::K2Node_ComponentBoundEvent_bProjectileFlownThroughObject' has a wrong offset!");
static_assert(offsetof(BP_Padlock_Prototype_01_C_ExecuteUbergraph_BP_Padlock_Prototype_01, K2Node_Event_bInteractPaint) == 0x000029, "Member 'BP_Padlock_Prototype_01_C_ExecuteUbergraph_BP_Padlock_Prototype_01::K2Node_Event_bInteractPaint' has a wrong offset!");
static_assert(offsetof(BP_Padlock_Prototype_01_C_ExecuteUbergraph_BP_Padlock_Prototype_01, CallFunc_PostAkEvent_ReturnValue) == 0x00002C, "Member 'BP_Padlock_Prototype_01_C_ExecuteUbergraph_BP_Padlock_Prototype_01::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Padlock_Prototype_01_C_ExecuteUbergraph_BP_Padlock_Prototype_01, CallFunc_HasAnySignal_ReturnValue) == 0x000030, "Member 'BP_Padlock_Prototype_01_C_ExecuteUbergraph_BP_Padlock_Prototype_01::CallFunc_HasAnySignal_ReturnValue' has a wrong offset!");

// Function BP_Padlock_Prototype_01.BP_Padlock_Prototype_01_C.OnPaintSettingsChanged
// 0x0001 (0x0001 - 0x0000)
struct BP_Padlock_Prototype_01_C_OnPaintSettingsChanged final
{
public:
	bool                                          bInteractPaint;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Padlock_Prototype_01_C_OnPaintSettingsChanged) == 0x000001, "Wrong alignment on BP_Padlock_Prototype_01_C_OnPaintSettingsChanged");
static_assert(sizeof(BP_Padlock_Prototype_01_C_OnPaintSettingsChanged) == 0x000001, "Wrong size on BP_Padlock_Prototype_01_C_OnPaintSettingsChanged");
static_assert(offsetof(BP_Padlock_Prototype_01_C_OnPaintSettingsChanged, bInteractPaint) == 0x000000, "Member 'BP_Padlock_Prototype_01_C_OnPaintSettingsChanged::bInteractPaint' has a wrong offset!");

}

