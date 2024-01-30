// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"

#include "SDTAIController.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = AI, config = Game)
class SOFTDESIGNTRAINING_API ASDTAIController : public AAIController
{
    GENERATED_BODY()


public:

    virtual void Tick(float deltaTime) override;
    UFUNCTION(BlueprintCallable, Category = "CustomFunctions")
    void MoveWithSpeed(float MaxSpeed, float Acceleration, float deltaTime);

    enum class GameObject
    {
        wall, 
        Player,
        Collectible,
        Floor
    };
    enum class StateAI {
        Detected,
        Undetected,
        Vulnerable
    };

private :

    float const MaxSpeed = 0.5f;
    float const Acceleration = 100.0f;
    float initialSpeed = 0.0f;

};
