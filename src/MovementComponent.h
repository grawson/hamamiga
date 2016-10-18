#include "Component.h"

struct MovementValues {
	float xVelocity; //current xVelocity
	float yVelocity; //current yVelocity
	float xAccel; //current xAcceleration
	float yAccel; //current yAcceleration
	float accelX; //standard x acceleration
	float accelY; //standard y acceleration
	float maxXVelocity; //maximum x velocity
	float maxYVelocity; //maximum y velocity
};

struct MovementComponent : public Component {
	MovementValues movementValues[Constants::MaxEntities_]; // Saved by ID rather than index
};

void MovementComponent_Add(MovementComponent* movementComponent, uint32 eid, float xVelocity, float yVelocity, int xAccel, int yAccel);