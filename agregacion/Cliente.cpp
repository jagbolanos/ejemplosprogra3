#include <iostream>
#include "Cliente.h"

using namespace std;


Cliente::Cliente(string nombre, string apellido, short edad, Cuenta* cuenta) {
    this->nombre = nombre;
    this->apellido =  apellido;
    this->edad = edad;
    this->cuenta = cuenta;
}

Cuenta* Cliente::getCuenta() {
    return cuenta;
}

void Cliente::imprimir() {

    cout << "Nombre Completo: " << nombre << " " << apellido << endl;
    cout << "Edad: " << edad << " años" << endl;
    
    if (cuenta == 0) {
        cout << "Saldo en cuenta: No tiene cuenta bancaria" <<endl;
    } else {
        cout << "Saldo en cuenta: " << cuenta->getSaldo() <<endl;
    }
}
