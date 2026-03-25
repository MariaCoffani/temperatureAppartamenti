#include <iostream>
#include "temperature.h"
using namespace std;

int main() {
    float m[APP][GIORNI];
    int scelta;
    bool datiInseriti = false;   // stato del programma
    //progetto sviluppo

    do {
        cout << "\nMENU\n";
        cout << "1. Inserire consumi\n";
        cout << "2. Visualizzare tabella\n";
        cout << "3. Totale appartamento\n";
        cout << "0. Esci\n";

        cin >> scelta;

        switch (scelta) {

            case 1:
                inserisciConsumi(m);
                datiInseriti = true;   // ora i dati esistono
                break;

            case 2:
                if (!datiInseriti)
                    cout << "Inserire prima i dati\n";
                else
                    mostraTabella(m); //m=usa quella matrice per lavorare sui dati
                break;

            case 3:
                if (!datiInseriti)
                    cout << "Inserire prima i dati\n";
                else
                    totaleAppartamento(m);
                break;

            case 0:
                cout << "Uscita\n";
                break;

            default:
                cout << "Scelta non valida\n";
        }

    } while (scelta != 0);

    return 0;
}