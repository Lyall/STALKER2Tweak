#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DynamicObject_2states_final

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Enum_DynamicObject_SFX_structs.hpp"
#include "Stalker2_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DynamicObject_2states_final.BP_DynamicObject_2states_final_C
// 0x0048 (0x0330 - 0x02E8)
class ABP_DynamicObject_2states_final_C final : public AInteractableObject
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAkComponent*                           Ak;                                                // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGSCNavModifierComponent*               GSCNavModifier;                                    // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Object_2;                                       // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Object_1;                                       // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USignalReceiverComponent*               Receiver_Set_Object_1;                             // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USignalReceiverComponent*               Receiver_Set_Object_2;                             // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	Enum_DynamicObject_SFX                        SFX;                                               // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_321[0x7];                                      // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          OpenSFX;                                           // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_BunkerDoor_Receiver_K2Node_ComponentBoundEvent_0_SignalReceiverComponentReceiveSignature__DelegateSignature(class UObject* DataObject);
	void BndEvt__BP_BunkerDoor_ReceiverOn_K2Node_ComponentBoundEvent_1_SignalReceiverComponentReceiveSignature__DelegateSignature(class UObject* DataObject);
	void ExecuteUbergraph_BP_DynamicObject_2states_final(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DynamicObject_2states_final_C">();
	}
	static class ABP_DynamicObject_2states_final_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DynamicObject_2states_final_C>();
	}
};
static_assert(alignof(ABP_DynamicObject_2states_final_C) == 0x000008, "Wrong alignment on ABP_DynamicObject_2states_final_C");
static_assert(sizeof(ABP_DynamicObject_2states_final_C) == 0x000330, "Wrong size on ABP_DynamicObject_2states_final_C");
static_assert(offsetof(ABP_DynamicObject_2states_final_C, UberGraphFrame) == 0x0002E8, "Member 'ABP_DynamicObject_2states_final_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DynamicObject_2states_final_C, Ak) == 0x0002F0, "Member 'ABP_DynamicObject_2states_final_C::Ak' has a wrong offset!");
static_assert(offsetof(ABP_DynamicObject_2states_final_C, GSCNavModifier) == 0x0002F8, "Member 'ABP_DynamicObject_2states_final_C::GSCNavModifier' has a wrong offset!");
static_assert(offsetof(ABP_DynamicObject_2states_final_C, SM_Object_2) == 0x000300, "Member 'ABP_DynamicObject_2states_final_C::SM_Object_2' has a wrong offset!");
static_assert(offsetof(ABP_DynamicObject_2states_final_C, SM_Object_1) == 0x000308, "Member 'ABP_DynamicObject_2states_final_C::SM_Object_1' has a wrong offset!");
static_assert(offsetof(ABP_DynamicObject_2states_final_C, Receiver_Set_Object_1) == 0x000310, "Member 'ABP_DynamicObject_2states_final_C::Receiver_Set_Object_1' has a wrong offset!");
static_assert(offsetof(ABP_DynamicObject_2states_final_C, Receiver_Set_Object_2) == 0x000318, "Member 'ABP_DynamicObject_2states_final_C::Receiver_Set_Object_2' has a wrong offset!");
static_assert(offsetof(ABP_DynamicObject_2states_final_C, SFX) == 0x000320, "Member 'ABP_DynamicObject_2states_final_C::SFX' has a wrong offset!");
static_assert(offsetof(ABP_DynamicObject_2states_final_C, OpenSFX) == 0x000328, "Member 'ABP_DynamicObject_2states_final_C::OpenSFX' has a wrong offset!");

}
