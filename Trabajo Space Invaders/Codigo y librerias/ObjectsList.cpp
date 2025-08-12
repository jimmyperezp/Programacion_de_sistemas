#include "ObjectsList.h"
#include "commonstuff.h"


ObjectsList::ObjectsList() {
    int i;
    int j;
    n = 0;
    theShip = new Ship;
    L.ins_cabeza(theShip);
    for (i = -6; i < (NUMCOLS - 6); i++) {
        for (j = 0; j < NUMROWS; j++) {
            L.ins_cabeza(new Alien(j, (float)i + 0.5, (float)j + 4.0));
        }
    }

}

ObjectsList::~ObjectsList() {
    delete (theShip);
}

void ObjectsList::move() {
    L.move();

}

void ObjectsList::draw() {
    L.draw();

}

void ObjectsList::add(Shape* x) {
    L.ins_cabeza(x);
}

void ObjectsList::remove(Shape* x) {
    L.remove(x);
}

Ship* ObjectsList::getShip() {
    return theShip;
}

int ObjectsList::collisions(Bullet* b) {
    nodo* p;
    Alien* theAlien;
    OVNI* theOVNI;
    float d;
    int t;
    p = L.get_head();
    if (b) {
        while (p != NULL) {
            theOVNI = dynamic_cast<OVNI*>(p->theShape);
            theAlien = dynamic_cast<Alien*>(p->theShape);
            if (theAlien) {
                d = theAlien->operator+ (b);
                if (d < (b->getSize() + theAlien->getSize())) {
                    remove(b);
                    t = theAlien->getType();
                    remove(p->theShape);
                    return t;
                }
            }
            if (theOVNI) {
                d = theOVNI->operator+ (b);
                if (d < (b->getSize() + theOVNI->getSize())) {
                    remove(b);
                    remove(p->theShape);
                    t = rand() % 3;
                    if (t == 0) return 10;
                    if (t == 1) return 20;
                    else { return 30; }
                }
            }
            p = p->next;
        }
    }

    return 0;

}

