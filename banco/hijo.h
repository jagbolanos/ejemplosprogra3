#ifndef HIJO_H
#define HIJO_H

#include <QThread>
#include "cuenta.h"
class Hijo : public QThread
{
    int numero;
    int retiros;
    Cuenta *cuenta;
    bool continuar;
public:
    Hijo(Cuenta *,int);
    void run();
    int getRetiros();
    void detenerse();
};

#endif // HIJO_H
