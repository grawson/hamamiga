#pragma once

//Forward Declarations
struct MovementComponent;
struct AIComponent;
struct AnimationComponent;
struct RectangleComponent;
struct PhysicsComponent;
struct ComponentBag;

struct AISystem {
	MovementComponent* movementComponent;
	AIComponent* aiComponent;
	AnimationComponent* animationComponent;
	RectangleComponent* rectangleComponent;
	PhysicsComponent* physicsComponent;
};

void AISystem_Initialize(AISystem* aiSystem, ComponentBag* cBag);
void AISystem_Update(AISystem* aiSystem);
void AISystem_Free(AISystem* aiSystem);