#include "Rectangulo.h"
		
Rectangulo::Rectangulo(float ancho,float alto) {
	setAnchoAlto(ancho, alto);
}

float Rectangulo::getAncho() {
	return ancho;
}

float Rectangulo::getAlto() {
	return alto;
}

void Rectangulo::getAnchoAlto(float &ancho,float &alto) {
	ancho = this->ancho;
	alto = this->alto;
}

void Rectangulo::setAncho(float ancho) {
	this->ancho = ancho;
}

void Rectangulo::setAlto(float alto) {
	this->alto = alto;
}

void Rectangulo::setAnchoAlto(float ancho,float alto) {
	setAncho(ancho);
	setAlto(alto);
}

float Rectangulo::getArea() {
	return ancho * alto;
}

float Rectangulo::getPerimetro() {
	return 2.0 * (ancho + alto);
}

