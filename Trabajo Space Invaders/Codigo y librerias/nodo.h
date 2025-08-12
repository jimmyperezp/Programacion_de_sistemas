
#include "Shape.h"

#ifndef __NODE_H__
#define __NODE_H__

typedef struct snodo {
    struct snodo* next;
    Shape* theShape;
} nodo;



typedef nodo* pnodo;

#endif



