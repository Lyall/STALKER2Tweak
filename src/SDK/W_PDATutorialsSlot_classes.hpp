#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PDATutorialsSlot

#include "Basic.hpp"

#include "Stalker2_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass w_PDATutorialsSlot.w_PDATutorialsSlot_C
// 0x0008 (0x0388 - 0x0380)
class UW_PDATutorialsSlot_C final : public UPDATutorialSlot
{
public:
	class UImage*                                 Beckground;                                        // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"w_PDATutorialsSlot_C">();
	}
	static class UW_PDATutorialsSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_PDATutorialsSlot_C>();
	}
};
static_assert(alignof(UW_PDATutorialsSlot_C) == 0x000008, "Wrong alignment on UW_PDATutorialsSlot_C");
static_assert(sizeof(UW_PDATutorialsSlot_C) == 0x000388, "Wrong size on UW_PDATutorialsSlot_C");
static_assert(offsetof(UW_PDATutorialsSlot_C, Beckground) == 0x000380, "Member 'UW_PDATutorialsSlot_C::Beckground' has a wrong offset!");

}

