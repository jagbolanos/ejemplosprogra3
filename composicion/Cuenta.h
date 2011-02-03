#ifndef CUENTA_H
#define CUENTA_H

class Cuenta {

    double saldo;
    
    public:
        Cuenta(double);
        bool depositar(double);
        bool retirar(double);
        
        double getSaldo();
};

#endif
