// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MySort.generated.h"

UCLASS()
class UE4_SORT_API AMySort : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMySort();
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="ActorMeshComponents")
	UStaticMeshComponent* StaticMesh;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="MySort")
	int Amount;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="MySort")
	int Width;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void Init();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
