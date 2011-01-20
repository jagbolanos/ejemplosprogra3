#include "Fecha.h"
#include <iostream>

Fecha::Fecha(short dia, short mes, short anio) {
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
}

void Fecha::imprimir() {
    std::cout<<dia<<"-"<<mes<<"-"<<anio<<std::endl;
}
