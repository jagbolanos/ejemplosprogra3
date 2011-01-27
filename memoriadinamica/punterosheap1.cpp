#include <iostream>
#include "Nodo.h"

using namespace std;

int main() {
	Nodo *n1;
	n1 = new Nodo(14, 0);
	Nodo *n2 = new Nodo(12, n1);

	cout << n2-> getSiguiente()->getValor() << endl;


        delete n1;
        delete n2;

	return 0;
}
