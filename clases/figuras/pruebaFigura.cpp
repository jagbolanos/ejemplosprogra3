#include "Figura.h"
#include "Rectangulo.h"
#include "Circulo.h"
#include <iostream>

using namespace std;

int main() {
	Figura *f2;

	f2 = new Rectangulo(4, 5);

	
	cout<<"Area: "<<f2->getArea()<<" Perimetro: "<<f2->getPerimetro()<<endl;

	delete f2;

	return 0;
}
