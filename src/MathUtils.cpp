#include "MathUtils.h"

void MathUtils::rotatePoint(float* point, float alpha, float beta, float gamma) {
	float* vertexPointer = MathUtils::getPointRotated(point, alpha, beta, gamma);

	point[0] = vertexPointer[0];
	point[1] = vertexPointer[1];
	point[2] = vertexPointer[2];

	delete[] vertexPointer;
}

float* MathUtils::getPointRotated(float point[3], float alpha, float beta, float gamma) {
	float* rotatedPoint = new float[3];

	rotatedPoint[0] = point[0] * cos(alpha) * cos(beta) 
		+ point[1] * (cos(alpha) * sin(beta) * sin(gamma) - sin(alpha) * cos(gamma))
		+ point[2] * (cos(alpha) * sin(beta) * cos(gamma) + sin(alpha) * sin(gamma));

	rotatedPoint[1] = point[0] * sin(alpha) * cos(beta)
		+ point[1] * (sin(alpha) * sin(beta) * sin(gamma) + cos(alpha) * cos(gamma))
		+ point[2] * (sin(alpha) * sin(beta) * cos(gamma) - cos(alpha) * sin(gamma));	

	rotatedPoint[2] = - point[0] * sin(beta)
		+ point[1] * cos(beta) * sin(gamma)
		+ point[2] * cos(beta) * cos(gamma);

	return rotatedPoint;
}

float* MathUtils::getPointRotated(float point[3], float origin[3], float alpha, float beta, float gamma) {
	float* rotatedPoint = (float*) malloc(3);

	//TODO implement rotation

	return rotatedPoint;
}