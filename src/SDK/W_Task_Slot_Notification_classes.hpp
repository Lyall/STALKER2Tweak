#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Task_Slot_Notification

#include "Basic.hpp"

#include "Stalker2_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Task_Slot_Notification.W_Task_Slot_Notification_C
// 0x0008 (0x0310 - 0x0308)
class UW_Task_Slot_Notification_C final : public UQuestTaskNotification
{
public:
	class UWidgetAnimation*                       AnimBuf;                                           // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Task_Slot_Notification_C">();
	}
	static class UW_Task_Slot_Notification_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Task_Slot_Notification_C>();
	}
};
static_assert(alignof(UW_Task_Slot_Notification_C) == 0x000008, "Wrong alignment on UW_Task_Slot_Notification_C");
static_assert(sizeof(UW_Task_Slot_Notification_C) == 0x000310, "Wrong size on UW_Task_Slot_Notification_C");
static_assert(offsetof(UW_Task_Slot_Notification_C, AnimBuf) == 0x000308, "Member 'UW_Task_Slot_Notification_C::AnimBuf' has a wrong offset!");

}

