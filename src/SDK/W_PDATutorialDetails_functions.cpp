#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PDATutorialDetails

#include "Basic.hpp"

#include "W_PDATutorialDetails_classes.hpp"
#include "W_PDATutorialDetails_parameters.hpp"


namespace SDK
{

// Function W_PDATutorialDetails.W_PDATutorialDetails_C.Get_AudioPlayButton_bIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UW_PDATutorialDetails_C::Get_AudioPlayButton_bIsEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PDATutorialDetails_C", "Get_AudioPlayButton_bIsEnabled");

	Params::W_PDATutorialDetails_C_Get_AudioPlayButton_bIsEnabled Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
