#include "Nodo.h"

int Nodo::getValor() {
	return valor;
}

Nodo *Nodo::getSiguiente(){
	return siguiente;
}

void Nodo::setValor(int valor){
	this->valor = valor;
}

void Nodo::setSiguiente(Nodo* siguiente){
	this->siguiente = siguiente;
}

Nodo::Nodo(int valor,Nodo* siguiente){
	setValor(valor);
	setSiguiente(siguiente);
}

