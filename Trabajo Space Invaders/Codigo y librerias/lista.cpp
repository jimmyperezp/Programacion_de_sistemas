/*

#include "lista.h"
#include "stdlib.h"
#include "stdio.h"

lista::lista()
{
    head = NULL;
}
lista::~lista()
{
    nodo* p = head;
    nodo* q = NULL;
    while (p != NULL) {
        q = p->next;
        delete(p);
        p = q;

    }

}

int lista::ins_cabeza(Shape* x)
{

    nodo* tmp = NULL;
    tmp = new nodo;

    if (tmp == NULL) return 0;

    tmp->theShape = x;
    tmp->next = head;
    head = tmp;

    n++;
    return 1;
}


int lista::ins_cola(int)
{
    return 0;

}


int lista::borrar(int)
{
    return 0;
}


int lista::is_empty()
{
    if (head == NULL) return 1;
    else return 0;
}


int lista::num_elementos()
{
    return n;
}


nodo* lista::find(int)
{
    return NULL;
}

void lista::remove(Shape* x) {
    nodo* p = head;
    nodo* q = p->next;

    if (!p) {
        printf("Lista vacía\n");
    }

    if (p->theShape == x) {
        head = q;
        delete(p);
        n--;
        return;
    }

    while ((q = p->next) != NULL) {
        if (q->theShape == x) {
            p->next = q->next;
            delete(q);
            n--;
            return;
        }
        else {
            p = p->next;
        }
    }
    
}

void lista::move() {
    nodo* tmp;

    tmp = head;

    while (tmp != NULL)
    {
        tmp->theShape->move();
        tmp = tmp->next;
    }

}

void lista::draw() {
    nodo* tmp;

    tmp = head;

    while (tmp != NULL)
    {
        tmp->theShape->draw();
        tmp = tmp->next;
    }

}

nodo* lista::get_head() {
    return head;
}

int lista::get_n() {
    return n;
}
*/

#include "Lista.h"
#include "stdlib.h"
#include "stdio.h"

Lista::Lista()
{
    head = NULL;
}
Lista::~Lista()
{
    nodo* p = head;
    nodo* q = NULL;
    while (p != NULL) {
        q = p->next;
        delete(p);
        p = q;

    }

}

int Lista::ins_cabeza(Shape* x)
{

    nodo* p = NULL;
    p = new nodo;

    if (p == NULL) return 0;

    p->theShape = x;
    p->next = head;
    head = p;

    n++;
    return 1;
}

void Lista::remove(Shape* x) {
    nodo* p = head;
    nodo* q = p->next;

    if (!p) {
        printf("Lista vacía\n");
        return;
    }

    if (p->theShape == x) {
        head = q;
        delete(p);
        n--;
        return;
    }

    while ((q = p->next) != NULL) {
        if (q->theShape == x) {
            p->next = q->next;
            delete(q);
            n--;
            return;
        }
        else {
            p = p->next;
        }
    }
}

void Lista::move() {
    nodo* p;

    p = head;

    while (p != NULL)
    {
        p->theShape->move();
        p = p->next;
    }

}

void Lista::draw() {
    nodo* p;

    p = head;

    while (p != NULL)
    {
        p->theShape->draw();
        p = p->next;
    }

}

nodo* Lista::get_head() {
    return head;
}

int Lista::get_n() {
    return n;
}