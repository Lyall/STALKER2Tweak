#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_TeleportLoadingScreen

#include "Basic.hpp"

#include "Stalker2_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_TeleportLoadingScreen.W_TeleportLoadingScreen_C
// 0x0008 (0x02F8 - 0x02F0)
class UW_TeleportLoadingScreen_C final : public UTimedLoadingScreenWidget
{
public:
	class UImage*                                 Background;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_TeleportLoadingScreen_C">();
	}
	static class UW_TeleportLoadingScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_TeleportLoadingScreen_C>();
	}
};
static_assert(alignof(UW_TeleportLoadingScreen_C) == 0x000008, "Wrong alignment on UW_TeleportLoadingScreen_C");
static_assert(sizeof(UW_TeleportLoadingScreen_C) == 0x0002F8, "Wrong size on UW_TeleportLoadingScreen_C");
static_assert(offsetof(UW_TeleportLoadingScreen_C, Background) == 0x0002F0, "Member 'UW_TeleportLoadingScreen_C::Background' has a wrong offset!");

}

