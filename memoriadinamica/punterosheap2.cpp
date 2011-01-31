#include <iostream>
#include "Nodo.h"

using namespace std;

int main() {
	Nodo *n1 = new Nodo(11, 0);
	Nodo *n2 = new Nodo(24, n1);
	Nodo *n3 = new Nodo(37, n2);
	n1->setSiguiente(n3);

	cout << n2->getValor() << endl;
	cout << n2->getSiguiente()->getValor() << endl;
	cout << n2->getSiguiente()->getSiguiente()->getValor() << endl;
	cout << n2->getSiguiente()->getSiguiente()->getSiguiente()->getValor() << endl;

        delete n1;
        delete n2;
        delete n3;

	return 0;
}
