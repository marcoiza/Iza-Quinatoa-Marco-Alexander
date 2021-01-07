#ifndef LISTA_H
#define LISTA_H

#include "Nodo.h"

class Lista{
	private:
		Nodo *cabeza;
		Nodo *cola;
	public:
		Lista();
		bool vacio(void);
		void imprimir();
		int tamano();
		void insertarInicio(int);
		void insertarFinal(int);
		void insertarEntre(int,int);
		//void insertarEntre2(string,string,string,int);
};

#endif
