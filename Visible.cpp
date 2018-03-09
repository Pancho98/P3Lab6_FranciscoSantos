#include"Visible.h"
#include <iostream>
using namespace std;

Visible::Visible(){

}

Visible::Visible(string nombre, int vidas, int bomba): Escenario(nombre){
	this->vidas=vidas;
	this->bomba=bomba;
}

int Visible:: getVidas(){
	return vidas;
}

int Visible::getBomba(){
	return bomba;
}

