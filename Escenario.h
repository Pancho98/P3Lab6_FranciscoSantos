#ifndef ESCENARIO_H
#define ESCENARIO_H
#include<string>
#include"Item.h"

using namespace std;

class Escenario{
	public:
		string nombre;
		Item*** tablero;

		Escenario();
		Escenario(string);
		Item*** getTablero();
};

#endif
