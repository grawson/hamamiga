#pragma once

struct InputComponent;
struct InteractableComponent;
struct RectangleComponent;
struct AliveComponent;
struct GoalComponent;
struct ComponentBag;
struct Game;

struct InteractionSystem {
	InputComponent* inputComponent;
	InteractableComponent* interactableComponent;
	RectangleComponent* rectangleComponent;
	AliveComponent* aliveComponent;
	GoalComponent* goalComponent;
	ComponentBag* cBag;
	Game* game;
};

void InteractionSystem_Initialize(InteractionSystem* interactionSystem, ComponentBag* cBag, Game* game);
void InteractionSystem_Update(InteractionSystem* interactionSystem);
void InteractionSystem_Free(InteractionSystem* interactionSystem);