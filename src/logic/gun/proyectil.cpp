/*
 * proyectil.cpp
 *
 *  Created on: Aug 8, 2014
 *      Author: zyoruk
 */

class proyectil{
	//Variables
private :
	int currentX;
	int currentY;

//Methods
private:
	void crash(){};

public:
	void move(int pDestinyX, int pDestinyY){
		this->currentX = pDestinyX;
		this->currentY = pDestinyY;
	};
};


