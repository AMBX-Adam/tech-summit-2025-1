// Fill out your copyright notice in the Description page of Project Settings.


#include "TSExampleActor.h"

#include "Kismet/KismetSystemLibrary.h"


// Sets default values
ATSExampleActor::ATSExampleActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	BoxComp->SetBoxExtent(FVector(500.f, 500.f, 500.f));
	BoxComp->bHiddenInGame = false;
}

// Called when the game starts or when spawned
void ATSExampleActor::BeginPlay()
{
	Super::BeginPlay();

	BoxComp->OnComponentBeginOverlap.AddUniqueDynamic(this, &ATSExampleActor::OnBeginOverlap);
}

void ATSExampleActor::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AActor* NullActor = nullptr;
	NullActor->Destroy();
}

// Called every frame
void ATSExampleActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//
	// UKismetSystemLibrary::PrintString(GetWorld(), FString::FromInt(ExampleActorNumber), true, false,
	//                                   FLinearColor(0, 0.66, 1), 2.f, FName(GetActorLabel(false)));
}

void ATSExampleActor::TestFunc()
{
}

void ATSExampleActor::TestFuncTwo()
{
}
