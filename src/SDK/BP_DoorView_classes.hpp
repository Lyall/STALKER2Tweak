#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DoorView

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Stalker2_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DoorView.BP_DoorView_C
// 0x0010 (0x07A0 - 0x0790)
class ABP_DoorView_C final : public ADoorView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0790(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          ShouldCloseFast;                                   // 0x0798(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_DoorView_CloseDoorReceiver_K2Node_ComponentBoundEvent_25_SignalReceiverComponentReceiveSignature__DelegateSignature(class UObject* DataObject);
	void BndEvt__BP_DoorView_CloseDoorSingleClick_K2Node_ComponentBoundEvent_3_InteractSignature__DelegateSignature();
	void BndEvt__BP_DoorView_ClosePeekDoorHold_K2Node_ComponentBoundEvent_7_InteractSignature__DelegateSignature();
	void BndEvt__BP_DoorView_ForceCloseDoorReceiver_K2Node_ComponentBoundEvent_29_SignalReceiverComponentReceiveSignature__DelegateSignature(class UObject* DataObject);
	void BndEvt__BP_DoorView_ForceOpenDoorReceiver_K2Node_ComponentBoundEvent_28_SignalReceiverComponentReceiveSignature__DelegateSignature(class UObject* DataObject);
	void BndEvt__BP_DoorView_InvertDoorLockReceiver_K2Node_ComponentBoundEvent_1_SignalReceiverComponentReceiveSignature__DelegateSignature(class UObject* DataObject);
	void BndEvt__BP_DoorView_InvertDoorStateReceiver_K2Node_ComponentBoundEvent_0_SignalReceiverComponentReceiveSignature__DelegateSignature(class UObject* DataObject);
	void BndEvt__BP_DoorView_LockDoorReceiver_K2Node_ComponentBoundEvent_26_SignalReceiverComponentReceiveSignature__DelegateSignature(class UObject* DataObject);
	void BndEvt__BP_DoorView_LockedSingleClick_K2Node_ComponentBoundEvent_4_InteractSignature__DelegateSignature();
	void BndEvt__BP_DoorView_OpenDoorReceiver_K2Node_ComponentBoundEvent_24_SignalReceiverComponentReceiveSignature__DelegateSignature(class UObject* DataObject);
	void BndEvt__BP_DoorView_OpenDoorSingleClick_K2Node_ComponentBoundEvent_2_InteractSignature__DelegateSignature();
	void BndEvt__BP_DoorView_PeekDoorHold_K2Node_ComponentBoundEvent_6_InteractSignature__DelegateSignature();
	void BndEvt__BP_DoorView_UnlockDoorReceiver_K2Node_ComponentBoundEvent_27_SignalReceiverComponentReceiveSignature__DelegateSignature(class UObject* DataObject);
	void BndEvt__BP_DoorViewTest_PeekDoorReceiver_K2Node_ComponentBoundEvent_5_SignalReceiverComponentReceiveSignature__DelegateSignature(class UObject* DataObject);
	void ExecuteUbergraph_BP_DoorView(int32 EntryPoint);
	void OnDoorClosedCompletely();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DoorView_C">();
	}
	static class ABP_DoorView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DoorView_C>();
	}
};
static_assert(alignof(ABP_DoorView_C) == 0x000010, "Wrong alignment on ABP_DoorView_C");
static_assert(sizeof(ABP_DoorView_C) == 0x0007A0, "Wrong size on ABP_DoorView_C");
static_assert(offsetof(ABP_DoorView_C, UberGraphFrame) == 0x000790, "Member 'ABP_DoorView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DoorView_C, ShouldCloseFast) == 0x000798, "Member 'ABP_DoorView_C::ShouldCloseFast' has a wrong offset!");

}
