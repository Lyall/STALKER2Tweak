#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PDATutorialButton

#include "Basic.hpp"

#include "Stalker2_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_PDATutorialButton.W_PDATutorialButton_C
// 0x0008 (0x0348 - 0x0340)
class UW_PDATutorialButton_C final : public UPDATutorialButton
{
public:
	class UW_Text_C*                              ButtonText;                                        // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_PDATutorialButton_C">();
	}
	static class UW_PDATutorialButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_PDATutorialButton_C>();
	}
};
static_assert(alignof(UW_PDATutorialButton_C) == 0x000008, "Wrong alignment on UW_PDATutorialButton_C");
static_assert(sizeof(UW_PDATutorialButton_C) == 0x000348, "Wrong size on UW_PDATutorialButton_C");
static_assert(offsetof(UW_PDATutorialButton_C, ButtonText) == 0x000340, "Member 'UW_PDATutorialButton_C::ButtonText' has a wrong offset!");

}

