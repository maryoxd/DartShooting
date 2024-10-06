#include "Hrac.h"

Hrac::Hrac(string meno, int klasifikacia)
{
	this->Meno = meno;
	this->Klasifikacia = klasifikacia;
}

string Hrac::getMeno()
{
	return this->Meno;
}

int Hrac::getKlasifikacia()
{
	return this->Klasifikacia;
}

void Hrac::pridajSipku(Sipka sipka)
{
	this->sipky.push_back(sipka);
}

Sipka Hrac::dajSipku(int index)
{
	return this->sipky[index];
}

void Hrac::scitajBody()
{
	for (int i = 0; i < 3; i++) {
		this->Sucet += this->sipky[i].getHodnota();
	}
}

void Hrac::vypis()
{
	cout << this->Meno << " [" << this->Klasifikacia << "]";
	for (int i = 0; i < 3; i++) {
		cout << " " << this->sipky[i].getHodnota();
	}
	cout << " : " << this->Sucet << endl;
}

int Hrac::getSucet()
{
	return this->Sucet;
}

void Hrac::vymazSipky()
{
	this->sipky.erase(this->sipky.begin(), this->sipky.end());
}
