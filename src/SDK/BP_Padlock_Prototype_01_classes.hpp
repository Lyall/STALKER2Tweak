#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Padlock_Prototype_01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Stalker2_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Padlock_Prototype_01.BP_Padlock_Prototype_01_C
// 0x0058 (0x0340 - 0x02E8)
class ABP_Padlock_Prototype_01_C final : public AInteractableObject
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAkComponent*                           Ak;                                                // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Padlock_a;                                         // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Niagara;                                           // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Padlock_b;                                         // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USignalReceiverComponent*               SignalReceiver;                                    // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USignalSenderComponent*                 SignalSender;                                      // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHittableComponent*                     Hittable;                                          // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDamageInteractableComponent*           DamageInteractable;                                // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Ak_Event;                                          // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_Padlock_Prototype_01_DamageInteractable_K2Node_ComponentBoundEvent_0_OnDamageAccumulated__DelegateSignature(const struct FUID& LastDamageDealerUID, bool bProjectileFlownThroughObject);
	void BndEvt__BP_Padlock_Prototype_SignalReceiver_K2Node_ComponentBoundEvent_1_SignalReceiverComponentReceiveSignature__DelegateSignature(class UObject* DataObject);
	void ExecuteUbergraph_BP_Padlock_Prototype_01(int32 EntryPoint);
	void OnPaintSettingsChanged(const bool bInteractPaint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Padlock_Prototype_01_C">();
	}
	static class ABP_Padlock_Prototype_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Padlock_Prototype_01_C>();
	}
};
static_assert(alignof(ABP_Padlock_Prototype_01_C) == 0x000008, "Wrong alignment on ABP_Padlock_Prototype_01_C");
static_assert(sizeof(ABP_Padlock_Prototype_01_C) == 0x000340, "Wrong size on ABP_Padlock_Prototype_01_C");
static_assert(offsetof(ABP_Padlock_Prototype_01_C, UberGraphFrame) == 0x0002E8, "Member 'ABP_Padlock_Prototype_01_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Padlock_Prototype_01_C, Ak) == 0x0002F0, "Member 'ABP_Padlock_Prototype_01_C::Ak' has a wrong offset!");
static_assert(offsetof(ABP_Padlock_Prototype_01_C, Padlock_a) == 0x0002F8, "Member 'ABP_Padlock_Prototype_01_C::Padlock_a' has a wrong offset!");
static_assert(offsetof(ABP_Padlock_Prototype_01_C, Scene) == 0x000300, "Member 'ABP_Padlock_Prototype_01_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_Padlock_Prototype_01_C, Niagara) == 0x000308, "Member 'ABP_Padlock_Prototype_01_C::Niagara' has a wrong offset!");
static_assert(offsetof(ABP_Padlock_Prototype_01_C, Padlock_b) == 0x000310, "Member 'ABP_Padlock_Prototype_01_C::Padlock_b' has a wrong offset!");
static_assert(offsetof(ABP_Padlock_Prototype_01_C, SignalReceiver) == 0x000318, "Member 'ABP_Padlock_Prototype_01_C::SignalReceiver' has a wrong offset!");
static_assert(offsetof(ABP_Padlock_Prototype_01_C, SignalSender) == 0x000320, "Member 'ABP_Padlock_Prototype_01_C::SignalSender' has a wrong offset!");
static_assert(offsetof(ABP_Padlock_Prototype_01_C, Hittable) == 0x000328, "Member 'ABP_Padlock_Prototype_01_C::Hittable' has a wrong offset!");
static_assert(offsetof(ABP_Padlock_Prototype_01_C, DamageInteractable) == 0x000330, "Member 'ABP_Padlock_Prototype_01_C::DamageInteractable' has a wrong offset!");
static_assert(offsetof(ABP_Padlock_Prototype_01_C, Ak_Event) == 0x000338, "Member 'ABP_Padlock_Prototype_01_C::Ak_Event' has a wrong offset!");

}
