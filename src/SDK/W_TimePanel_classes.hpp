#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_TimePanel

#include "Basic.hpp"

#include "Stalker2_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_TimePanel.W_TimePanel_C
// 0x0010 (0x02C0 - 0x02B0)
class UW_TimePanel_C final : public UPDATimePanel
{
public:
	class UW_Text_C*                              Dots;                                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Power;                                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_TimePanel_C">();
	}
	static class UW_TimePanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_TimePanel_C>();
	}
};
static_assert(alignof(UW_TimePanel_C) == 0x000008, "Wrong alignment on UW_TimePanel_C");
static_assert(sizeof(UW_TimePanel_C) == 0x0002C0, "Wrong size on UW_TimePanel_C");
static_assert(offsetof(UW_TimePanel_C, Dots) == 0x0002B0, "Member 'UW_TimePanel_C::Dots' has a wrong offset!");
static_assert(offsetof(UW_TimePanel_C, Power) == 0x0002B8, "Member 'UW_TimePanel_C::Power' has a wrong offset!");

}
