#ifndef MAMA_H
#define MAMA_H

#include <QThread>
#include "cuenta.h"

class Mama : public QThread
{
    int depositado;
    Cuenta *cuenta;
    bool continuar;
public:
    Mama(Cuenta*);
    void run();
    int getDepositado();
    void detenerse();
};

#endif // MAMA_H
