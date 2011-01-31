#include <iostream>
#include "Nodo.h"

using namespace std;

int main() {
	Nodo *n1 = new Nodo(11, 0);
	Nodo *n2 = new Nodo(24, n1);
	Nodo **n3 = &n2;

	(*n3)->setValor(90);
	n1->setValor(34);
	n1->setSiguiente(n2);
	(*n3)->getSiguiente()->setValor(75);

	cout << n1->getValor() << " " << n2->getValor() << " " << (*n3)->getValor() << endl;
        //deletes?

	return 0;
}
