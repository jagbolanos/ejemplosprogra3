#include "mama.h"
#include "hijo.h"
#include "cuenta.h"
#include <iostream>
#include <cstdlib>

using namespace std;
const int HIJOS = 3;

int main() {
    srand(time(NULL));
    int montoInicial = 7000;
    Cuenta *cuenta = new Cuenta(montoInicial);
    Mama *mama = new Mama(cuenta);
    Hijo *hijos[HIJOS];
    for (int i=0;i<HIJOS;i++) {
        hijos[i] = new Hijo(cuenta, i);
    }

    mama->start();
    for (int i=0;i<HIJOS;i++) {
        hijos[i]->start();
    }


    sleep(10);

    mama->detenerse();
    for (int i=0;i<HIJOS;i++) {
        hijos[i]->detenerse();
    }

    mama->wait();
    int suma = 0;
    for (int i=0;i<HIJOS;i++) {
        hijos[i]->wait();
        suma+= hijos[i]->getRetiros();
    }

    cout << "Saldo Inicial:" << montoInicial << endl;
    cout << "Depositado:" << mama->getDepositado() << endl;
    cout << "Retirado:" << suma << endl;
    cout << "Saldo Final:" << cuenta->getSaldo() << endl;
    cout << "Balance:" << montoInicial + mama->getDepositado() - suma << endl;

    delete mama;
    for (int i=0;i<HIJOS;i++) {
        delete hijos[i];
    }

    return 0;
}
