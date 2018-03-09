#include"Jugador.h"
#include <iostream>
using namespace std;

Jugador::Jugador(){

}

Jugador::Jugador(string nombre, int control){
	this->nombre=nombre;
	this->control=control;
}

string Jugador::getNombre(){
	return this->nombre=nombre;
}

bool Jugador::getEstado(){
	return this->estado;
}

int Jugador::getControl(){
	return this->control;
}
