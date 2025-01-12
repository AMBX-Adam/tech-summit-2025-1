// Fill out your copyright notice in the Description page of Project Settings.


#include "TSExampleActor.h"

#include "Net/UnrealNetwork.h"


// Sets default values
ATSExampleActor::ATSExampleActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

#pragma optimize( "", off )
// Called when the game starts or when spawned
void ATSExampleActor::BeginPlay()
{
	Super::BeginPlay();

	int TempNum = 0;
	for (int i = 0; i < 100; ++i)
	{
		TempNum += 1;
	}
}
#pragma optimize( "", on )

// Called every frame
void ATSExampleActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ATSExampleActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void ATSExampleActor::TestFunc()
{
}

void ATSExampleActor::TestFuncTwo()
{
}
