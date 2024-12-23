#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SettingsNavigationPanel

#include "Basic.hpp"

#include "Stalker2_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SettingsNavigationPanel.SettingsNavigationPanel_C
// 0x0038 (0x02C8 - 0x0290)
class USettingsNavigationPanel_C final : public USettingsNavigationPanel
{
public:
	class USettingsNavPanelSlot_C*                Accessibility;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingsNavPanelSlot_C*                Audio;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingsNavPanelSlot_C*                Contorls;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingsNavPanelSlot_C*                Display;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingsNavPanelSlot_C*                Game;                                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingsNavPanelSlot_C*                Interface;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingsNavPanelSlot_C*                Video;                                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SettingsNavigationPanel_C">();
	}
	static class USettingsNavigationPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USettingsNavigationPanel_C>();
	}
};
static_assert(alignof(USettingsNavigationPanel_C) == 0x000008, "Wrong alignment on USettingsNavigationPanel_C");
static_assert(sizeof(USettingsNavigationPanel_C) == 0x0002C8, "Wrong size on USettingsNavigationPanel_C");
static_assert(offsetof(USettingsNavigationPanel_C, Accessibility) == 0x000290, "Member 'USettingsNavigationPanel_C::Accessibility' has a wrong offset!");
static_assert(offsetof(USettingsNavigationPanel_C, Audio) == 0x000298, "Member 'USettingsNavigationPanel_C::Audio' has a wrong offset!");
static_assert(offsetof(USettingsNavigationPanel_C, Contorls) == 0x0002A0, "Member 'USettingsNavigationPanel_C::Contorls' has a wrong offset!");
static_assert(offsetof(USettingsNavigationPanel_C, Display) == 0x0002A8, "Member 'USettingsNavigationPanel_C::Display' has a wrong offset!");
static_assert(offsetof(USettingsNavigationPanel_C, Game) == 0x0002B0, "Member 'USettingsNavigationPanel_C::Game' has a wrong offset!");
static_assert(offsetof(USettingsNavigationPanel_C, Interface) == 0x0002B8, "Member 'USettingsNavigationPanel_C::Interface' has a wrong offset!");
static_assert(offsetof(USettingsNavigationPanel_C, Video) == 0x0002C0, "Member 'USettingsNavigationPanel_C::Video' has a wrong offset!");

}

