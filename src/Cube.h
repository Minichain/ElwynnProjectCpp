#include <GLFW/glfw3.h>
#include "MathUtils.h"
#include "Coordinates.h"

class Cube {
public:
	Coordinates *vertex1, *vertex2, *vertex3, *vertex4, *vertex5, *vertex6, *vertex7, *vertex8;

	Coordinates *center;
	
	Cube();
	Cube(Coordinates *center_, float width_);
	~Cube();
	void init(Coordinates *center_, float width_);
	void rotate(float alpha, float beta, float gamma);
	void translate(float x_, float y_, float z_);
	void render();

private:
};