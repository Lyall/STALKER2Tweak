#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PauseMenuSubViewRoot

#include "Basic.hpp"

#include "Stalker2_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_PauseMenuSubViewRoot.W_PauseMenuSubViewRoot_C
// 0x0010 (0x02E0 - 0x02D0)
class UW_PauseMenuSubViewRoot_C final : public UMenuSubViewBase
{
public:
	class UImage*                                 Logo;                                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LastSaveTimeMenuWidget_C*            W_LastSaveTimeMenuWidget;                          // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_PauseMenuSubViewRoot_C">();
	}
	static class UW_PauseMenuSubViewRoot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_PauseMenuSubViewRoot_C>();
	}
};
static_assert(alignof(UW_PauseMenuSubViewRoot_C) == 0x000008, "Wrong alignment on UW_PauseMenuSubViewRoot_C");
static_assert(sizeof(UW_PauseMenuSubViewRoot_C) == 0x0002E0, "Wrong size on UW_PauseMenuSubViewRoot_C");
static_assert(offsetof(UW_PauseMenuSubViewRoot_C, Logo) == 0x0002D0, "Member 'UW_PauseMenuSubViewRoot_C::Logo' has a wrong offset!");
static_assert(offsetof(UW_PauseMenuSubViewRoot_C, W_LastSaveTimeMenuWidget) == 0x0002D8, "Member 'UW_PauseMenuSubViewRoot_C::W_LastSaveTimeMenuWidget' has a wrong offset!");

}
