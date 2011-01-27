#include <iostream>
#include "Figura.h"
#include "Rectangulo.h"
#include "Circulo.h"

int main() {
        Figura *f1 = new Figura(); // Correcto
        Figura *f2 = new Rectangulo(4,5); // Correcto
        Figura *f3 = new Circulo(6); // Correcto

//        Rectangulo *r1 = new Figura(); // Incorrecto
        Rectangulo *r2 = new Rectangulo(4,5); // Correcto
//        Rectangulo *r3 = new Circulo(6); // Incorrecto

//        Circulo *c1 = new Figura(); // Incorrecto
//        Circulo *c2 = new Rectangulo(4,5); // Incorrecto
        Circulo *c3 = new Circulo(6); // Correcto
	return 0;
}
