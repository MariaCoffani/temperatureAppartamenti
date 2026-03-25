#include <iostream>
#include "temperature.h"
using namespace std;

void inserisciConsumi(float m[APP][GIORNI]) {
    for (int i = 0; i < APP; i++) {
        for (int j = 0; j < GIORNI; j++) {
            do {
                cout << "Consumo appartamento " << i << " giorno " << j << ": ";
                cin >> m[i][j];
            } while (m[i][j] < 0);
            //Il ciclo continua a chiedere il dato finché il valore inserito non è valido.
            //In questo caso, il valore è valido solo se è maggiore o uguale a zero.
          //  appartamento i
         //   giorno j
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
    int a;
    cout << "Inserisci appartamento: ";
    cin >> a;

    float somma = 0;
    for (int j = 0; j < GIORNI; j++) {
        somma += m[a][j];
    }

    cout << "Totale: " << somma << endl;
}
