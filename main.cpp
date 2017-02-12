// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <climits>
#include <iostream>
#include <vector>

using namespace std;

int creerCategories(int categories, vector<int> *vect);

int main()
{
	int categorie(0);
	int nbValeur(0);
	vector <int> vect;
	int val;

	// TODO - À enlever -------------------
	categorie = 4;
	nbValeur = 15;
	vect.push_back(1);
	vect.push_back(4);
	vect.push_back(5);
	vect.push_back(4);
	vect.push_back(8);
	vect.push_back(12);
	vect.push_back(2);
	vect.push_back(3);
	vect.push_back(2);
	vect.push_back(4);
	vect.push_back(3);
	vect.push_back(10);
	vect.push_back(9);
	vect.push_back(11);
	vect.push_back(2);

	cout << "Taille des catégories: " << creerCategories(categorie, &vect) << endl;

	// TODO - Enlever
	cin >> val;

	return 0;
	// ------------------------------------

	cout << "Entrez le nombre de categorie dans l'histogramme : " << endl;
	cin >> categorie;
	cout << "Entrez le nombre de valeurs a classer : " << endl;
	cin >> nbValeur;
	for (int x = 0; x < nbValeur; x++)
	{
		cout << "Rentrez la valeur " << x + 1 << ": ";
		cin >> val; vect.push_back(val);
	}

	int nbCategorie = creerCategories(categorie, &vect);

	return 0;
}

int creerCategories(int categories, vector<int> *vect) {
	int maxValue = INT_MIN;
	int minValue = INT_MAX;

	for (int i = 0; i<vect->size(); i++) {
		cout << vect->at(i) << endl;

		if (vect->at(i) > maxValue) {
			maxValue = vect->at(i);
		}
		if (vect->at(i) < minValue) {
			minValue = vect->at(i);
		}
	}

	cout << maxValue << endl;
	cout << minValue << endl;

	int diff = (maxValue - minValue) / categories;
	cout << diff << endl;

	return diff;
}

