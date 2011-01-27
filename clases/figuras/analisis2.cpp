#include <iostream>

#include "Rectangulo.h"

using namespace std;

int main() {
	Rectangulo *f1 = new Rectangulo(3,4);
	Rectangulo *f2 = new Rectangulo(4,5);
	Rectangulo *f3 = f1;
	Rectangulo f4(2,8);
	Rectangulo *f5 = &f4;

	cout << "F1:" << f1->getArea() << endl;
	cout << "F2:" << f2->getArea() << endl;
	cout << "F3:" << f3->getArea() << endl;
	cout << "F4:" << f4.getArea() << endl; //Victor . en lugar ->
	cout << "F5:" << f5->getArea() << endl;

	delete f1;
	delete f2;
	//delete f3; //Raul: Error
	//delete f4; //Stephany: Error	
	//delete f5; //Jorge y Roberto: Error

}
