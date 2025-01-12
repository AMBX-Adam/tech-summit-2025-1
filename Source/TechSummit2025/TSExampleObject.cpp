// Fill out your copyright notice in the Description page of Project Settings.


#include "TSExampleObject.h"

#include "TechSummit2025Character.h"

void UTSExampleObject::DoSomething()
{
	float TestFloat = 1.5f;
	float TestFloat2 = 5.f;

	float FinalFloat = TestFloat + TestFloat2;
	
	FVector TestVector(FinalFloat);
	FVector RandVector = FMath::VRand();
	
	float DotProduct = TestVector.Dot(RandVector);

	TestFloat = TestFloat * DotProduct;
}

void UTSExampleObject::CallableFunction()
{
	ReadWriteableVariable = 100;
	EditAnywhereVariable = 100;
}

void UTSExampleObject::NativeEventFunction_Implementation()
{
}

void UTSExampleObject::Func1()
{
	CallableFunction();
}

void UTSExampleObject::Func2()
{
}

void UTSExampleObject::Func3()
{
}
