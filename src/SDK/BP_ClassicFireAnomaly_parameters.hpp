#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ClassicFireAnomaly

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_ClassicFireAnomaly.BP_ClassicFireAnomaly_C.ExecuteUbergraph_BP_ClassicFireAnomaly
// 0x0028 (0x0028 - 0x0000)
struct BP_ClassicFireAnomaly_C_ExecuteUbergraph_BP_ClassicFireAnomaly final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ClassicFireAnomaly_C_ExecuteUbergraph_BP_ClassicFireAnomaly) == 0x000008, "Wrong alignment on BP_ClassicFireAnomaly_C_ExecuteUbergraph_BP_ClassicFireAnomaly");
static_assert(sizeof(BP_ClassicFireAnomaly_C_ExecuteUbergraph_BP_ClassicFireAnomaly) == 0x000028, "Wrong size on BP_ClassicFireAnomaly_C_ExecuteUbergraph_BP_ClassicFireAnomaly");
static_assert(offsetof(BP_ClassicFireAnomaly_C_ExecuteUbergraph_BP_ClassicFireAnomaly, EntryPoint) == 0x000000, "Member 'BP_ClassicFireAnomaly_C_ExecuteUbergraph_BP_ClassicFireAnomaly::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ClassicFireAnomaly_C_ExecuteUbergraph_BP_ClassicFireAnomaly, CallFunc_VLerp_ReturnValue) == 0x000008, "Member 'BP_ClassicFireAnomaly_C_ExecuteUbergraph_BP_ClassicFireAnomaly::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ClassicFireAnomaly_C_ExecuteUbergraph_BP_ClassicFireAnomaly, K2Node_SwitchEnum_CmpSuccess) == 0x000020, "Member 'BP_ClassicFireAnomaly_C_ExecuteUbergraph_BP_ClassicFireAnomaly::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

