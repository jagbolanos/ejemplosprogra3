#include "Circulo.h"

Circulo::Circulo(float radio) {
	setRadio(radio);
}

float Circulo::getRadio() {
	return radio;
}

void Circulo::setRadio(float radio) {
	this->radio = radio;
}

float Circulo::getArea() {
	return radio * radio * 3.1416;
}

float Circulo::getPerimetro() {
	return 2.0 * 3.1416 * radio;
}

