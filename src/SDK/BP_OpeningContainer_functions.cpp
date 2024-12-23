#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_OpeningContainer

#include "Basic.hpp"

#include "BP_OpeningContainer_classes.hpp"
#include "BP_OpeningContainer_parameters.hpp"


namespace SDK
{

// Function BP_OpeningContainer.BP_OpeningContainer_C.BndEvt__BP_OpeningContainer_HitReceiver_K2Node_ComponentBoundEvent_0_MeleeHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// struct FCommonHitArgs                   Common                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FMeleeHitArgs                    HitArgs                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)

void ABP_OpeningContainer_C::BndEvt__BP_OpeningContainer_HitReceiver_K2Node_ComponentBoundEvent_0_MeleeHitSignature__DelegateSignature(const struct FCommonHitArgs& Common, const struct FMeleeHitArgs& HitArgs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OpeningContainer_C", "BndEvt__BP_OpeningContainer_HitReceiver_K2Node_ComponentBoundEvent_0_MeleeHitSignature__DelegateSignature");

	Params::BP_OpeningContainer_C_BndEvt__BP_OpeningContainer_HitReceiver_K2Node_ComponentBoundEvent_0_MeleeHitSignature__DelegateSignature Parms{};

	Parms.Common = std::move(Common);
	Parms.HitArgs = std::move(HitArgs);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OpeningContainer.BP_OpeningContainer_C.BndEvt__BP_OpeningContainer_HitReceiver_K2Node_ComponentBoundEvent_1_BulletProjectileHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// struct FCommonHitArgs                   Common                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FBulletProjectileHitArgs         HitArgs                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ABP_OpeningContainer_C::BndEvt__BP_OpeningContainer_HitReceiver_K2Node_ComponentBoundEvent_1_BulletProjectileHitSignature__DelegateSignature(const struct FCommonHitArgs& Common, const struct FBulletProjectileHitArgs& HitArgs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OpeningContainer_C", "BndEvt__BP_OpeningContainer_HitReceiver_K2Node_ComponentBoundEvent_1_BulletProjectileHitSignature__DelegateSignature");

	Params::BP_OpeningContainer_C_BndEvt__BP_OpeningContainer_HitReceiver_K2Node_ComponentBoundEvent_1_BulletProjectileHitSignature__DelegateSignature Parms{};

	Parms.Common = std::move(Common);
	Parms.HitArgs = std::move(HitArgs);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OpeningContainer.BP_OpeningContainer_C.BndEvt__BP_OpeningContainer_HitReceiver_K2Node_ComponentBoundEvent_3_ExplosionHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// struct FCommonHitArgs                   Common                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FExplosionHitArgs                HitArgs                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_OpeningContainer_C::BndEvt__BP_OpeningContainer_HitReceiver_K2Node_ComponentBoundEvent_3_ExplosionHitSignature__DelegateSignature(const struct FCommonHitArgs& Common, const struct FExplosionHitArgs& HitArgs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OpeningContainer_C", "BndEvt__BP_OpeningContainer_HitReceiver_K2Node_ComponentBoundEvent_3_ExplosionHitSignature__DelegateSignature");

	Params::BP_OpeningContainer_C_BndEvt__BP_OpeningContainer_HitReceiver_K2Node_ComponentBoundEvent_3_ExplosionHitSignature__DelegateSignature Parms{};

	Parms.Common = std::move(Common);
	Parms.HitArgs = std::move(HitArgs);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OpeningContainer.BP_OpeningContainer_C.BndEvt__BP_OpeningContainer_SingleClick_K2Node_ComponentBoundEvent_0_InteractSignature__DelegateSignature
// (BlueprintEvent)

void ABP_OpeningContainer_C::BndEvt__BP_OpeningContainer_SingleClick_K2Node_ComponentBoundEvent_0_InteractSignature__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OpeningContainer_C", "BndEvt__BP_OpeningContainer_SingleClick_K2Node_ComponentBoundEvent_0_InteractSignature__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_OpeningContainer.BP_OpeningContainer_C.BndEvt__BP_OpeningContainer_SingleClickClose_K2Node_ComponentBoundEvent_4_InteractSignature__DelegateSignature
// (BlueprintEvent)

void ABP_OpeningContainer_C::BndEvt__BP_OpeningContainer_SingleClickClose_K2Node_ComponentBoundEvent_4_InteractSignature__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OpeningContainer_C", "BndEvt__BP_OpeningContainer_SingleClickClose_K2Node_ComponentBoundEvent_4_InteractSignature__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_OpeningContainer.BP_OpeningContainer_C.ExecuteUbergraph_BP_OpeningContainer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_OpeningContainer_C::ExecuteUbergraph_BP_OpeningContainer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OpeningContainer_C", "ExecuteUbergraph_BP_OpeningContainer");

	Params::BP_OpeningContainer_C_ExecuteUbergraph_BP_OpeningContainer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OpeningContainer.BP_OpeningContainer_C.OpenRotatCoef__FinishedFunc
// (BlueprintEvent)

void ABP_OpeningContainer_C::OpenRotatCoef__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OpeningContainer_C", "OpenRotatCoef__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_OpeningContainer.BP_OpeningContainer_C.OpenRotatCoef__UpdateFunc
// (BlueprintEvent)

void ABP_OpeningContainer_C::OpenRotatCoef__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OpeningContainer_C", "OpenRotatCoef__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_OpeningContainer.BP_OpeningContainer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_OpeningContainer_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OpeningContainer_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

