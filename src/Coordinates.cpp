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
	//TODO implement this function
	return Coordinates(0, 0, 0);
}

Coordinates Coordinates::toGlobalCoordinates() {
	//TODO implement this function
	return Coordinates(0, 0, 0);
}