// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TSExampleInterface.h"
#include "GameFramework/Actor.h"
#include "TSExampleActor.generated.h"

UCLASS(Blueprintable, BlueprintType)
class TECHSUMMIT2025_API ATSExampleActor : public AActor, public ITSExampleInterface 
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ATSExampleActor();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bExampleBool = false;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
	virtual void TestFunc() override;
	virtual void TestFuncTwo() override;
};
