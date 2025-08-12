

#include "commonstuff.h"
#include "Alien.h"
#include "Lista.h"

#ifndef __INV_H__
#define __INV_H__


#include "ObjectsList.h"

class Invaders {
private:
	int size;
	ObjectsList* invaders;
	int direction;

public:
	Invaders(ObjectsList*);
	void draw();
	float getSize();
	void move();
	float get_lowest();
	int win();

private:
	float get_leftmost();
	float get_rightmost();
	void changedir();


};

#endif
