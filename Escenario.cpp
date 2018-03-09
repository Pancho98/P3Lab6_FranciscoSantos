#include"Escenario.h"
#include <iostream>
#include<string>
using namespace std;

Escenario::Escenario(){

}

Escenario:: Escenario(string nombre){
	this->nombre=nombre;


}

Item*** Escenario:: getTablero(){
	tablero = new Item**[13];
	for(int i=0;i<13;i++){
		tablero[i]=new Item*[11];
	}

	return tablero;
}
