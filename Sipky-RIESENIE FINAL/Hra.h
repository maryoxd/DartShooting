#pragma once
#include <string>
#include <random>
#include <string>
#include <algorithm>
#include <random>
#include "Hrac.h"
#include "Sipka.h"
using namespace std;

class Hra {
private:
	vector<Hrac> hraci;
public:
	Hra();
	void pridajHracov();
	void vypisHracov();
	void rozdajSipky();
	Hrac porovnajHracov(Hrac hrac1, Hrac hrac2);
	void Hraj();
};