#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;
class Mnozina
{


	vector <long> mnozina;
public:
	Mnozina();
	~Mnozina();
	void pridajCislo(long cislo);
	long dajCislo(int index);
	//friend Mnozina operator |(Mnozina op1, Mnozina op2);
	Mnozina & operator | (const Mnozina &zdroj);
	int dajVelkost();
	
};

