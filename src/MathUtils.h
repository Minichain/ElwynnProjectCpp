#ifndef MATH_UTILS
#define MATH_UTILS

#include <stdlib.h>
#include <math.h>

class MathUtils {
public:
	static void rotatePoint(float* point, float alpha, float beta, float gamma);
	static void rotatePoint(float* point, float* centerOfRotation, float alpha, float beta, float gamma);
	static float* getPointRotated(float point[3], float centerOfRotation[3], float alpha, float beta, float gamma);

private:
};

#endif