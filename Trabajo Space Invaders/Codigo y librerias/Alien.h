
#include "commonstuff.h"
#include "Shape.h"

#ifndef __ALIEN_H__
#define __ALIEN_H__

class Alien :public Shape {
private:
	float size;
	int type;
	float ax;
	float ay;
	float step;

public:
	Alien(int, float, float);
	void draw();
	void move();
	void changedir();

	int getType();
	float getSize();
	float operator+(Shape*);
};

#endif
