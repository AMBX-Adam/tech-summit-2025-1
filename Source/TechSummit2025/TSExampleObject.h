// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TSExampleInterface.h"
#include "UObject/Object.h"
#include "TSExampleObject.generated.h"

/**
 * 
 */
UCLASS()
class TECHSUMMIT2025_API UTSExampleObject : public UObject
{
	GENERATED_BODY() 

public:
	UFUNCTION(Server, Reliable) 
	void Server_TestFunc();

	UFUNCTION(Server, Reliable, WithValidation) 
	void Server_TestFuncValidated();

	UFUNCTION(BlueprintNativeEvent)
	void TestNativeEvent();
};
