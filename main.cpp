#include <iostream>
#include "temperature.h"
using namespace std;


/*GUARDA LA STRUTTURA, IL DO WHILE MI SERVE PER POTER RIPROPORRE IL MENU DOPO OGNI SCELTA.

 1. Aggiungi le voci mancanti nel menu:
 2. Visualizzare tabella
 3. Totale appartamento
 0. Esci

2. Nei case:
- case 2: richiama la funzione mostraTabella(m)
- case 3: richiama la funzione totaleAppartamento(m)

4. Il menu deve continuare a essere mostrato finché l’utente non sceglie 0

Domanda:
Se l’utente seleziona l’opzione 2 o 3 prima di aver inserito i dati, il programma utilizza valori non
inizializzati presenti in memoria.
Modifica il codice per evitare questo comportamento e garantire che le operazioni vengano eseguite
solo su dati validi.

*/
using namespace std;

int main() {
    float m[APP][GIORNI]; //
    int scelta;
    int datiOk = 0;

    do {
        cout << "MENU" << endl;
        cout << "1. Inserire consumi" << endl;
        cout << "2. Visualizzare tabella" << endl;
        cout << "3. Totale appartamento" << endl;
        cout << "0. Esci" << endl;
        cout << "Scelta: ";
        cin >> scelta;

        switch (scelta) {

            case 1:
                inserisciConsumi(m);
                datiOk = 1;
                break;

            case 2:
                if (datiOk == 1) {
                    mostraTabella(m);
                } else {
                    cout << "Errore, inserisci prima i dati" << endl;
                }
                break;

            case 3:
                if (datiOk == 1) {
                    totaleAppartamento(m);
                } else {
                    cout << "Errore, inserisci prima i dati" << endl;
                }
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