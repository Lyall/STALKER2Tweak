#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PDABookView

#include "Basic.hpp"

#include "Stalker2_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_PDABookView.W_PDABookView_C
// 0x0040 (0x0390 - 0x0350)
class UW_PDABookView_C final : public UPDAView
{
public:
	class UW_BestiaryPage_C*                      BestiaryPage;                                      // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HintFrameTopDecorator;                             // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_JournalPage_C*                       JournalPage;                                       // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MapPage_C*                           MapPage;                                           // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_NotesPage_C*                         NotesPage;                                         // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_StatisticPage_C*                     StatisticPage;                                     // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TutorialPage_C*                      TutorialPage;                                      // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_UpgradePage_C*                       UpgradePage;                                       // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_PDABookView_C">();
	}
	static class UW_PDABookView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_PDABookView_C>();
	}
};
static_assert(alignof(UW_PDABookView_C) == 0x000008, "Wrong alignment on UW_PDABookView_C");
static_assert(sizeof(UW_PDABookView_C) == 0x000390, "Wrong size on UW_PDABookView_C");
static_assert(offsetof(UW_PDABookView_C, BestiaryPage) == 0x000350, "Member 'UW_PDABookView_C::BestiaryPage' has a wrong offset!");
static_assert(offsetof(UW_PDABookView_C, HintFrameTopDecorator) == 0x000358, "Member 'UW_PDABookView_C::HintFrameTopDecorator' has a wrong offset!");
static_assert(offsetof(UW_PDABookView_C, JournalPage) == 0x000360, "Member 'UW_PDABookView_C::JournalPage' has a wrong offset!");
static_assert(offsetof(UW_PDABookView_C, MapPage) == 0x000368, "Member 'UW_PDABookView_C::MapPage' has a wrong offset!");
static_assert(offsetof(UW_PDABookView_C, NotesPage) == 0x000370, "Member 'UW_PDABookView_C::NotesPage' has a wrong offset!");
static_assert(offsetof(UW_PDABookView_C, StatisticPage) == 0x000378, "Member 'UW_PDABookView_C::StatisticPage' has a wrong offset!");
static_assert(offsetof(UW_PDABookView_C, TutorialPage) == 0x000380, "Member 'UW_PDABookView_C::TutorialPage' has a wrong offset!");
static_assert(offsetof(UW_PDABookView_C, UpgradePage) == 0x000388, "Member 'UW_PDABookView_C::UpgradePage' has a wrong offset!");

}
