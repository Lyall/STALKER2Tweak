#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WeatherController_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Stalker2_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WeatherController_BP.WeatherController_BP_C
// 0x0008 (0x0668 - 0x0660)
class AWeatherController_BP_C final : public AWeatherController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0660(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_WeatherController_BP(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeatherController_BP_C">();
	}
	static class AWeatherController_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWeatherController_BP_C>();
	}
};
static_assert(alignof(AWeatherController_BP_C) == 0x000008, "Wrong alignment on AWeatherController_BP_C");
static_assert(sizeof(AWeatherController_BP_C) == 0x000668, "Wrong size on AWeatherController_BP_C");
static_assert(offsetof(AWeatherController_BP_C, UberGraphFrame) == 0x000660, "Member 'AWeatherController_BP_C::UberGraphFrame' has a wrong offset!");

}
