#ifndef ITEM_H
#define ITEM_H
#include<vector>
#include"Bomba.h"

class Item{
	private:
		int x;
		int y;

	public:
		Item();
		Item(int, int);
		int getX();
		void setX(int);
		int getY();
		void setY(int);

};

#endif
