#include <iostream>

#include "Cuenta.h"
#include "Cliente.h"

int main() {
    //Marge y Homero comparten una cuenta con 1000 lempiras
    Cliente *c1 = new Cliente("Homero", "Simpson", 40, new Cuenta(1000));
    Cliente *c2 = new Cliente("Marge", "Simpson", 39, c1->getCuenta());

    //Marge deposita 500 lempiras    
    c2->getCuenta()->depositar(500);
    
    //Como ambos tiene AGREGADA la misma cuenta entonces ambos ven 1500 lempiras en la cuenta
    c1->imprimir();
    c2->imprimir();
    
    //Solo hay que borrar una cuenta porque solo fue creada una.
    delete c1->getCuenta();
    delete c1;
    delete c2;

    return 0;
}
