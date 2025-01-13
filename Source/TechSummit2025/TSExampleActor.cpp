// Fill out your copyright notice in the Description page of Project Settings.


#include "TSExampleActor.h"

#include "Kismet/KismetSystemLibrary.h"
#include "Net/UnrealNetwork.h"


// Sets default values
ATSExampleActor::ATSExampleActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ATSExampleActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ATSExampleActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	UKismetSystemLibrary::PrintString(GetWorld(), FString::FromInt(ExampleActorNumber), true, false,
	                                  FLinearColor(0, 0.66, 1), 2.f, FName(GetActorLabel(false)));
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
