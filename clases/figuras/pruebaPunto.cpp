#include <iostream>
#include "Punto.h"


using namespace std;

int main() {
	Punto* p1;
	cout << p1 << endl;

	p1 = new Punto(8, 5);
	cout << p1 << endl;

	cout<<"X: "<< p1->getX() << " Y: "<< p1->getY()<<endl;

	delete p1;
	p1 = new Punto(3, 3);
	cout << p1 << endl;
	cout<<"X: "<< p1->getX() << " Y: "<< p1->getY()<<endl;

	delete p1;
	p1 = 0;
	cout << p1 << endl;
	cout<<"X: "<< p1->getX() << " Y: "<< p1->getY()<<endl;

	return 0;
}
