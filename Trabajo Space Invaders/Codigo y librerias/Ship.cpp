#include "commonstuff.h"
#include "Ship.h"
#include "Bullet.h"

Ship::Ship()
{
	pos[X] = 0;
	pos[Y] = -9;
	pos[Z] = 0;

	tspeed[X] = 0;
	tspeed[Y] = 0;
	tspeed[Z] = 0;

	color[R] = 0.9;
	color[G] = 0.9;
	color[B] = 0.9;
}

void Ship::strafe(float rx, float ry, float rz)
{
	pos[X] += rx;  pos[Y] += ry;  pos[Z] += rz;
}

Bullet* Ship::fire()
{
	Bullet* tmp;

	tmp = new Bullet(pos[X], pos[Y], 0, BULLETSPEED);

	return tmp;
}


void Ship::draw()
{

	predraw();

	glutSolidCone(0.25, 1, 10, 10);

	postdraw();

}


float Ship::getSize()
{
	return (0.25);
}

void Ship::resetpos()
{
	pos[X] = 0;
	pos[Y] = -9;
	pos[Z] = 0;

	tspeed[X] = 0;
	tspeed[Y] = 0;
	tspeed[Z] = 0;

	color[R] = 0.2;
	color[G] = 0.4;
	color[B] = 0.3;
}
