#ifndef COORDINATES
#define COORDINATES

class Coordinates {
public:
	float x, y, z;

	Coordinates(float x_, float y_, float z_);
	~Coordinates();
	void translate(float x_, float y_, float z_);
	Coordinates toCameraCoordinates();
	Coordinates toGlobalCoordinates();

private:

};

#endif