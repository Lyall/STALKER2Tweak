#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_WhiteBridgeBetweenCutsceneLoadingScreen

#include "Basic.hpp"

#include "Stalker2_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_WhiteBridgeBetweenCutsceneLoadingScreen.W_WhiteBridgeBetweenCutsceneLoadingScreen_C
// 0x0008 (0x02F8 - 0x02F0)
class UW_WhiteBridgeBetweenCutsceneLoadingScreen_C final : public UTimedLoadingScreenWidget
{
public:
	class UImage*                                 Background;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_WhiteBridgeBetweenCutsceneLoadingScreen_C">();
	}
	static class UW_WhiteBridgeBetweenCutsceneLoadingScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_WhiteBridgeBetweenCutsceneLoadingScreen_C>();
	}
};
static_assert(alignof(UW_WhiteBridgeBetweenCutsceneLoadingScreen_C) == 0x000008, "Wrong alignment on UW_WhiteBridgeBetweenCutsceneLoadingScreen_C");
static_assert(sizeof(UW_WhiteBridgeBetweenCutsceneLoadingScreen_C) == 0x0002F8, "Wrong size on UW_WhiteBridgeBetweenCutsceneLoadingScreen_C");
static_assert(offsetof(UW_WhiteBridgeBetweenCutsceneLoadingScreen_C, Background) == 0x0002F0, "Member 'UW_WhiteBridgeBetweenCutsceneLoadingScreen_C::Background' has a wrong offset!");

}

