// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TSExampleInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(NotBlueprintable)
class UTSExampleInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TECHSUMMIT2025_API ITSExampleInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void TestFunc() = 0;
	virtual void TestFuncTwo() = 0;
};
