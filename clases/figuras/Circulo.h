#ifndef CIRCULO_H
#define CIRCULO_H

#include "Figura.h"

class Circulo : public Figura {

	private:
		float radio;
	public:
		Circulo(float);

		float getRadio();
		void setRadio(float);

		float getArea();
		float getPerimetro();
};

#endif
