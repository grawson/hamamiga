#pragma once
#include "Component.h"

struct RectangleComponent;
struct MovementComponent;
struct TextureComponent;
struct InputComponent;
struct AnimationComponent;
struct PhysicsComponent;
struct HealthComponent;
struct CameraComponent;
struct HatComponent;
struct AIComponent;
struct AliveComponent;
struct GoalComponent;
struct InteractableComponent;
struct NameComponent;
struct DamageComponent;
struct TeamComponent;
struct BulletComponent;

struct ComponentBag {
	RectangleComponent* rectangleComponent;
	MovementComponent* 	movementComponent;
	TextureComponent*   textureComponent;
	InputComponent* 	inputComponent;
	AnimationComponent* animationComponent;
	PhysicsComponent* 	physicsComponent;
	HealthComponent* 	healthComponent;
	CameraComponent*	cameraComponent;
  	HatComponent*       hatComponent;
	AIComponent* 		aiComponent;
	AliveComponent* 	aliveComponent;
	GoalComponent* 		goalComponent;
	InteractableComponent * interactableComponent;
	NameComponent* 		nameComponent;
	DamageComponent* 	damageComponent;
	TeamComponent* 		teamComponent;
	BulletComponent*    bulletComponent;
};

void ComponentBag_Malloc(ComponentBag* bag);
void ComponentBag_Check(ComponentBag* bag);
void ComponentBag_Reset(ComponentBag* bag);
void ComponentBag_Free(ComponentBag* bag);
void Component_EnableEntity(ComponentBag* bag, uint32 eid);
void Component_DisableEntity(ComponentBag* bag, uint32 eid);
void ComponentBag_ForceRemove(ComponentBag* bag, uint32 eid);