#include <iostream>
#include "Punto.h"

using namespace std;

int main() {
	Punto *p1 = new Punto(3, 5);
	Punto *p2 = new Punto(11, 4);
	Punto *tmp;

	tmp = p2;
	p2 = p1;
	p1 = tmp;

	p2->setXY(8,9);

	cout<<"X: "<< p1->getX() << " Y: "<< p1->getY()<<endl;
	cout<<"X: "<< p2->getX() << " Y: "<< p2->getY()<<endl;

	delete p1;
	delete p2;
	delete tmp;

}
