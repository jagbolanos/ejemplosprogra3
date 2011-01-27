#ifndef NODO_H
#define NODO_H

class Nodo {
	int valor;
	Nodo *siguiente;
public:
	int getValor();
	Nodo *getSiguiente();
	void setValor(int);
	void setSiguiente(Nodo*);
	Nodo(int,Nodo*);
};

#endif
