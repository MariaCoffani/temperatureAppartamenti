#include <iostream>
#include "temperature.h"
using namespace std;

// FUNZIONE VISTA INSIEME IN LAB
void inserisciConsumi(float m[APP][GIORNI]) {
    for (int i = 0; i < APP; i++) {
        for (int j = 0; j < GIORNI; j++) {
            cout << "Consumo appartamento " << i << " giorno " << j << ": ";
            cin >> m[i][j];
        }
    }
}

// Stampa tutta la matrice dei consumi
void mostraTabella(float m[APP][GIORNI]) {
    cout << "\nTABELLA CONSUMI\n";

    for (int i = 0; i < APP; i++) {
        cout << "Appartamento " << i << ": ";
        for (int j = 0; j < GIORNI; j++) {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }
}

/*
La funzione deve:
- chiedere all’utente quale appartamento analizzare
- controllare che il valore inserito sia valido
- calcolare la somma dei consumi di quell’appartamento
- stampare il totale
*/
void totaleAppartamento(float m[APP][GIORNI]) {
    int appartamento;
    float totale = 0;

    cout << "Inserisci il numero dell'appartamento (0-" << APP - 1 << "): ";
    cin >> appartamento;

    if (appartamento < 0 || appartamento >= APP) {
        cout << "Appartamento non valido\n";
        return;
    }

    for (int j = 0; j < GIORNI; j++) {
        totale += m[appartamento][j];
    }

    cout << "Totale consumi appartamento " << appartamento << ": "
         << totale << " kWh\n";
}