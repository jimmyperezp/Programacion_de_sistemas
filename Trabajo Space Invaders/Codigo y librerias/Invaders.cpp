#include "commonstuff.h"
#include "Invaders.h"


Invaders::Invaders(ObjectsList* theList)
{
    invaders = theList;
    direction = 1;
}


float Invaders::getSize()
{
    return 0;
}

void Invaders::move()
{

    if ((get_leftmost() <= -SIZEX2 + 1) && (direction == -1))
        changedir();



    if ((get_rightmost() >= SIZEX2 - 1) && (direction == 1))
        changedir();

}


void Invaders::changedir()
{
    nodo* p;
    p = (invaders->L).get_head();

    while (p != NULL)
    {
        p->theShape->changedir();
        p = p->next;
    }

    direction = -direction;
}


float Invaders::get_leftmost()
{
    float ll = 999;
    float pos[3];
    nodo* p;
    Alien* theAlien;

    p = (invaders->L).get_head();

    while (p != NULL)
    {
        theAlien = dynamic_cast<Alien*>(p->theShape);
        if (theAlien)
        {
            theAlien->getPos(pos);
            if (pos[X] < ll) ll = pos[X];
        }
        p = p->next;
    }
    return ll;
}


float Invaders::get_rightmost()
{
    float ll = -999;
    float pos[3];
    nodo* p;
    Alien* theAlien;

    p = (invaders->L).get_head();


    while (p != NULL)
    {
        theAlien = dynamic_cast<Alien*>(p->theShape);
        if (theAlien)
        {
            theAlien->getPos(pos);
            if (pos[X] > ll) ll = pos[X];
        }
        p = p->next;
    }
    return ll;
}


float Invaders::get_lowest()
{
    float ll = 999;
    float pos[3];
    nodo* p;
    Alien* theAlien;

    p = (invaders->L).get_head();

    while (p != NULL)
    {
        theAlien = dynamic_cast<Alien*>(p->theShape);
        if (theAlien)
        {
            theAlien->getPos(pos);
            if (pos[Y] < ll) ll = pos[Y];
        }
        p = p->next;
    }
    return ll;
}

int Invaders::win() {
    int n = invaders->L.get_n();
    return n;
}