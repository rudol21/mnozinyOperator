#include "Mnozina.h"



Mnozina::Mnozina()
{
}


Mnozina::~Mnozina()
{

}

void Mnozina::pridajCislo(long cislo)
{
	mnozina.push_back(cislo);
}

long Mnozina::dajCislo(int index)
{
	return mnozina[index];
}

Mnozina & Mnozina::operator|(const Mnozina  &zdroj)
{
	
	vector<long> pomocny = zdroj.mnozina;
	vector<long> mnozinaNaOdkladanie;
	//Mnozina *M = new Mnozina;
	//M = &zdroj;
	for (int i = 0; i < pomocny.size(); ++i)
	{
		for (int j = 0; j < mnozina.size(); j++)
		{
			if (pomocny[i] == mnozina[j])
			{
				break;
			}
			if (j == mnozina.size() - 1)
			{
				mnozinaNaOdkladanie.push_back(pomocny[i]);
			}
		}
	}
	for (int i = 0; i < mnozinaNaOdkladanie.size(); ++i)
	{
		mnozina.push_back(mnozinaNaOdkladanie[i]);
	}

	return *this;
}

int Mnozina::dajVelkost()
{
	return mnozina.size();
}
