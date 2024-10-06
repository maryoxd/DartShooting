#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "Sipka.h"
using namespace std;

class Hrac {
private:
	string Meno;
	int Klasifikacia;
	vector<Sipka> sipky;
	int Sucet;
public:
	Hrac(string meno, int klasifikacia);
	string getMeno();
	int getKlasifikacia();
	void pridajSipku(Sipka sipka);
	Sipka dajSipku(int index);
	void scitajBody();
	void vypis();
	int getSucet();
	void vymazSipky();


};
