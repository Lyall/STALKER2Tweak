#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_UpgradePrice

#include "Basic.hpp"

#include "Stalker2_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_UpgradePrice.W_UpgradePrice_C
// 0x0010 (0x02C0 - 0x02B0)
class UW_UpgradePrice_C final : public UUpgradePriceWidget
{
public:
	class UImage*                                 Karbo;                                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line;                                              // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_UpgradePrice_C">();
	}
	static class UW_UpgradePrice_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_UpgradePrice_C>();
	}
};
static_assert(alignof(UW_UpgradePrice_C) == 0x000008, "Wrong alignment on UW_UpgradePrice_C");
static_assert(sizeof(UW_UpgradePrice_C) == 0x0002C0, "Wrong size on UW_UpgradePrice_C");
static_assert(offsetof(UW_UpgradePrice_C, Karbo) == 0x0002B0, "Member 'UW_UpgradePrice_C::Karbo' has a wrong offset!");
static_assert(offsetof(UW_UpgradePrice_C, Line) == 0x0002B8, "Member 'UW_UpgradePrice_C::Line' has a wrong offset!");

}
