#include<iostream>
#include<string>
using namespace std;

int main() {
	int year, month, day;
	cout << "   Congruence de ZELLLER " << endl;
	cout << "===========================" << endl;

	cout << "year =  ";
	cin >> year;
	cout << "Month = ";
	cin >> month;
	cout << "Day =  ";
	cin >> day;

	// Ajustement : janvier et février sont considérés comme mois 13 et 14 de l'année précédente
	if (month < 3) {
		month += 12;
		year--;
	}

	int q = day;
	int m = month;
	int k = year % 100;
	int j = year / 100;

	// Application de la formule de Zeller
	int h = (q + (13 * (m + 1)) / 5 + k + (k / 4) + (j / 4) - (2 * j)) % 7;

	//gestion de la negation
	if (h < 0) {
		h += 7;
	}

	int jourSemaine = (h + 6) % 7;

	//affichage avec tableau
	string jours[] = { "Dimanche", "Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi" };

	cout << day << "/" << month << "/" << year;
	cout << " est un " << jours[jourSemaine] << endl;


	cout << endl;
	return 0;
}
