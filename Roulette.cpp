#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int un = 0, trois = 0, cinq = 0, dix = 0, vingt = 0, debut_un = 3, debut_trois = 12, debut_cinq = 17, debut_dix = 49, debut_vingt = 125;
    double miseInitiale = 1, multiplicateur_un = 2.25, multiplicateur_trois = 1.5, multiplicateur_cinq = 1.25, multiplicateur_dix = 1.15, multiplicateur_vingt = 1.075;

    for (int i = 0; i < 10000; ++i) {
        int result;

        while (true) {
            cout << "Entrez le resultat du tour de roulette (1, 3, 5, 10 ou 20) : ";
            cin >> result;

            if (result == 1 || result == 3 || result == 5 || result == 10 || result == 20) {
                break; 
            } else {
                cout << "Nombre invalide. Veuillez entrer un nombre valide." << endl;
            }
        }

        bool is_un = result == 1;
        bool is_trois = result == 3;
        bool is_cinq = result == 5;
        bool is_dix = result == 10;
        bool is_vingt = result == 20;

        if (is_un) { un = 0, ++trois, ++cinq, ++dix, ++vingt; }
        if (is_trois) { trois = 0, ++un, ++cinq, ++dix, ++vingt; }
        if (is_cinq) { cinq = 0, ++un, ++trois, ++dix, ++vingt; }
        if (is_dix) { dix = 0, ++un, ++trois, ++cinq, ++vingt; }
        if (is_vingt) { vingt = 0, ++un, ++trois, ++cinq, ++dix; } 
		bool evenementApparu = false;

        for (int i = 0; i <= 100; i++) { double mise_un = miseInitiale * pow(multiplicateur_un, i), mise_trois = miseInitiale * pow(multiplicateur_trois, i),  mise_cinq = miseInitiale * pow(multiplicateur_cinq, i), mise_dix = miseInitiale * pow(multiplicateur_dix, i), mise_vingt = miseInitiale * pow(multiplicateur_vingt, i);
        if (un == debut_un + i) { cout << "Mise " << round(mise_un) << " sur un" << endl; evenementApparu = true; }
        if (trois == debut_trois + i) { cout << "Mise " << round(mise_trois) << " sur trois" << endl; evenementApparu = true; }
        if (cinq == debut_cinq + i) { cout << "Mise " << round(mise_cinq) << " sur cinq" << endl; evenementApparu = true; }
        if (dix == debut_dix + i) { cout << "Mise " << round(mise_dix) << " sur cinq" << endl; evenementApparu = true; }
        if (vingt == debut_vingt + i) { cout << "Mise " << round(mise_vingt) << " sur vingt" << endl; evenementApparu = true; } }
		if (!evenementApparu) { cout << "Ne mise pas !" << endl; } 
        cout << endl; }
    return 0; }