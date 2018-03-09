#ifndef ESPINA_H
#define ESPINA_H
#include<stdlib.h>
#include<time.h>
#include"Bomba.h"


class Espina : public Bomba{
	private:
		int maximo;

	public:
		Espina(int);
		int getMaximo();
		void ExplocionEsp();

};

#endif
