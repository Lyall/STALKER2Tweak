#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_Lever_Vertical

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "AnimBP_Lever_Vertical_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "EDoorOpenedState_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AnimBP_Lever_Vertical.AnimBP_Lever_Vertical_C
// 0x01B0 (0x0520 - 0x0370)
class UAnimBP_Lever_Vertical_C final : public UAnimInstance
{
public:
	uint8                                         Pad_368[0x8];                                      // 0x0368(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct AnimBP_Lever_Vertical::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0378(0x0002)(HasGetValueTypeHash)
	uint8                                         Pad_37A[0x6];                                      // 0x037A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0380(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0388(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0390(0x0020)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;                     // 0x03B0(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x03F8(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0440(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0488(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x04D0(0x0048)()
	EDoorOpenedState                              DoorState;                                         // 0x0518(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void ExecuteUbergraph_AnimBP_Lever_Vertical(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimBP_Lever_Vertical_C">();
	}
	static class UAnimBP_Lever_Vertical_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimBP_Lever_Vertical_C>();
	}
};
static_assert(alignof(UAnimBP_Lever_Vertical_C) == 0x000010, "Wrong alignment on UAnimBP_Lever_Vertical_C");
static_assert(sizeof(UAnimBP_Lever_Vertical_C) == 0x000520, "Wrong size on UAnimBP_Lever_Vertical_C");
static_assert(offsetof(UAnimBP_Lever_Vertical_C, UberGraphFrame) == 0x000370, "Member 'UAnimBP_Lever_Vertical_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAnimBP_Lever_Vertical_C, __AnimBlueprintMutables) == 0x000378, "Member 'UAnimBP_Lever_Vertical_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UAnimBP_Lever_Vertical_C, AnimBlueprintExtension_PropertyAccess) == 0x000380, "Member 'UAnimBP_Lever_Vertical_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UAnimBP_Lever_Vertical_C, AnimBlueprintExtension_Base) == 0x000388, "Member 'UAnimBP_Lever_Vertical_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UAnimBP_Lever_Vertical_C, AnimGraphNode_Root) == 0x000390, "Member 'UAnimBP_Lever_Vertical_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UAnimBP_Lever_Vertical_C, AnimGraphNode_BlendListByEnum) == 0x0003B0, "Member 'UAnimBP_Lever_Vertical_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UAnimBP_Lever_Vertical_C, AnimGraphNode_SequencePlayer_2) == 0x0003F8, "Member 'UAnimBP_Lever_Vertical_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_Lever_Vertical_C, AnimGraphNode_SequencePlayer_1) == 0x000440, "Member 'UAnimBP_Lever_Vertical_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_Lever_Vertical_C, AnimGraphNode_SequencePlayer) == 0x000488, "Member 'UAnimBP_Lever_Vertical_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UAnimBP_Lever_Vertical_C, AnimGraphNode_Slot) == 0x0004D0, "Member 'UAnimBP_Lever_Vertical_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UAnimBP_Lever_Vertical_C, DoorState) == 0x000518, "Member 'UAnimBP_Lever_Vertical_C::DoorState' has a wrong offset!");

}

