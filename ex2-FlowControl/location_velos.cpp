/*
Student name: Beier (Benjamin) Liu
Date: 2/4/2018
Exercise 2:

Remark:
*/


#include <iostream>
using namespace std;

/*===================================================================================================
Main program:
Exercise 2 Part 1
===================================================================================================*/

int main()
{
	/*
	Returns -- 0
	*/

	// User input phrase
	cout << "Donnez l'heure de début de la location (un entier) : ";
	int debut;
	cin >> debut;

	cout << "Donnez l'heure de fin de la location (un entier) : ";
	int fin;
	cin >> fin;

	/*****************************************************
	 * Compléter le code à partir d'ici
	 *****************************************************/
	while (True) {
		if debut<=0 or debut>=24 or fin<=0 or fin>=24 {cout << "Les heures doivent être comprises entre 0 et 24 !" << endl;}
		else if debut==fin {cout << "Bizarre, vous n'avez pas loué votre vélo bien longtemps !" << endl;}
		else if debut>fin {cout << "Bizarre, le début de la location est après la fin ..." << endl;}
		else {break}
		cout << "Donnez l'heure de début de la location (un entier) : ";
		cin >> debut;
		cout << "Donnez l'heure de fin de la location (un entier) : ";
		cin >> fin;
	}

	cout << "Vous avez loué votre vélo pendant" << endl;

	// Calculate hours
	int hours1(0)
	int hours2(0)

	if debut<7 {
		int rate(1);
		hours1+=7-debut;
	}
	if fin>17 {
		int rate(2);
		hours1+=fin-17;
	}
	hours2=fin-debut-hours1

	// Print out hours
	if hours1!=0 {
		int rate(1);
		cout <<hours1<< " heure(s) au tarif horaire de "<<rate<< " franc(s)" << endl;
	}
	if hours2!=0{
		int rate(2);
		cout <<hours1<< " heure(s) au tarif horaire de "<<rate<< " franc(s)" << endl;
	}

	// Calculate total amount
	int ttlAmount(0)
	ttlAmount+=hours1*1;
	ttlAmount+=hours2*2;
	cout << "Le montant total à payer est de "<<ttlAmount<< " franc(s)." << endl;

	/*******************************************
	 * Ne rien modifier après cette ligne.
	 *******************************************/

	return 0;
}
