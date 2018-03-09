#ifndef TREN_H
#define TREN_H
#include"Escenario.h"
#include<vector>

using namespace std;

class Tren : public Escenario{
	public:
		int vagonx;
		int vagony;
		vector<int*> posiciones;


		Tren(int, int);
		int getVagonx();
		int getVagony();
		void Posiciones();


};

#endif
