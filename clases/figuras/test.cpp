#include <iostream>

#include "Cuadrado.h"

using namespace std;

int main() {

    //Figura f1;
    //Figura f2 = Figura();
    //Figura f3 = Rectangulo(3,5);
    //Figura f4 = Cuadrado(4);
    //Figura *f5 = new Figura();
    Figura *f6 = new Rectangulo(7,3);
    Figura *f7 = new Cuadrado(5);

    cout << "Figuras: " << endl;
    //cout << f1.getArea() << " " << f1.getPerimetro() << endl;
    //cout << f2.getArea() << " " << f2.getPerimetro() << endl;
    //cout << f3.getArea() << " " << f3.getPerimetro() << endl;
    //cout << f4.getArea() << " " << f4.getPerimetro() << endl;
    //cout << f5->getArea() << " " << f5->getPerimetro() << endl;
    cout << f6->getArea() << " " << f6->getPerimetro() << endl;
    cout << f7->getArea() << " " << f7->getPerimetro() << endl;
    
    
    Rectangulo r1(4,6);
    Rectangulo r2 = Rectangulo(3, 5);
    Rectangulo r3 = Cuadrado(4);
    Rectangulo *r4 = new Rectangulo(7,3);
    Rectangulo *r5 = new Cuadrado(5);

    cout << "Rectangulos: " << endl;
    cout << r1.getArea() << " " << r1.getPerimetro() << endl;
    cout << r2.getArea() << " " << r2.getPerimetro() << endl;
    cout << r3.getArea() << " " << r3.getPerimetro() << endl;
    cout << r4->getArea() << " " << r4->getPerimetro() << endl;
    cout << r5->getArea() << " " << r5->getPerimetro() << endl;


    Cuadrado c1(7);
    Cuadrado c2 = Cuadrado(4);
    Cuadrado *c3 = new Cuadrado(5);

    cout << "Cuadrados: " << endl;
    cout << c1.getArea() << " " << c1.getPerimetro() << endl;
    cout << c2.getArea() << " " << c2.getPerimetro() << endl;
    cout << c3->getArea() << " " << c3->getPerimetro() << endl;
    
    //delete f5;
    delete f6;
    delete f7;
    delete r4;
    delete r5;
    delete c3;
    return 0;
}
