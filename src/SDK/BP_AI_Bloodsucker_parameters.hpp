#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AI_Bloodsucker

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "AkAudio_structs.hpp"
#include "Stalker2_structs.hpp"


namespace SDK::Params
{

// Function BP_AI_Bloodsucker.BP_AI_Bloodsucker_C.ExecuteUbergraph_BP_AI_Bloodsucker
// 0x00F0 (0x00F0 - 0x0000)
struct BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0004(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable_1;                          // 0x0018(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable_2;                          // 0x0028(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable_3;                          // 0x0038(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable_4;                          // 0x0048(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable_5;                          // 0x0058(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable_6;                          // 0x0068(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable_7;                          // 0x0078(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable_8;                          // 0x0088(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x3];                                       // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           K2Node_Event_EventTag;                             // 0x009C(0x0008)(ConstParm, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UGameplayEventData*               K2Node_Event_EventData;                            // 0x00A8(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilityEventData*                      K2Node_DynamicCast_AsAbility_Event_Data;           // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsObjAlive_ReturnValue;                   // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAbility                                      CallFunc_GetAbilityType_ReturnValue;               // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BB[0x5];                                       // 0x00BB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UAgentBehaviourEventData*               K2Node_DynamicCast_AsAgent_Behaviour_Event_Data;   // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGoalType                                     CallFunc_GetGoalType_ReturnValue;                  // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_1; // 0x00CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue_1;                // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue_2;                // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue_3;                // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue_4;                // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue_5;                // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue_6;                // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue_7;                // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue_8;                // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker) == 0x000008, "Wrong alignment on BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker");
static_assert(sizeof(BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker) == 0x0000F0, "Wrong size on BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker");
static_assert(offsetof(BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker, EntryPoint) == 0x000000, "Member 'BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker, Temp_delegate_Variable) == 0x000004, "Member 'BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker, K2Node_SwitchEnum_CmpSuccess) == 0x000014, "Member 'BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker, Temp_delegate_Variable_1) == 0x000018, "Member 'BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker::Temp_delegate_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker, Temp_delegate_Variable_2) == 0x000028, "Member 'BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker::Temp_delegate_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker, Temp_delegate_Variable_3) == 0x000038, "Member 'BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker::Temp_delegate_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker, Temp_delegate_Variable_4) == 0x000048, "Member 'BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker::Temp_delegate_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker, Temp_delegate_Variable_5) == 0x000058, "Member 'BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker::Temp_delegate_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker, Temp_delegate_Variable_6) == 0x000068, "Member 'BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker::Temp_delegate_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker, Temp_delegate_Variable_7) == 0x000078, "Member 'BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker::Temp_delegate_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker, Temp_delegate_Variable_8) == 0x000088, "Member 'BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker::Temp_delegate_Variable_8' has a wrong offset!");
static_assert(offsetof(BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker, K2Node_SwitchEnum_CmpSuccess_1) == 0x000098, "Member 'BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker, K2Node_Event_EventTag) == 0x00009C, "Member 'BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker::K2Node_Event_EventTag' has a wrong offset!");
static_assert(offsetof(BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker, K2Node_Event_EventData) == 0x0000A8, "Member 'BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker, K2Node_DynamicCast_AsAbility_Event_Data) == 0x0000B0, "Member 'BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker::K2Node_DynamicCast_AsAbility_Event_Data' has a wrong offset!");
static_assert(offsetof(BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker, K2Node_DynamicCast_bSuccess) == 0x0000B8, "Member 'BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker, CallFunc_IsObjAlive_ReturnValue) == 0x0000B9, "Member 'BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker::CallFunc_IsObjAlive_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker, CallFunc_GetAbilityType_ReturnValue) == 0x0000BA, "Member 'BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker::CallFunc_GetAbilityType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker, K2Node_DynamicCast_AsAgent_Behaviour_Event_Data) == 0x0000C0, "Member 'BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker::K2Node_DynamicCast_AsAgent_Behaviour_Event_Data' has a wrong offset!");
static_assert(offsetof(BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker, K2Node_DynamicCast_bSuccess_1) == 0x0000C8, "Member 'BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker, GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess) == 0x0000C9, "Member 'BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker::GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker, CallFunc_GetGoalType_ReturnValue) == 0x0000CA, "Member 'BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker::CallFunc_GetGoalType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker, GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_1) == 0x0000CB, "Member 'BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker::GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker, CallFunc_PostAkEvent_ReturnValue) == 0x0000CC, "Member 'BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker, CallFunc_PostAkEvent_ReturnValue_1) == 0x0000D0, "Member 'BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker::CallFunc_PostAkEvent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker, CallFunc_PostAkEvent_ReturnValue_2) == 0x0000D4, "Member 'BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker::CallFunc_PostAkEvent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker, CallFunc_PostAkEvent_ReturnValue_3) == 0x0000D8, "Member 'BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker::CallFunc_PostAkEvent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker, CallFunc_PostAkEvent_ReturnValue_4) == 0x0000DC, "Member 'BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker::CallFunc_PostAkEvent_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker, CallFunc_PostAkEvent_ReturnValue_5) == 0x0000E0, "Member 'BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker::CallFunc_PostAkEvent_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker, CallFunc_PostAkEvent_ReturnValue_6) == 0x0000E4, "Member 'BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker::CallFunc_PostAkEvent_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker, CallFunc_PostAkEvent_ReturnValue_7) == 0x0000E8, "Member 'BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker::CallFunc_PostAkEvent_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker, CallFunc_PostAkEvent_ReturnValue_8) == 0x0000EC, "Member 'BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker::CallFunc_PostAkEvent_ReturnValue_8' has a wrong offset!");

// Function BP_AI_Bloodsucker.BP_AI_Bloodsucker_C.OnGameplayEvent
// 0x0010 (0x0010 - 0x0000)
struct BP_AI_Bloodsucker_C_OnGameplayEvent final
{
public:
	struct FGameplayTag                           EventTag;                                          // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	const class UGameplayEventData*               EventData;                                         // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AI_Bloodsucker_C_OnGameplayEvent) == 0x000008, "Wrong alignment on BP_AI_Bloodsucker_C_OnGameplayEvent");
static_assert(sizeof(BP_AI_Bloodsucker_C_OnGameplayEvent) == 0x000010, "Wrong size on BP_AI_Bloodsucker_C_OnGameplayEvent");
static_assert(offsetof(BP_AI_Bloodsucker_C_OnGameplayEvent, EventTag) == 0x000000, "Member 'BP_AI_Bloodsucker_C_OnGameplayEvent::EventTag' has a wrong offset!");
static_assert(offsetof(BP_AI_Bloodsucker_C_OnGameplayEvent, EventData) == 0x000008, "Member 'BP_AI_Bloodsucker_C_OnGameplayEvent::EventData' has a wrong offset!");

}
