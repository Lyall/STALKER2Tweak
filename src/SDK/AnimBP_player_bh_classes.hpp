#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_player_bh

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "AnimBP_player_bh_structs.hpp"
#include "Stalker2_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AnimBP_player_bh.AnimBP_player_bh_C
// 0x2040 (0x34B0 - 0x1470)
class UAnimBP_player_bh_C final : public UAnimInstancePlayer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1470(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct AnimBP_player_bh::FAnimBlueprintGeneratedMutableData m_AnimBlueprintMutables;                           // 0x1478(0x0038)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x14B0(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x14B8(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x14C0(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_3;                   // 0x14E0(0x00C8)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_2;                   // 0x15A8(0x00C8)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_5;                              // 0x1670(0x0048)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_1;                   // 0x16B8(0x00C8)()
	struct FAnimNode_ApplyMeshSpaceAdditive       AnimGraphNode_ApplyMeshSpaceAdditive_2;            // 0x1780(0x00D0)()
	struct FAnimNode_ApplyMeshSpaceAdditive       AnimGraphNode_ApplyMeshSpaceAdditive_1;            // 0x1850(0x00D0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_4;                              // 0x1920(0x0048)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x1968(0x00C8)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_3;                              // 0x1A30(0x0048)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_7;                  // 0x1A78(0x00E0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_4;                    // 0x1B58(0x0108)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_6;                  // 0x1C60(0x00E0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_3;                    // 0x1D40(0x0108)()
	struct FAnimNode_ApplyMeshSpaceAdditive       AnimGraphNode_ApplyMeshSpaceAdditive;              // 0x1E48(0x00D0)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_9;                   // 0x1F18(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x1F60(0x0048)()
	struct FAnimNode_RefPose                      AnimGraphNode_IdentityPose_3;                      // 0x1FA8(0x0010)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_8;                   // 0x1FB8(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x2000(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_7;                   // 0x2048(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x2090(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_6;                   // 0x20D8(0x0048)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_4;                 // 0x2120(0x0040)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_3;                 // 0x2160(0x0040)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_5;                  // 0x21A0(0x00E0)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_5;                   // 0x2280(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_2;                              // 0x22C8(0x0048)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_2;                    // 0x2310(0x0108)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_14;                    // 0x2418(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_13;                    // 0x2440(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_12;                    // 0x2468(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_11;                    // 0x2490(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_4;                   // 0x24B8(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_10;                    // 0x2500(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_9;                     // 0x2528(0x0028)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_4;                  // 0x2550(0x00E0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x2630(0x0048)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x2678(0x0108)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_8;                     // 0x2780(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_7;                     // 0x27A8(0x0028)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x27D0(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_6;                     // 0x2818(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_5;                     // 0x2840(0x0028)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_3;                  // 0x2868(0x00E0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x2948(0x0028)()
	struct FAnimNode_CopyBone                     AnimGraphNode_CopyBone;                            // 0x2970(0x00F0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x2A60(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x2A80(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x2AA0(0x0028)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_2;                 // 0x2AC8(0x0040)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_3;                   // 0x2B08(0x0048)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_1;                 // 0x2B50(0x0040)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2;                   // 0x2B90(0x0048)()
	struct FAnimNode_RefPose                      AnimGraphNode_IdentityPose_2;                      // 0x2BD8(0x0010)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x2BE8(0x0048)()
	struct FAnimNode_RefPose                      AnimGraphNode_IdentityPose_1;                      // 0x2C30(0x0010)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x2C40(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x2C68(0x0028)()
	struct FAnimNode_RefPose                      AnimGraphNode_IdentityPose;                        // 0x2C90(0x0010)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x2CA0(0x0020)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator;                   // 0x2CC0(0x0040)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x2D00(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x2D20(0x00C8)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_2;                  // 0x2DE8(0x00E0)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_2;                     // 0x2EC8(0x00C8)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_1;                  // 0x2F90(0x00E0)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_1;                     // 0x3070(0x00C8)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x3138(0x00E0)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x3218(0x00C8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x32E0(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x3308(0x0048)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x3350(0x0108)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x3458(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x3480(0x0028)()

public:
	void AnimGraph(const struct FPoseLink& Idle, const struct FPoseLink& Moving, const struct FPoseLink& Look, const struct FPoseLink& Additional, struct FPoseLink* AnimGraph_0);
	void ExecuteUbergraph_AnimBP_player_bh(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimBP_player_bh_C">();
	}
	static class UAnimBP_player_bh_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimBP_player_bh_C>();
	}
};
static_assert(alignof(UAnimBP_player_bh_C) == 0x000010, "Wrong alignment on UAnimBP_player_bh_C");
static_assert(sizeof(UAnimBP_player_bh_C) == 0x0034B0, "Wrong size on UAnimBP_player_bh_C");
static_assert(offsetof(UAnimBP_player_bh_C, UberGraphFrame) == 0x001470, "Member 'UAnimBP_player_bh_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, m_AnimBlueprintMutables) == 0x001478, "Member 'UAnimBP_player_bh_C::m_AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimBlueprintExtension_PropertyAccess) == 0x0014B0, "Member 'UAnimBP_player_bh_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimBlueprintExtension_Base) == 0x0014B8, "Member 'UAnimBP_player_bh_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_Root) == 0x0014C0, "Member 'UAnimBP_player_bh_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_LinkedInputPose_3) == 0x0014E0, "Member 'UAnimBP_player_bh_C::AnimGraphNode_LinkedInputPose_3' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_LinkedInputPose_2) == 0x0015A8, "Member 'UAnimBP_player_bh_C::AnimGraphNode_LinkedInputPose_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_Slot_5) == 0x001670, "Member 'UAnimBP_player_bh_C::AnimGraphNode_Slot_5' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_LinkedInputPose_1) == 0x0016B8, "Member 'UAnimBP_player_bh_C::AnimGraphNode_LinkedInputPose_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_ApplyMeshSpaceAdditive_2) == 0x001780, "Member 'UAnimBP_player_bh_C::AnimGraphNode_ApplyMeshSpaceAdditive_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_ApplyMeshSpaceAdditive_1) == 0x001850, "Member 'UAnimBP_player_bh_C::AnimGraphNode_ApplyMeshSpaceAdditive_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_Slot_4) == 0x001920, "Member 'UAnimBP_player_bh_C::AnimGraphNode_Slot_4' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_LinkedInputPose) == 0x001968, "Member 'UAnimBP_player_bh_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_Slot_3) == 0x001A30, "Member 'UAnimBP_player_bh_C::AnimGraphNode_Slot_3' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_LayeredBoneBlend_7) == 0x001A78, "Member 'UAnimBP_player_bh_C::AnimGraphNode_LayeredBoneBlend_7' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_SaveCachedPose_4) == 0x001B58, "Member 'UAnimBP_player_bh_C::AnimGraphNode_SaveCachedPose_4' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_LayeredBoneBlend_6) == 0x001C60, "Member 'UAnimBP_player_bh_C::AnimGraphNode_LayeredBoneBlend_6' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_SaveCachedPose_3) == 0x001D40, "Member 'UAnimBP_player_bh_C::AnimGraphNode_SaveCachedPose_3' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_ApplyMeshSpaceAdditive) == 0x001E48, "Member 'UAnimBP_player_bh_C::AnimGraphNode_ApplyMeshSpaceAdditive' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_BlendListByBool_9) == 0x001F18, "Member 'UAnimBP_player_bh_C::AnimGraphNode_BlendListByBool_9' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_SequencePlayer_2) == 0x001F60, "Member 'UAnimBP_player_bh_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_IdentityPose_3) == 0x001FA8, "Member 'UAnimBP_player_bh_C::AnimGraphNode_IdentityPose_3' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_BlendListByBool_8) == 0x001FB8, "Member 'UAnimBP_player_bh_C::AnimGraphNode_BlendListByBool_8' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_SequencePlayer_1) == 0x002000, "Member 'UAnimBP_player_bh_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_BlendListByBool_7) == 0x002048, "Member 'UAnimBP_player_bh_C::AnimGraphNode_BlendListByBool_7' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_SequencePlayer) == 0x002090, "Member 'UAnimBP_player_bh_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_BlendListByBool_6) == 0x0020D8, "Member 'UAnimBP_player_bh_C::AnimGraphNode_BlendListByBool_6' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_SequenceEvaluator_4) == 0x002120, "Member 'UAnimBP_player_bh_C::AnimGraphNode_SequenceEvaluator_4' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_SequenceEvaluator_3) == 0x002160, "Member 'UAnimBP_player_bh_C::AnimGraphNode_SequenceEvaluator_3' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_LayeredBoneBlend_5) == 0x0021A0, "Member 'UAnimBP_player_bh_C::AnimGraphNode_LayeredBoneBlend_5' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_BlendListByBool_5) == 0x002280, "Member 'UAnimBP_player_bh_C::AnimGraphNode_BlendListByBool_5' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_Slot_2) == 0x0022C8, "Member 'UAnimBP_player_bh_C::AnimGraphNode_Slot_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_SaveCachedPose_2) == 0x002310, "Member 'UAnimBP_player_bh_C::AnimGraphNode_SaveCachedPose_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_UseCachedPose_14) == 0x002418, "Member 'UAnimBP_player_bh_C::AnimGraphNode_UseCachedPose_14' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_UseCachedPose_13) == 0x002440, "Member 'UAnimBP_player_bh_C::AnimGraphNode_UseCachedPose_13' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_UseCachedPose_12) == 0x002468, "Member 'UAnimBP_player_bh_C::AnimGraphNode_UseCachedPose_12' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_UseCachedPose_11) == 0x002490, "Member 'UAnimBP_player_bh_C::AnimGraphNode_UseCachedPose_11' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_BlendListByBool_4) == 0x0024B8, "Member 'UAnimBP_player_bh_C::AnimGraphNode_BlendListByBool_4' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_UseCachedPose_10) == 0x002500, "Member 'UAnimBP_player_bh_C::AnimGraphNode_UseCachedPose_10' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_UseCachedPose_9) == 0x002528, "Member 'UAnimBP_player_bh_C::AnimGraphNode_UseCachedPose_9' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_LayeredBoneBlend_4) == 0x002550, "Member 'UAnimBP_player_bh_C::AnimGraphNode_LayeredBoneBlend_4' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_Slot_1) == 0x002630, "Member 'UAnimBP_player_bh_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_SaveCachedPose_1) == 0x002678, "Member 'UAnimBP_player_bh_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_UseCachedPose_8) == 0x002780, "Member 'UAnimBP_player_bh_C::AnimGraphNode_UseCachedPose_8' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_UseCachedPose_7) == 0x0027A8, "Member 'UAnimBP_player_bh_C::AnimGraphNode_UseCachedPose_7' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_Slot) == 0x0027D0, "Member 'UAnimBP_player_bh_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_UseCachedPose_6) == 0x002818, "Member 'UAnimBP_player_bh_C::AnimGraphNode_UseCachedPose_6' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_UseCachedPose_5) == 0x002840, "Member 'UAnimBP_player_bh_C::AnimGraphNode_UseCachedPose_5' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_LayeredBoneBlend_3) == 0x002868, "Member 'UAnimBP_player_bh_C::AnimGraphNode_LayeredBoneBlend_3' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_UseCachedPose_4) == 0x002948, "Member 'UAnimBP_player_bh_C::AnimGraphNode_UseCachedPose_4' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_CopyBone) == 0x002970, "Member 'UAnimBP_player_bh_C::AnimGraphNode_CopyBone' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_LocalToComponentSpace) == 0x002A60, "Member 'UAnimBP_player_bh_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_ComponentToLocalSpace) == 0x002A80, "Member 'UAnimBP_player_bh_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_UseCachedPose_3) == 0x002AA0, "Member 'UAnimBP_player_bh_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_SequenceEvaluator_2) == 0x002AC8, "Member 'UAnimBP_player_bh_C::AnimGraphNode_SequenceEvaluator_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_BlendListByBool_3) == 0x002B08, "Member 'UAnimBP_player_bh_C::AnimGraphNode_BlendListByBool_3' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_SequenceEvaluator_1) == 0x002B50, "Member 'UAnimBP_player_bh_C::AnimGraphNode_SequenceEvaluator_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_BlendListByBool_2) == 0x002B90, "Member 'UAnimBP_player_bh_C::AnimGraphNode_BlendListByBool_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_IdentityPose_2) == 0x002BD8, "Member 'UAnimBP_player_bh_C::AnimGraphNode_IdentityPose_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_BlendListByBool_1) == 0x002BE8, "Member 'UAnimBP_player_bh_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_IdentityPose_1) == 0x002C30, "Member 'UAnimBP_player_bh_C::AnimGraphNode_IdentityPose_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_TransitionResult_1) == 0x002C40, "Member 'UAnimBP_player_bh_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_TransitionResult) == 0x002C68, "Member 'UAnimBP_player_bh_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_IdentityPose) == 0x002C90, "Member 'UAnimBP_player_bh_C::AnimGraphNode_IdentityPose' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_StateResult_1) == 0x002CA0, "Member 'UAnimBP_player_bh_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_SequenceEvaluator) == 0x002CC0, "Member 'UAnimBP_player_bh_C::AnimGraphNode_SequenceEvaluator' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_StateResult) == 0x002D00, "Member 'UAnimBP_player_bh_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_StateMachine) == 0x002D20, "Member 'UAnimBP_player_bh_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_LayeredBoneBlend_2) == 0x002DE8, "Member 'UAnimBP_player_bh_C::AnimGraphNode_LayeredBoneBlend_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_ApplyAdditive_2) == 0x002EC8, "Member 'UAnimBP_player_bh_C::AnimGraphNode_ApplyAdditive_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_LayeredBoneBlend_1) == 0x002F90, "Member 'UAnimBP_player_bh_C::AnimGraphNode_LayeredBoneBlend_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_ApplyAdditive_1) == 0x003070, "Member 'UAnimBP_player_bh_C::AnimGraphNode_ApplyAdditive_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_LayeredBoneBlend) == 0x003138, "Member 'UAnimBP_player_bh_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_ApplyAdditive) == 0x003218, "Member 'UAnimBP_player_bh_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_UseCachedPose_2) == 0x0032E0, "Member 'UAnimBP_player_bh_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_BlendListByBool) == 0x003308, "Member 'UAnimBP_player_bh_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_SaveCachedPose) == 0x003350, "Member 'UAnimBP_player_bh_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_UseCachedPose_1) == 0x003458, "Member 'UAnimBP_player_bh_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_player_bh_C, AnimGraphNode_UseCachedPose) == 0x003480, "Member 'UAnimBP_player_bh_C::AnimGraphNode_UseCachedPose' has a wrong offset!");

}
