#include "MovementSystem.h"
#include "MovementComponent.h"
#include "RectangleComponent.h"
#include "ComponentBag.h"

void MovementSystem_Initialize(MovementSystem* movementSystem, ComponentBag* cBag) {
	movementSystem->movementComponent 	=	cBag->movementComponent;
	movementSystem->rectangleComponent  =	cBag->rectangleComponent;
}


void MovementSystem_Update(MovementSystem* movementSystem, float timestep) {
	MovementComponent* movementComponent = movementSystem->movementComponent;
	RectangleComponent* rectangleComponent = movementSystem->rectangleComponent;

	for (uint32 entityIndex = 0; entityIndex < movementComponent->count; entityIndex++) {
		uint32 eid = movementComponent->entityArray[entityIndex];
		if (!Component_HasIndex(rectangleComponent, eid)) {
			continue;
		}
		
		// Get movement values for the entity
		MovementValues* moveValue = &movementComponent->movementValues[eid];
		moveValue->xVelocity      += moveValue->xAccel * timestep;
		moveValue->yVelocity      += moveValue->yAccel * timestep;
		
		float slow = 0.f;
		if (eid != Constants::PlayerIndex_) {
		  slow = 15.f;
		}

		if (moveValue->xVelocity >= moveValue->maxXVelocity*timestep && moveValue->xVelocity > 0) {
		  moveValue->xVelocity = moveValue->maxXVelocity*timestep;
		} else if (moveValue->xVelocity <= -moveValue->maxXVelocity*timestep && moveValue->xVelocity < 0) {
		  moveValue->xVelocity = -moveValue->maxXVelocity*timestep;
		}

		if (moveValue->yVelocity >= moveValue->maxYVelocity*timestep && moveValue->yVelocity > 0) {
		  moveValue->yVelocity = moveValue->maxYVelocity*timestep;
		} else if (moveValue->yVelocity <= -moveValue->maxYVelocity*timestep && moveValue->yVelocity < 0) {
		  moveValue->yVelocity = -moveValue->maxYVelocity*timestep;
		}
		

		// Get the entity's rectangle
		Rectangle* rectangle = &rectangleComponent->entityRectangles[eid];

		// Move the rectangle appropriately
		rectangle->x += (int)(moveValue->xVelocity);

		if (rectangle->x <= 0) {
			rectangle->x = 0;
			moveValue->xVelocity *= -1;
			moveValue->xAccel *= -1;
		}

		rectangle->y += (int)(moveValue->yVelocity);

		if (rectangle->y >= Constants::LevelHeight_) {
		  Component_Remove(movementComponent, movementComponent->entityArray[entityIndex]);
		  Component_Remove(rectangleComponent, rectangleComponent->entityArray[entityIndex]);
		}
		if (rectangle->y < 0) {
		  rectangle->y = 0;
		  moveValue->yVelocity = 0;
		}
		if (rectangle->x + rectangle->w >= Constants::LevelWidth_) {
			rectangle->x = Constants::LevelWidth_ - rectangle->w;
			moveValue->xVelocity *= -1;
			moveValue->xAccel *= -1;
		}
	}
	
}
