#ifndef MATH_UTILS
#define MATH_UTILS

#include <stdlib.h>
#include <math.h>

class MathUtils {
	public:
		static void rotatePoint(float* point, float alpha, float beta, float gamma);
		static float* getPointRotated(float point[3], float alpha, float beta, float gamma);
		static float* getPointRotated(float point[3], float origin[3], float alpha, float beta, float gamma);

	private:
};

#endif