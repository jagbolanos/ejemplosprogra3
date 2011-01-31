#include <iostream>
#include "Nodo.h"

using namespace std;

int main() {

        //Tipo de n1,n2 y n3?
	cout << (*(*n1)).getValor() << " " << (*(*n2))->getValor() << " " << 
	(*(*(*n3)))->getValor() << endl;


	return 0;
}
