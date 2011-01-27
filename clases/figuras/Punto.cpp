#include "Punto.h"

Punto::Punto(int x, int y) {
	setXY(x,y);
}

int Punto::getX() {
	return x;
}

int Punto::getY() {
	return y;
}

void Punto::getXY(int &x, int &y) {
	x = this->x;
	y = this->y;
}

void Punto::setX(int x) {
	this->x = x;
}

void Punto::setY(int y) {
	this->y = y;
}

void Punto::setXY(int x,int y) {
	setX(x);
	setY(y);
}
