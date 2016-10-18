#include "MovementComponent.h"

void MovementComponent_Add(MovementComponent* movementComponent, uint32 eid, float xVelocity, float yVelocity, int xAccel, int yAccel) {
	Component_Add(movementComponent, eid);
	movementComponent->movementValues[eid].maxXVelocity 	= xVelocity;
	movementComponent->movementValues[eid].maxYVelocity 	= yVelocity;
	movementComponent->movementValues[eid].accelX 		= xAccel;
	movementComponent->movementValues[eid].accelY 		= yAccel;
	movementComponent->movementValues[eid].xVelocity        = 0;
	movementComponent->movementValues[eid].yVelocity        = 0;
	movementComponent->movementValues[eid].xAccel           = 0;
	movementComponent->movementValues[eid].yAccel           = 0;
}
