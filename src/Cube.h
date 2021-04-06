#include <GLFW/glfw3.h>
#include "MathUtils.h"
#include "Coordinates.h"

class Cube {
public:
	static const int NUM_OF_VERTICES = 8;
	Coordinates* vertices;
	Coordinates* center;
	
	Cube();
	Cube(Coordinates *center_, float width_);
	~Cube();
	void init(Coordinates *center_, float width_);
	void rotate(float alpha, float beta, float gamma);
	void translate(float x_, float y_, float z_);
	void render();

private:
};