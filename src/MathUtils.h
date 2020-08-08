#ifndef MATH_UTILS
#define MATH_UTILS

#include <stdlib.h>
#include <math.h>
#include "Coordinates.h"

class MathUtils {
public:
	static void rotatePoint(Coordinates* point, float alpha, float beta, float gamma);
	static void rotatePoint(Coordinates* point, Coordinates* centerOfRotation, float alpha, float beta, float gamma);
	static float* getPointRotated(float point[3], float centerOfRotation[3], float alpha, float beta, float gamma);

private:
};

#endif