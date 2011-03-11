#include "mama.h"
#include <iostream>
using namespace std;
Mama::Mama(Cuenta *cuenta)
{
    depositado = 0;
    this->cuenta = cuenta;
    continuar = true;
}

void Mama::run() {
    int monto = 10000;
    while (continuar) {
        cuenta->depositar(monto);
        depositado += monto;
        cout << "Mama deposita: " << monto << endl;
        msleep(1000);
    }
}

int Mama::getDepositado() {
    return depositado;
}

void Mama::detenerse() {
    continuar = false;
}
