#include <GLFW/glfw3.h>
#include "MathUtils.h"

class Cube {
public:
	float* vertex1;
	float* vertex2;
	float* vertex3;
	float* vertex4;
	float* vertex5;
	float* vertex6;
	float* vertex7;
	float* vertex8;

	float* center;
	
	Cube();
	Cube(float center[], float width);
	~Cube();
	void init(float center[], float width);
	void rotate(float alpha, float beta, float gamma);
	void render();

private:
};