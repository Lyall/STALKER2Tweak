#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_DemoPopup

#include "Basic.hpp"

#include "Stalker2_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_DemoPopup.W_DemoPopup_C
// 0x0008 (0x0350 - 0x0348)
class UW_DemoPopup_C final : public UPopupBase
{
public:
	class UW_SpecialPopupBackground_C*            Background;                                        // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_DemoPopup_C">();
	}
	static class UW_DemoPopup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_DemoPopup_C>();
	}
};
static_assert(alignof(UW_DemoPopup_C) == 0x000008, "Wrong alignment on UW_DemoPopup_C");
static_assert(sizeof(UW_DemoPopup_C) == 0x000350, "Wrong size on UW_DemoPopup_C");
static_assert(offsetof(UW_DemoPopup_C, Background) == 0x000348, "Member 'UW_DemoPopup_C::Background' has a wrong offset!");

}
