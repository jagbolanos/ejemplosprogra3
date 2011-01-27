#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "Figura.h"

class Rectangulo : public Figura {
	private:
		float ancho;
		float alto;
	public:
		Rectangulo(float,float);

		float getAncho();
		float getAlto();
		void getAnchoAlto(float&,float&);

		void setAncho(float);
		void setAlto(float);

		void setAnchoAlto(float,float);

		float getArea();
		float getPerimetro();

};

#endif
