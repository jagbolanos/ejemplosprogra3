#include <iostream>

#include "Cuenta.h"
#include "Cliente.h"

int main() {
    //Marge y Homero tienen una cuenta INDEPENDIENDE cada una con 1000 lempiras
    Cliente *c1 = new Cliente("Homero", "Simpson", 40, 1000);
    Cliente *c2 = new Cliente("Marge", "Simpson", 39, 1000);

    //Marge deposita 500 lempiras    
    c2->getCuenta()->depositar(500);
    
    //Como las cuentas son independientes homero tiene 1000 lempiras y marge 1500
    c1->imprimir();
    c2->imprimir();
    
    //Las cuentas son parte de la instancia de Cliente por lo que no hay que borrarlas. Existen dentro de cliente, se eliminan con el delete de cliente

    delete c1;
    delete c2;

    return 0;
}
