#include "Coordinates.h"

Coordinates::Coordinates(float x_, float y_, float z_) {
	x = x_;
	y = y_;
	z = z_;
}

Coordinates::~Coordinates() {
}

void Coordinates::translate(float x_, float y_, float z_) {
	x += x_;
	y += y_;
	z += z_;
}

Coordinates Coordinates::toCameraCoordinates() {
}

Coordinates Coordinates::toGlobalCoordinates() {
}