// Fill out your copyright notice in the Description page of Project Settings.


#include "MySort.h"

// Sets default values
AMySort::AMySort()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Amount=1;
	Width=100;

	// StaticMesh=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CustomStaticMesh"));
}

// Called when the game starts or when spawned
void AMySort::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMySort::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMySort::Init()
{
}


