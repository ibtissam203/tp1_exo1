// tp1exo1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Complexe.h"
using namespace std;
int main()
{
	Complexe c1(2, 3), c2(2, 4),c3, c4, c5 , c6;
	cout << "c1 : ";

	c1.afficher();
	cout << "c2 : ";

	c2.afficher();
	c3 = c1 + c2;
	cout << "c3 = c1 + c2 : ";
	c3.afficher();

	c4 = c1 - c2;
	cout << "c4 = c1 - c2 : ";
	c4.afficher();

	c5 = c1 + 2;
	cout << "c5 = c1 + 2 : ";
	c5.afficher();

	c6 = c1 * c2;
	cout << "c6 = c1 + 2 : ";
	c6.afficher();

	Complexe c7(2, 3);
	if (c1 == c7) {
		cout << "c1 est egal a c7" << endl;
	}
	else {
		cout << "c1 n'est pas egal a c7" << endl;
	}

	cout << "***************conjuge**************" << endl << endl;

	c1.conjuge().afficher();

	
}
