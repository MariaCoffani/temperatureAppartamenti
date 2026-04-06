#include <iostream>
#include "temperature.h"
using namespace std;

void inserisciConsumi(float m[APP][GIORNI]) {
    for (int i = 0; i < APP; i++) {
        for (int i = 0; i < GIORNI; i++) {
            cout << "Consumo appartamento " << i << " giorno " << i << ": " << endl;
            cin >> m[i][i];
        }
    }
}

void mostraTabella(float m[APP][GIORNI]) {
    for (int i = 0; i < APP; i++) {
        for (int j = 0; j < GIORNI; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

void totaleAppartamento(float m[APP][GIORNI]) {

    int app;
    cout << "Numero appartamento: " << endl;
    cin >> app;

    if (app < 0 || app >= APP) {
        cout << "Numero non valido" << endl;
        return;
    }

    float totale = 0;

    for (int j = 0; j < GIORNI; j++) {
        totale = totale + m[app][j];
    }

    cout << "Totale consumo: " << totale << endl;
}