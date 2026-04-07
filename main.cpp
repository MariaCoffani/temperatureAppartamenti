#include <iostream>
#include "temperature.h"
using namespace std;

int main() {
    float m[APP][GIORNI];
    int scelta;
    bool datiInseriti = false;

    do {
        cout << endl;
        cout << "MENU" << endl;
        cout << "1. Inserire consumi" << endl;
        cout << "2. Mostra tabella" << endl;
        cout << "3. Totale appartamento" << endl;
        cout << "0. Esci" << endl;

        cin >> scelta;

        switch (scelta) {

            case 1:
                inserisciConsumi(m);
                datiInseriti = true;
                break;

            case 2:
                if (datiInseriti)
                    mostraTabella(m);
                else
                    cout << "Inserisci prima i dati" << endl;
                break;

            case 3:
                if (datiInseriti)
                    totaleAppartamento(m);
                else
                    cout << "Inserisci prima i dati" << endl;
                break;

            case 0:
                cout << "Uscita" << endl;
                break;

            default:
                cout << "Scelta non valida" << endl;
        }

    } while (scelta != 0);

    return 0;
}