#ifndef FECHA_H
#define FECHA_H

class Fecha {
    private:
        short dia;
        short mes;
        short anio;
    public:
        Fecha(short,short,short);
        void imprimir();
};
#endif
