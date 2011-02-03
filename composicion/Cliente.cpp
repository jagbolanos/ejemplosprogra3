#include <iostream>
#include "Cliente.h"

using namespace std;

//En el constructor se manda a llamar al constructor de cuenta, pasandole el saldo como parametro
Cliente::Cliente(string nombre, string apellido, short edad, double saldo) : cuenta(saldo)
{
    this->nombre = nombre;
    this->apellido =  apellido;
    this->edad = edad;
}

//La cuenta existe como instancia dentro de la instancia de cliente
//Devolvemos la direccion de la cuenta
Cuenta* Cliente::getCuenta() {
    return &cuenta;
}

void Cliente::imprimir() {

    cout << "Nombre Completo: " << nombre << " " << apellido << endl;
    cout << "Edad: " << edad << " años" << endl;
    //Siempre tiene una cuenta
    cout << "Saldo en cuenta: " << cuenta.getSaldo() <<endl;
}
