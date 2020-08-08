#include <GLFW/glfw3.h>
#include "MathUtils.h"

class Cube {
public:
	float *vertex1, *vertex2, *vertex3, *vertex4, *vertex5, *vertex6, *vertex7, *vertex8;

	float* center;
	
	Cube();
	Cube(float center[], float width);
	~Cube();
	void init(float center[], float width);
	void rotate(float alpha, float beta, float gamma);
	void render();

private:
};