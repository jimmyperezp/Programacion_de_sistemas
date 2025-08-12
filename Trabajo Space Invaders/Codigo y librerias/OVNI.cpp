#include "commonstuff.h"
#include "OVNI.h"
#include "ObjectsList.h"


OVNI::OVNI(float px, float py)
{
	Rext = 0.8;
	Rint = 0.15;

	pos[X] = px;
	pos[Y] = py;
	pos[Z] = 0;

	tspeed[X] = OVNI_SPEED;
	tspeed[Y] = 0;
	tspeed[Z] = 0;

	color[R] = 255;
	color[G] = 200;
	color[B] = 0;

}


void OVNI::draw()
{
	predraw();
	glutSolidTorus(Rint, Rext, 9, 8);
	postdraw();
}


float OVNI::getSize()
{
	return (Rext);
}


void OVNI::move()
{
	pos[X] += tspeed[X];
}


float OVNI::operator+(Shape* s)
{
	float p[3];
	s->getPos(p);
	return mydistance(pos[X], pos[Y], p[X], p[Y]);

}
