// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TSExampleInterface.h"
#include "UObject/Object.h"
#include "TSExampleObject.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class TECHSUMMIT2025_API UTSExampleObject : public UObject
{
	GENERATED_BODY()

	//TODO : Nice highlighted TODO Comment
	//  Even supports Multiple Lines
	//  But it has to be in indented
	
	void DoSomething();

public:
	UFUNCTION(BlueprintCallable)
	void CallableFunction();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void ImplementableEventFunction();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void NativeEventFunction();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int ReadWriteableVariable = 0;

private:
	UPROPERTY(EditAnywhere)
	int EditAnywhereVariable = 0;

public:
	int TestVar1;
	void Func1();

protected:
	int TestVar2;
	void Func2();
	
private:
	int TestVar3;
	void Func3();
	
};
