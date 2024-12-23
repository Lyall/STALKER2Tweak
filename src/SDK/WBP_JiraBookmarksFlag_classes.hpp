#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_JiraBookmarksFlag

#include "Basic.hpp"

#include "LevelBookmarks_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_JiraBookmarksFlag.WBP_JiraBookmarksFlag_C
// 0x0040 (0x0338 - 0x02F8)
class UWBP_JiraBookmarksFlag_C final : public UJiraBookmarksFlagWidget
{
public:
	class UTextBlock*                             DescriptionText;                                   // 0x02F8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NoteHeader;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NoteHeader_1;                                      // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PriopityText;                                      // 0x0310(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_main;                                    // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Separator;                                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             VersionText;                                       // 0x0328(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Sub;                                   // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_JiraBookmarksFlag_C">();
	}
	static class UWBP_JiraBookmarksFlag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_JiraBookmarksFlag_C>();
	}
};
static_assert(alignof(UWBP_JiraBookmarksFlag_C) == 0x000008, "Wrong alignment on UWBP_JiraBookmarksFlag_C");
static_assert(sizeof(UWBP_JiraBookmarksFlag_C) == 0x000338, "Wrong size on UWBP_JiraBookmarksFlag_C");
static_assert(offsetof(UWBP_JiraBookmarksFlag_C, DescriptionText) == 0x0002F8, "Member 'UWBP_JiraBookmarksFlag_C::DescriptionText' has a wrong offset!");
static_assert(offsetof(UWBP_JiraBookmarksFlag_C, NoteHeader) == 0x000300, "Member 'UWBP_JiraBookmarksFlag_C::NoteHeader' has a wrong offset!");
static_assert(offsetof(UWBP_JiraBookmarksFlag_C, NoteHeader_1) == 0x000308, "Member 'UWBP_JiraBookmarksFlag_C::NoteHeader_1' has a wrong offset!");
static_assert(offsetof(UWBP_JiraBookmarksFlag_C, PriopityText) == 0x000310, "Member 'UWBP_JiraBookmarksFlag_C::PriopityText' has a wrong offset!");
static_assert(offsetof(UWBP_JiraBookmarksFlag_C, ScrollBox_main) == 0x000318, "Member 'UWBP_JiraBookmarksFlag_C::ScrollBox_main' has a wrong offset!");
static_assert(offsetof(UWBP_JiraBookmarksFlag_C, Separator) == 0x000320, "Member 'UWBP_JiraBookmarksFlag_C::Separator' has a wrong offset!");
static_assert(offsetof(UWBP_JiraBookmarksFlag_C, VersionText) == 0x000328, "Member 'UWBP_JiraBookmarksFlag_C::VersionText' has a wrong offset!");
static_assert(offsetof(UWBP_JiraBookmarksFlag_C, VerticalBox_Sub) == 0x000330, "Member 'UWBP_JiraBookmarksFlag_C::VerticalBox_Sub' has a wrong offset!");

}

