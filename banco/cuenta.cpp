#include "cuenta.h"
#include <QThread>

Cuenta::Cuenta(int saldo)
{
    this->saldo = saldo;
}

bool Cuenta::retirar(int monto) {
    mutex.lock();
    int saldoActual = saldo;
    if (saldoActual - monto < 0) {
        mutex.unlock();
        return false;
    }
    msleep(100);
    saldo = saldoActual - monto;
    mutex.unlock();
    return true;

}

void Cuenta::depositar(int monto) {
    mutex.lock();
    saldo += monto;
    mutex.unlock();
}

int Cuenta::getSaldo() {
    return saldo;
}
