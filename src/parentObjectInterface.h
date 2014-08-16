#include "SimpleList.h"

class parentObjectInterface{
protected:
	int resistance;
	int healthpoints;
	int height;
	int width;
	SimpleList coords;
	int puntaje;
private:
	void die();
public:
	int getScore();
	SimpleList getCoords();
	void setCoords(SimpleList pCoordsToSet);

};
