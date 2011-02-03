#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include "Cuenta.h"
using namespace std;

class Cliente {
    string nombre;
    string apellido;
    short edad;
    Cuenta cuenta;
    
    public:
        Cliente(string, string, short, double);
        
        Cuenta *getCuenta();
        
        void imprimir();
    
};

#endif
