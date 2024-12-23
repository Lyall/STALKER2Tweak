#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Lever_Vertical

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Stalker2_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Lever_Vertical.BP_Lever_Vertical_C
// 0x00D8 (0x03C0 - 0x02E8)
class ABP_Lever_Vertical_C final : public AInteractableObject
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USingleClickComponent*                  SingleClickLeverUp;                                // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           Ak;                                                // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Niagara_OneShot;                                   // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Niagara_ButtonDestruct;                            // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Niagara_Cont;                                      // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   InteractVolume;                                    // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        ArrowLookAt;                                       // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_int_launch_button_01_b;                         // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USingleClickComponent*                  SingleClickLeverDown;                              // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USignalSenderComponent*                 SenderOff;                                         // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHittableComponent*                     Hittable;                                          // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDamageInteractableComponent*           DamageInteractable;                                // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USignalReceiverComponent*               ReceiverOff;                                       // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USignalSenderComponent*                 SenderOn;                                          // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USignalReceiverComponent*               ReceiverOn;                                        // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          OneInteract_;                                      // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_371[0x7];                                      // 0x0371(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ColorGreen;                                        // 0x0378(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ColorRed;                                          // 0x0390(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ColorBlack;                                        // 0x03A8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_Button_ReceiverOff_K2Node_ComponentBoundEvent_11_SignalReceiverComponentReceiveSignature__DelegateSignature(class UObject* DataObject);
	void BndEvt__BP_Button_SignalReceiver_K2Node_ComponentBoundEvent_8_SignalReceiverComponentReceiveSignature__DelegateSignature(class UObject* DataObject);
	void BndEvt__BP_Lever_Vertical_DamageInteractable_K2Node_ComponentBoundEvent_0_OnDamageAccumulated__DelegateSignature(const struct FUID& LastDamageDealerUID, bool bProjectileFlownThroughObject);
	void BndEvt__BP_Lever_Vertical_SingleClickLeverDown_K2Node_ComponentBoundEvent_1_InteractSignature__DelegateSignature();
	void BndEvt__BP_Lever_Vertical_SingleClickLeverUp_K2Node_ComponentBoundEvent_2_InteractSignature__DelegateSignature();
	void ExecuteUbergraph_BP_Lever_Vertical(int32 EntryPoint);
	void OnFirstPlay();
	void OnPaintSettingsChanged(const bool bInteractPaint);
	void ReceiveBeginPlay();
	void StateChange();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Lever_Vertical_C">();
	}
	static class ABP_Lever_Vertical_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Lever_Vertical_C>();
	}
};
static_assert(alignof(ABP_Lever_Vertical_C) == 0x000008, "Wrong alignment on ABP_Lever_Vertical_C");
static_assert(sizeof(ABP_Lever_Vertical_C) == 0x0003C0, "Wrong size on ABP_Lever_Vertical_C");
static_assert(offsetof(ABP_Lever_Vertical_C, UberGraphFrame) == 0x0002E8, "Member 'ABP_Lever_Vertical_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Lever_Vertical_C, SingleClickLeverUp) == 0x0002F0, "Member 'ABP_Lever_Vertical_C::SingleClickLeverUp' has a wrong offset!");
static_assert(offsetof(ABP_Lever_Vertical_C, Ak) == 0x0002F8, "Member 'ABP_Lever_Vertical_C::Ak' has a wrong offset!");
static_assert(offsetof(ABP_Lever_Vertical_C, Niagara_OneShot) == 0x000300, "Member 'ABP_Lever_Vertical_C::Niagara_OneShot' has a wrong offset!");
static_assert(offsetof(ABP_Lever_Vertical_C, Niagara_ButtonDestruct) == 0x000308, "Member 'ABP_Lever_Vertical_C::Niagara_ButtonDestruct' has a wrong offset!");
static_assert(offsetof(ABP_Lever_Vertical_C, Niagara_Cont) == 0x000310, "Member 'ABP_Lever_Vertical_C::Niagara_Cont' has a wrong offset!");
static_assert(offsetof(ABP_Lever_Vertical_C, SkeletalMesh) == 0x000318, "Member 'ABP_Lever_Vertical_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(ABP_Lever_Vertical_C, InteractVolume) == 0x000320, "Member 'ABP_Lever_Vertical_C::InteractVolume' has a wrong offset!");
static_assert(offsetof(ABP_Lever_Vertical_C, ArrowLookAt) == 0x000328, "Member 'ABP_Lever_Vertical_C::ArrowLookAt' has a wrong offset!");
static_assert(offsetof(ABP_Lever_Vertical_C, SM_int_launch_button_01_b) == 0x000330, "Member 'ABP_Lever_Vertical_C::SM_int_launch_button_01_b' has a wrong offset!");
static_assert(offsetof(ABP_Lever_Vertical_C, SingleClickLeverDown) == 0x000338, "Member 'ABP_Lever_Vertical_C::SingleClickLeverDown' has a wrong offset!");
static_assert(offsetof(ABP_Lever_Vertical_C, SenderOff) == 0x000340, "Member 'ABP_Lever_Vertical_C::SenderOff' has a wrong offset!");
static_assert(offsetof(ABP_Lever_Vertical_C, Hittable) == 0x000348, "Member 'ABP_Lever_Vertical_C::Hittable' has a wrong offset!");
static_assert(offsetof(ABP_Lever_Vertical_C, DamageInteractable) == 0x000350, "Member 'ABP_Lever_Vertical_C::DamageInteractable' has a wrong offset!");
static_assert(offsetof(ABP_Lever_Vertical_C, ReceiverOff) == 0x000358, "Member 'ABP_Lever_Vertical_C::ReceiverOff' has a wrong offset!");
static_assert(offsetof(ABP_Lever_Vertical_C, SenderOn) == 0x000360, "Member 'ABP_Lever_Vertical_C::SenderOn' has a wrong offset!");
static_assert(offsetof(ABP_Lever_Vertical_C, ReceiverOn) == 0x000368, "Member 'ABP_Lever_Vertical_C::ReceiverOn' has a wrong offset!");
static_assert(offsetof(ABP_Lever_Vertical_C, OneInteract_) == 0x000370, "Member 'ABP_Lever_Vertical_C::OneInteract_' has a wrong offset!");
static_assert(offsetof(ABP_Lever_Vertical_C, ColorGreen) == 0x000378, "Member 'ABP_Lever_Vertical_C::ColorGreen' has a wrong offset!");
static_assert(offsetof(ABP_Lever_Vertical_C, ColorRed) == 0x000390, "Member 'ABP_Lever_Vertical_C::ColorRed' has a wrong offset!");
static_assert(offsetof(ABP_Lever_Vertical_C, ColorBlack) == 0x0003A8, "Member 'ABP_Lever_Vertical_C::ColorBlack' has a wrong offset!");

}

