#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlineSubsystemGDK

#include "Basic.hpp"

#include "OnlineSubsystemUtils_classes.hpp"


namespace SDK
{

// Class OnlineSubsystemGDK.GDKNetDriver
// 0x0000 (0x0840 - 0x0840)
class UGDKNetDriver final : public UIpNetDriver
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GDKNetDriver">();
	}
	static class UGDKNetDriver* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGDKNetDriver>();
	}
};
static_assert(alignof(UGDKNetDriver) == 0x000008, "Wrong alignment on UGDKNetDriver");
static_assert(sizeof(UGDKNetDriver) == 0x000840, "Wrong size on UGDKNetDriver");

}

