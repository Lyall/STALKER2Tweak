#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Bed_OnBed

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_Bed_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Bed_OnBed.BP_Bed_OnBed_C
// 0x0010 (0x0360 - 0x0350)
class ABP_Bed_OnBed_C final : public ABP_Bed_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Bed_OnBed_C;                     // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                        Arrow;                                             // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Bed_OnBed(int32 EntryPoint);
	void InteractOn();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Bed_OnBed_C">();
	}
	static class ABP_Bed_OnBed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Bed_OnBed_C>();
	}
};
static_assert(alignof(ABP_Bed_OnBed_C) == 0x000008, "Wrong alignment on ABP_Bed_OnBed_C");
static_assert(sizeof(ABP_Bed_OnBed_C) == 0x000360, "Wrong size on ABP_Bed_OnBed_C");
static_assert(offsetof(ABP_Bed_OnBed_C, UberGraphFrame_BP_Bed_OnBed_C) == 0x000350, "Member 'ABP_Bed_OnBed_C::UberGraphFrame_BP_Bed_OnBed_C' has a wrong offset!");
static_assert(offsetof(ABP_Bed_OnBed_C, Arrow) == 0x000358, "Member 'ABP_Bed_OnBed_C::Arrow' has a wrong offset!");

}

