#ifndef JUGADOR_H
#define JUGADOR_H
#include<string>
#include"Item.h"

using namespace std;

class Jugador{
	public:
		string nombre;
		bool estado=true;
		int control;

		Jugador();
		Jugador(string, int);
		string getNombre();
		bool getEstado();
		int getControl();
};

#endif
