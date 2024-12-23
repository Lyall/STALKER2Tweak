#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BonFire

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BonFire.BP_BonFire_C
// 0x0080 (0x0318 - 0x0298)
class ABP_BonFire_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                      NavCollider;                                       // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGSCNavModifierComponent*               GSCNavModifier;                                    // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UApplyEffectComponent*                  ApplyEffect;                                       // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      BurnTriggerCollider;                               // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   MainLight;                                         // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           Ak;                                                // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticEnvironmentNiagaraComponent*     StaticEnvironmentNiagara;                          // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_vil_fire_death_01;                              // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_LightInt_Coefficient_02_AE2F937F43DFDACBC64B9DB178867EA7; // 0x02E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_AE2F937F43DFDACBC64B9DB178867EA7; // 0x02EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2ED[0x3];                                      // 0x02ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_LightInt_Coefficient_01_DC5B46AF40A825360D72649A1AFFBE13; // 0x02F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline__Direction_DC5B46AF40A825360D72649A1AFFBE13; // 0x02FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2FD[0x3];                                      // 0x02FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline;                                          // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         MainLight_Int;                                     // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_30C[0x4];                                      // 0x030C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Random;                                            // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_BonFire_BurnTriggerCollider_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__BP_fireBarrel_BurnTriggerCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_BP_BonFire(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BonFire_C">();
	}
	static class ABP_BonFire_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BonFire_C>();
	}
};
static_assert(alignof(ABP_BonFire_C) == 0x000008, "Wrong alignment on ABP_BonFire_C");
static_assert(sizeof(ABP_BonFire_C) == 0x000318, "Wrong size on ABP_BonFire_C");
static_assert(offsetof(ABP_BonFire_C, UberGraphFrame) == 0x000298, "Member 'ABP_BonFire_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BonFire_C, NavCollider) == 0x0002A0, "Member 'ABP_BonFire_C::NavCollider' has a wrong offset!");
static_assert(offsetof(ABP_BonFire_C, GSCNavModifier) == 0x0002A8, "Member 'ABP_BonFire_C::GSCNavModifier' has a wrong offset!");
static_assert(offsetof(ABP_BonFire_C, ApplyEffect) == 0x0002B0, "Member 'ABP_BonFire_C::ApplyEffect' has a wrong offset!");
static_assert(offsetof(ABP_BonFire_C, BurnTriggerCollider) == 0x0002B8, "Member 'ABP_BonFire_C::BurnTriggerCollider' has a wrong offset!");
static_assert(offsetof(ABP_BonFire_C, MainLight) == 0x0002C0, "Member 'ABP_BonFire_C::MainLight' has a wrong offset!");
static_assert(offsetof(ABP_BonFire_C, Ak) == 0x0002C8, "Member 'ABP_BonFire_C::Ak' has a wrong offset!");
static_assert(offsetof(ABP_BonFire_C, StaticEnvironmentNiagara) == 0x0002D0, "Member 'ABP_BonFire_C::StaticEnvironmentNiagara' has a wrong offset!");
static_assert(offsetof(ABP_BonFire_C, SM_vil_fire_death_01) == 0x0002D8, "Member 'ABP_BonFire_C::SM_vil_fire_death_01' has a wrong offset!");
static_assert(offsetof(ABP_BonFire_C, DefaultSceneRoot) == 0x0002E0, "Member 'ABP_BonFire_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_BonFire_C, Timeline_0_LightInt_Coefficient_02_AE2F937F43DFDACBC64B9DB178867EA7) == 0x0002E8, "Member 'ABP_BonFire_C::Timeline_0_LightInt_Coefficient_02_AE2F937F43DFDACBC64B9DB178867EA7' has a wrong offset!");
static_assert(offsetof(ABP_BonFire_C, Timeline_0__Direction_AE2F937F43DFDACBC64B9DB178867EA7) == 0x0002EC, "Member 'ABP_BonFire_C::Timeline_0__Direction_AE2F937F43DFDACBC64B9DB178867EA7' has a wrong offset!");
static_assert(offsetof(ABP_BonFire_C, Timeline_0) == 0x0002F0, "Member 'ABP_BonFire_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(ABP_BonFire_C, Timeline_LightInt_Coefficient_01_DC5B46AF40A825360D72649A1AFFBE13) == 0x0002F8, "Member 'ABP_BonFire_C::Timeline_LightInt_Coefficient_01_DC5B46AF40A825360D72649A1AFFBE13' has a wrong offset!");
static_assert(offsetof(ABP_BonFire_C, Timeline__Direction_DC5B46AF40A825360D72649A1AFFBE13) == 0x0002FC, "Member 'ABP_BonFire_C::Timeline__Direction_DC5B46AF40A825360D72649A1AFFBE13' has a wrong offset!");
static_assert(offsetof(ABP_BonFire_C, Timeline) == 0x000300, "Member 'ABP_BonFire_C::Timeline' has a wrong offset!");
static_assert(offsetof(ABP_BonFire_C, MainLight_Int) == 0x000308, "Member 'ABP_BonFire_C::MainLight_Int' has a wrong offset!");
static_assert(offsetof(ABP_BonFire_C, Random) == 0x000310, "Member 'ABP_BonFire_C::Random' has a wrong offset!");

}

