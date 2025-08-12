
#include "commonstuff.h"
#include "Shape.h"
#include "Alien.h"
#include "Ship.h"
#include "Bullet.h"
#include "Lista.h"
#include "Invaders.h"
#include "OVNI.h"
#ifndef __OL_H__
#define __OL_H__


class ObjectsList {
private:
	int n;
	Ship* theShip;

protected:
	Lista L;

public:
	ObjectsList();
	~ObjectsList();
	void move();
	void draw();
	void add(Shape*);
	void remove(Shape*);
	Ship* getShip();
	int collisions(Bullet*);

	friend class Invaders;
};

#endif
