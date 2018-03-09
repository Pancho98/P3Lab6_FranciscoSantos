#include"Normal.h"
#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

Normal::Normal(){

}

Normal::Normal(int alcance){
	this->alcance=alcance;
}

int Normal::getAlcance(){
	srand(time(NULL));
	alcance=1+(rand()%3);
	return alcance;
}

void Normal::ExplocionNorm(){

}
