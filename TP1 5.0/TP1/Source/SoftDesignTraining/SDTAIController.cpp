// Fill out your copyright notice in the Description page of Project Settings.

#include "SDTAIController.h"
#include "SoftDesignTraining.h"

void ASDTAIController::Tick(float deltaTime)
{
    FVector const actorForwardDirection = GetPawn()->GetActorForwardVector();
    MoveWithSpeed(MaxSpeed, Acceleration, deltaTime);


}
void ASDTAIController::MoveWithSpeed(float MaxSpeed, float Acceleration, float deltaTime) {
	APawn* pawn = GetPawn();
	float newSpeed = initialSpeed + Acceleration * deltaTime;
	newSpeed = FMath::Clamp(newSpeed, 0.1f, MaxSpeed);
	pawn->AddMovementInput(pawn->GetActorForwardVector(), newSpeed, true);
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("ai moving"));

}




