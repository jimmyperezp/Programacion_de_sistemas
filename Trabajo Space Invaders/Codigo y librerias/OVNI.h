
#include "Shape.h"

#ifndef __OVNI_H__
#define __OVNI_H__

class OVNI :public Shape {
private:
	float Rext;
	float Rint;


public:
	OVNI(float, float);
	void draw();
	void move();
	float getSize();
	float operator+(Shape*);

};

#endif
