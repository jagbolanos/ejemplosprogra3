#include "Cuenta.h"

Cuenta::Cuenta(double saldo) {
    this->saldo = saldo;
}

bool Cuenta::depositar(double monto) {
    if (monto <= 0)
        return false;
    
    this->saldo += monto;
    
    return true;
}

bool Cuenta::retirar(double monto) {
    if (monto <= 0)
        return false;
        
    if (saldo - monto < 0)
        return false;

    this->saldo -= monto;
    
    return true;
}

double Cuenta::getSaldo() {
    return this->saldo;
}
