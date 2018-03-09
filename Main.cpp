#include <iostream>
#include<string>
#include"Item.h"
#include"Jugador.h"
#include"Bomba.h"
#include"Normal.h"
#include"Espina.h"
#include"V.h"
#include"Escenario.h"
#include"Visible.h"
#include"Tren.h"
#include<ncurses.h>
using namespace std;
int main(){
	string nombreE;
	cout<<"Ingrese el Nombre de su Escenario: "<<endl;
	cin>>nombreE;
	string nombreJ;
	cout<<"Ingrese su Nombre: "<<endl;
	cin>>nombreJ;
	int escenario;
	cout<<"**********Seleccion del Escenario**********"<<endl;
	cout<<"1. Invisible"<<endl;
	cout<<"2. Tren"<<endl;
	cin>>escenario;
	if(escenario==1){

	}else if(escenario==2){

	}
	return 0;
}
