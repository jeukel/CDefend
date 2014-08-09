/*
 * player.cpp
 *
 *  Created on: Aug 8, 2014
 *      Author: zyoruk
 */



class Player {
private:
	//arma[] listaDeArmas;
	//arma armaActual;
	int vidas;
	int puntaje;
	int vidaActual;
	bool vuela;
	int reliquias;
	int ubicacionX;
	int ubicacionY;

	void dispara ();
	void mover ();
	void dondeEstoy();
	void volar();
	void morir ();
	void chocar();
};
