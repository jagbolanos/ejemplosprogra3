#include <iostream>
#include "Cuadrado.h"

using namespace std;

int main() {

    //Cuadrado c(5);
    Figura *c = new Cuadrado (5);
    Figura *c2 = new Figura();
    
    cout << "Area: " << c->getArea() << endl;
    
    delete c;
    return 0;
}
