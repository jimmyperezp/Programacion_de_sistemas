/*
#include "nodo.h"
#ifndef _LISTA_H_
#define _LISTA_H_

class lista {
private:
	int n;
	nodo* head;
public:
	lista();
	~lista();
	int ins_cabeza(Shape*);
	int ins_cola(int);
	int borrar(int);
	int is_empty();
	int num_elementos();
	nodo* find(int);
	void remove(Shape*);
	void move();
	void draw();
	nodo* get_head();
	int get_n();

};

#endif
*/


#include "nodo.h"
#ifndef _LISTA_H_
#define _LISTA_H_

class Lista {
private:
	int n;
	nodo* head;
public:
	Lista();
	~Lista();
	int ins_cabeza(Shape*);
	void remove(Shape*);
	void move();
	void draw();
	nodo* get_head();
	int get_n();

};

#endif

