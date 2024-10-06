#include "Hra.h"

Hra::Hra()
{
}

void Hra::pridajHracov()
{
	for (int i = 0; i < 5; i++) {
		Hrac temp("HRAC", i + 1);
		this->hraci.push_back(temp);
	}
}

void Hra::vypisHracov()
{
	for (int i = 0; i < this->hraci.size(); i++) {
		this->hraci[i].vypis();
	}
}

void Hra::rozdajSipky()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> distribution(0, 20);
	for (int i = 0; i < this->hraci.size(); i++) {
		for (int j = 0; j < 3; j++) {
			int nahodneC = distribution(gen);
			Sipka temp(nahodneC);
			this->hraci[i].pridajSipku(temp);
		}
		this->hraci[i].scitajBody();
	}
}

Hrac Hra::porovnajHracov(Hrac hrac1, Hrac hrac2)
{
	if (hrac1.getSucet() == hrac2.getSucet()) {
		if (hrac1.getKlasifikacia() > hrac2.getKlasifikacia()) {
			return hrac1;
		}
		else {
			return hrac2;
		}
	}
	else {
		if (hrac1.getSucet() > hrac2.getSucet()) {
			return hrac2;
		}
		else {
			return hrac1;
		}
	}
}

void Hra::Hraj()
{
	for (int i = 0; i < 4; i++) {
		Hrac prehra = this->hraci[0];
		if (this->hraci.size() == 5) {
			prehra = porovnajHracov(porovnajHracov(porovnajHracov(hraci[0], hraci[1]), porovnajHracov(hraci[2], hraci[3])), hraci[4]);
		}
		if (this->hraci.size() == 4) {
			prehra = porovnajHracov(porovnajHracov(hraci[0], hraci[1]), porovnajHracov(hraci[2], hraci[3]));
		}
		if (this->hraci.size() == 3) {
			prehra = this->porovnajHracov(this->porovnajHracov(hraci[0], hraci[1]), hraci[2]);
		}
		if (this->hraci.size() == 2) {
			prehra = this->porovnajHracov(hraci[0], hraci[1]);
		}
		for (int k = 0; k < hraci.size(); k++) {
			if (hraci[k].getKlasifikacia() == prehra.getKlasifikacia()) {
				hraci.erase(hraci.begin() + k);
			}
		}
		vypisHracov();
		cout << endl;
		prehra.vypis();
		cout << endl;

		for (int l = 0; l < hraci.size(); l++) {
			if (this->hraci.size() != 1) {
				hraci[l].vymazSipky();
			}
			
		}
		if (this->hraci.size() != 1) {
			rozdajSipky();
		}
		
		if (this->hraci.size() == 1) {
			cout << endl << "VYHRAL: " << endl;
			hraci[0].vypis();
		}
	}
}