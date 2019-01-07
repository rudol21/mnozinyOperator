#include "Mnozina.h"
#include <iostream>
using namespace std;
int main()
{
	Mnozina M1;
	Mnozina M2;

	
	for (long i = 1; i < 6; ++i)
	{
		M1.pridajCislo(i);
	
		M2.pridajCislo(i*2);
	}
	M1.pridajCislo(13);
	M1.pridajCislo(7);
	cout << "Prva mnozina:" << endl;
	for (int i = 0; i < M1.dajVelkost(); ++i)
	{
		cout << M1.dajCislo(i) << endl;
	}
	cout << "Druha mnozina:" << endl;
	for (int i = 0; i < M2.dajVelkost(); ++i)
	{
		cout << M2.dajCislo(i) << endl;
	}

	M1 | M2;
	cout << "Zjednotenie prvej a druhej mnoziny:" << endl;
	for (int i = 0; i < M1.dajVelkost(); ++i)
	{
		cout << M1.dajCislo(i) << endl;
	}
	
	return 0;


}