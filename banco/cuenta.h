#ifndef CUENTA_H
#define CUENTA_H
#include <QMutex>
#include <QThread>

class Cuenta : public QThread
{
    int saldo;
    QMutex mutex;
public:
    Cuenta(int);
    bool retirar(int);
    void depositar(int);
    int getSaldo();
};

#endif // CUENTA_H
