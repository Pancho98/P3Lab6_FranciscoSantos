#ifndef VISIBLE_H
#define VISIBLE_H
#include"Escenario.h"

class Visible : public Escenario{
	private:
		int vidas;
		int bomba;

	public:
		Visible();
		Visible(string, int, int);
		int getVidas();
		int getBomba();

};

#endif
