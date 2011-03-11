#include "hijo.h"
#include <iostream>
#include <cstdlib>

using namespace std;
Hijo::Hijo(Cuenta *cuenta, int numero)
{
    retiros = 0;
    this->cuenta = cuenta;
    this->numero = numero;
    continuar = true;
}

void Hijo::run() {
    int monto;
    while (continuar) {
        monto = rand() % 1500 + 500;
        if (monto > cuenta->getSaldo())
            cout << "Hijo " << numero <<" Mamaaaaaaaaaa no hay pisto" << endl;
        else {
            msleep(50);
            if (!cuenta->retirar(monto)) {
                cout << "Hijo " << numero <<" Mamaaaaaaaaaa no pude retirar" << endl;
            } else {
                retiros += monto;
                cout << "Hijo " << numero <<" retira " << monto << endl;
            }
        }
        msleep(300);
    }
}

int Hijo::getRetiros() {
    return retiros;
}

void Hijo::detenerse() {
    continuar = false;
}
