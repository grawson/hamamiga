#pragma once
#include "Types.h"

// Forward Declarations
struct MovementComponent;
struct InputComponent;
struct HealthComponent;
struct HatComponent;
struct ComponentBag;

struct InputSystem {
	InputComponent* inputComponent;
	MovementComponent* movementComponent; 
	HealthComponent* healthComponent;
	HatComponent*	hatComponent;
	ComponentBag* cBag;
};


void InputSystem_Initialize(InputSystem* inputSystem, ComponentBag* cBag);
void InputSystem_Update(InputSystem* inputSystem, bool keysPressed[], bool keysUp[]);
void InputSystem_Free(InputSystem* inputSystem);