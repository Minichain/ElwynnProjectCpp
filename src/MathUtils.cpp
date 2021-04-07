#include "MathUtils.h"

void MathUtils::rotatePoint(Coordinates *point, float alpha, float beta, float gamma) {
	MathUtils::rotatePoint(point, new Coordinates(0, 0, 0), alpha, beta, gamma);
}

void MathUtils::rotatePoint(Coordinates *point, Coordinates *centerOfRotation, float alpha, float beta, float gamma) {
	float rotatedPoint[] = {0, 0, 0};

	point->x -= centerOfRotation->x;
	point->y -= centerOfRotation->y;
	point->z -= centerOfRotation->z;
	
	rotatedPoint[0] = point->x * cos(alpha) * cos(beta)
		+ point->y * (cos(alpha) * sin(beta) * sin(gamma) - sin(alpha) * cos(gamma))
		+ point->z * (cos(alpha) * sin(beta) * cos(gamma) + sin(alpha) * sin(gamma));
	rotatedPoint[0] += centerOfRotation->x;

	rotatedPoint[1] = point->x * sin(alpha) * cos(beta)
		+ point->y * (sin(alpha) * sin(beta) * sin(gamma) + cos(alpha) * cos(gamma))
		+ point->z * (sin(alpha) * sin(beta) * cos(gamma) - cos(alpha) * sin(gamma));
	rotatedPoint[1]  += centerOfRotation->y;

	rotatedPoint[2] = -point->x * sin(beta)
		+ point->y * cos(beta) * sin(gamma)
		+ point->z * cos(beta) * cos(gamma);
	rotatedPoint[2] += centerOfRotation->z;

	point->x = rotatedPoint[0];
	point->y = rotatedPoint[1];
	point->z = rotatedPoint[2];
}