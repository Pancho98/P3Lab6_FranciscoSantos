#include"Bomba.h"
#include <iostream>
using namespace std;

Bomba::Bomba(){

}

Bomba::Bomba(int explota){
	this->explota=explota;
}

int Bomba::getExplota(){
	return explota;
}


