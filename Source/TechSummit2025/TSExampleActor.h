// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TSExampleInterface.h"
#include "Components/BoxComponent.h"
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
	
	int ExampleActorNumber = 50;

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	UBoxComponent* BoxComp;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	virtual void TestFunc() override;
	virtual void TestFuncTwo() override;
};
