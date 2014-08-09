/*
 * weapon.h
 *
 *  Created on: Aug 9, 2014
 *      Author: zyoruk
 */

#ifndef WEAPON_H_
#define WEAPON_H_

#include "proyectil.cpp"
#include "SimpleList.h"
class weapon {
private:
	int attackDamage;
	int attackSpeed;
	int width;
	SimpleList currentShipLocation;
	void updateValues();
	SimpleList getShipLocation;
public :
	weapon();
	~weapon();
	proyectil shoot(SimpleList pWhereToMove , SimpleList pCurrentShipLocation);

};


#endif /* WEAPON_H_ */
