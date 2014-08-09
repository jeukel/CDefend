#include "SimpleList.h"

class parentObjectInterface{
private:
	int resistance;
	int healthpoints;
	int height;
	int width;
	SimpleList coords;
	int puntaje;

	void die();
public:
	int getScore();
	SimpleList getCoords();
	void setCoords(SimpleList pCoordsToSet);

};
