#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_mod_stairs_02_for_kit

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_mod_stairs_02_for_kit.BP_mod_stairs_02_for_kit_C
// 0x0200 (0x0498 - 0x0298)
class ABP_mod_stairs_02_for_kit_C final : public AActor
{
public:
	class UHierarchicalInstancedStaticMeshComponent* MainMesh_Railing_Partial_R;                        // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent* MainMesh_Railing_Partial_L;                        // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   LastMesh_Railing_L;                                // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   LastMesh_Railing_R;                                // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   FirstMesh_Railing_R;                               // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   FirstMesh_Railing_L;                               // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   FirstMesh_R;                                       // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   LastMesh_R;                                        // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent* MainMesh_Railing_Full_R;                           // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent* MainMesh_Railing_Full_L;                           // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent* MainMesh_L;                                        // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent* MainMesh_R;                                        // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   LastMesh_L;                                        // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   FirstMesh_L;                                       // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          FromStart;                                         // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_319[0x3];                                      // 0x0319(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Steps;                                             // 0x031C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RandomDestructScale;                               // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Stairs_LastMesh_L;                                 // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Stairs_LastMesh_R;                                 // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Stairs_LastMesh_L_s;                               // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Stairs_LastMesh_R_s;                               // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Railing_MainMesh_L;                                // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Railing_MainMesh_R;                                // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Stairs_MainMesh_L;                                 // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Stairs_MainMesh_R;                                 // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Stairs_MainMesh_L_s;                               // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Stairs_MainMesh_R_s;                               // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Stairs_FirstMesh_L;                                // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Stairs_FirstMesh_R;                                // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Stairs_FirstMesh_L_s;                              // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Stairs_FirstMesh_R_s;                              // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Railing_LastMesh_L;                                // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Railing_LastMesh_R;                                // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Railing_FirstMesh_L;                               // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Railing_FirstMesh_R;                               // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Railing_FirstMesh_L_b;                             // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Railing_FirstMesh_R_b;                             // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Stairs_FirstMesh_L_b;                              // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Stairs_FirstMesh_R_b;                              // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Stairs_FirstMesh_L_b_s;                            // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Stairs_FirstMesh_R_b_s;                            // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Left_Side_Short;                                   // 0x03E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Right_Side_Short;                                  // 0x03E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Left_Side_Railings;                                // 0x03EA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Right_Side_Railings;                               // 0x03EB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Start_Ground_Support;                              // 0x03EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3ED[0x3];                                      // 0x03ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Complete_Sets_Of_Stairs_Count;                     // 0x03F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Last_Set_Of_Stairs_Count;                          // 0x03F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Railing_Index;                                     // 0x03F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FC[0x4];                                      // 0x03FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                StepOffset;                                        // 0x0400(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CurrentStepOffset;                                 // 0x0418(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RailingOffset;                                     // 0x0430(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CurrentRailingOffset;                              // 0x0448(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Railing_FullMesh_L;                                // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Railing_FullMesh_R;                                // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Railing_PartialMesh_R;                             // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Railing_PartialMesh_L;                             // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         Color;                                             // 0x0480(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_484[0x4];                                      // 0x0484(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AStaticMeshActor*>               SpawnedActors;                                     // 0x0488(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void Invert_Stairs_Direction();
	void PositionLastStepsAndRailings();
	void PositionRemainderRailings(const struct FVector& RailingOffset_0);
	void SpawnInstancedMainActor(class UStaticMesh* StaticMesh, const struct FTransform& Transforms);
	void SpawnInstancedRailingActor(class UStaticMesh* StaticMesh, const struct FTransform& Transforms, bool Left);
	void SpawnInstancedRailingRemainderActor(class UStaticMesh* StaticMesh, const struct FTransform& Transforms, bool Left);
	void SpawnStaticMeshActorsFromBP();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_mod_stairs_02_for_kit_C">();
	}
	static class ABP_mod_stairs_02_for_kit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_mod_stairs_02_for_kit_C>();
	}
};
static_assert(alignof(ABP_mod_stairs_02_for_kit_C) == 0x000008, "Wrong alignment on ABP_mod_stairs_02_for_kit_C");
static_assert(sizeof(ABP_mod_stairs_02_for_kit_C) == 0x000498, "Wrong size on ABP_mod_stairs_02_for_kit_C");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, MainMesh_Railing_Partial_R) == 0x000298, "Member 'ABP_mod_stairs_02_for_kit_C::MainMesh_Railing_Partial_R' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, MainMesh_Railing_Partial_L) == 0x0002A0, "Member 'ABP_mod_stairs_02_for_kit_C::MainMesh_Railing_Partial_L' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, LastMesh_Railing_L) == 0x0002A8, "Member 'ABP_mod_stairs_02_for_kit_C::LastMesh_Railing_L' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, LastMesh_Railing_R) == 0x0002B0, "Member 'ABP_mod_stairs_02_for_kit_C::LastMesh_Railing_R' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, FirstMesh_Railing_R) == 0x0002B8, "Member 'ABP_mod_stairs_02_for_kit_C::FirstMesh_Railing_R' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, FirstMesh_Railing_L) == 0x0002C0, "Member 'ABP_mod_stairs_02_for_kit_C::FirstMesh_Railing_L' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, FirstMesh_R) == 0x0002C8, "Member 'ABP_mod_stairs_02_for_kit_C::FirstMesh_R' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, LastMesh_R) == 0x0002D0, "Member 'ABP_mod_stairs_02_for_kit_C::LastMesh_R' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, MainMesh_Railing_Full_R) == 0x0002D8, "Member 'ABP_mod_stairs_02_for_kit_C::MainMesh_Railing_Full_R' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, MainMesh_Railing_Full_L) == 0x0002E0, "Member 'ABP_mod_stairs_02_for_kit_C::MainMesh_Railing_Full_L' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, MainMesh_L) == 0x0002E8, "Member 'ABP_mod_stairs_02_for_kit_C::MainMesh_L' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, MainMesh_R) == 0x0002F0, "Member 'ABP_mod_stairs_02_for_kit_C::MainMesh_R' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, LastMesh_L) == 0x0002F8, "Member 'ABP_mod_stairs_02_for_kit_C::LastMesh_L' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, FirstMesh_L) == 0x000300, "Member 'ABP_mod_stairs_02_for_kit_C::FirstMesh_L' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Scene) == 0x000308, "Member 'ABP_mod_stairs_02_for_kit_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, DefaultSceneRoot) == 0x000310, "Member 'ABP_mod_stairs_02_for_kit_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, FromStart) == 0x000318, "Member 'ABP_mod_stairs_02_for_kit_C::FromStart' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Steps) == 0x00031C, "Member 'ABP_mod_stairs_02_for_kit_C::Steps' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, RandomDestructScale) == 0x000320, "Member 'ABP_mod_stairs_02_for_kit_C::RandomDestructScale' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Stairs_LastMesh_L) == 0x000328, "Member 'ABP_mod_stairs_02_for_kit_C::Stairs_LastMesh_L' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Stairs_LastMesh_R) == 0x000330, "Member 'ABP_mod_stairs_02_for_kit_C::Stairs_LastMesh_R' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Stairs_LastMesh_L_s) == 0x000338, "Member 'ABP_mod_stairs_02_for_kit_C::Stairs_LastMesh_L_s' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Stairs_LastMesh_R_s) == 0x000340, "Member 'ABP_mod_stairs_02_for_kit_C::Stairs_LastMesh_R_s' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Railing_MainMesh_L) == 0x000348, "Member 'ABP_mod_stairs_02_for_kit_C::Railing_MainMesh_L' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Railing_MainMesh_R) == 0x000350, "Member 'ABP_mod_stairs_02_for_kit_C::Railing_MainMesh_R' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Stairs_MainMesh_L) == 0x000358, "Member 'ABP_mod_stairs_02_for_kit_C::Stairs_MainMesh_L' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Stairs_MainMesh_R) == 0x000360, "Member 'ABP_mod_stairs_02_for_kit_C::Stairs_MainMesh_R' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Stairs_MainMesh_L_s) == 0x000368, "Member 'ABP_mod_stairs_02_for_kit_C::Stairs_MainMesh_L_s' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Stairs_MainMesh_R_s) == 0x000370, "Member 'ABP_mod_stairs_02_for_kit_C::Stairs_MainMesh_R_s' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Stairs_FirstMesh_L) == 0x000378, "Member 'ABP_mod_stairs_02_for_kit_C::Stairs_FirstMesh_L' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Stairs_FirstMesh_R) == 0x000380, "Member 'ABP_mod_stairs_02_for_kit_C::Stairs_FirstMesh_R' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Stairs_FirstMesh_L_s) == 0x000388, "Member 'ABP_mod_stairs_02_for_kit_C::Stairs_FirstMesh_L_s' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Stairs_FirstMesh_R_s) == 0x000390, "Member 'ABP_mod_stairs_02_for_kit_C::Stairs_FirstMesh_R_s' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Railing_LastMesh_L) == 0x000398, "Member 'ABP_mod_stairs_02_for_kit_C::Railing_LastMesh_L' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Railing_LastMesh_R) == 0x0003A0, "Member 'ABP_mod_stairs_02_for_kit_C::Railing_LastMesh_R' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Railing_FirstMesh_L) == 0x0003A8, "Member 'ABP_mod_stairs_02_for_kit_C::Railing_FirstMesh_L' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Railing_FirstMesh_R) == 0x0003B0, "Member 'ABP_mod_stairs_02_for_kit_C::Railing_FirstMesh_R' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Railing_FirstMesh_L_b) == 0x0003B8, "Member 'ABP_mod_stairs_02_for_kit_C::Railing_FirstMesh_L_b' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Railing_FirstMesh_R_b) == 0x0003C0, "Member 'ABP_mod_stairs_02_for_kit_C::Railing_FirstMesh_R_b' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Stairs_FirstMesh_L_b) == 0x0003C8, "Member 'ABP_mod_stairs_02_for_kit_C::Stairs_FirstMesh_L_b' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Stairs_FirstMesh_R_b) == 0x0003D0, "Member 'ABP_mod_stairs_02_for_kit_C::Stairs_FirstMesh_R_b' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Stairs_FirstMesh_L_b_s) == 0x0003D8, "Member 'ABP_mod_stairs_02_for_kit_C::Stairs_FirstMesh_L_b_s' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Stairs_FirstMesh_R_b_s) == 0x0003E0, "Member 'ABP_mod_stairs_02_for_kit_C::Stairs_FirstMesh_R_b_s' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Left_Side_Short) == 0x0003E8, "Member 'ABP_mod_stairs_02_for_kit_C::Left_Side_Short' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Right_Side_Short) == 0x0003E9, "Member 'ABP_mod_stairs_02_for_kit_C::Right_Side_Short' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Left_Side_Railings) == 0x0003EA, "Member 'ABP_mod_stairs_02_for_kit_C::Left_Side_Railings' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Right_Side_Railings) == 0x0003EB, "Member 'ABP_mod_stairs_02_for_kit_C::Right_Side_Railings' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Start_Ground_Support) == 0x0003EC, "Member 'ABP_mod_stairs_02_for_kit_C::Start_Ground_Support' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Complete_Sets_Of_Stairs_Count) == 0x0003F0, "Member 'ABP_mod_stairs_02_for_kit_C::Complete_Sets_Of_Stairs_Count' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Last_Set_Of_Stairs_Count) == 0x0003F4, "Member 'ABP_mod_stairs_02_for_kit_C::Last_Set_Of_Stairs_Count' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Railing_Index) == 0x0003F8, "Member 'ABP_mod_stairs_02_for_kit_C::Railing_Index' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, StepOffset) == 0x000400, "Member 'ABP_mod_stairs_02_for_kit_C::StepOffset' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, CurrentStepOffset) == 0x000418, "Member 'ABP_mod_stairs_02_for_kit_C::CurrentStepOffset' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, RailingOffset) == 0x000430, "Member 'ABP_mod_stairs_02_for_kit_C::RailingOffset' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, CurrentRailingOffset) == 0x000448, "Member 'ABP_mod_stairs_02_for_kit_C::CurrentRailingOffset' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Railing_FullMesh_L) == 0x000460, "Member 'ABP_mod_stairs_02_for_kit_C::Railing_FullMesh_L' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Railing_FullMesh_R) == 0x000468, "Member 'ABP_mod_stairs_02_for_kit_C::Railing_FullMesh_R' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Railing_PartialMesh_R) == 0x000470, "Member 'ABP_mod_stairs_02_for_kit_C::Railing_PartialMesh_R' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Railing_PartialMesh_L) == 0x000478, "Member 'ABP_mod_stairs_02_for_kit_C::Railing_PartialMesh_L' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, Color) == 0x000480, "Member 'ABP_mod_stairs_02_for_kit_C::Color' has a wrong offset!");
static_assert(offsetof(ABP_mod_stairs_02_for_kit_C, SpawnedActors) == 0x000488, "Member 'ABP_mod_stairs_02_for_kit_C::SpawnedActors' has a wrong offset!");

}

