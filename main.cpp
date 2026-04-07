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


int main() {
    float m[APP][GIORNI];
    int scelta;
    bool datiInseriti = false;
    do {
        cout << "\nMENU\n";
        cout << "1. Premi 0 per uscire\n";
        cout << "2. Premi 1 per inserire consumi\n";
        cout << "3. Premi 2 per controllare la tabella dei consumi\n";
        cout << "4. Premi 3 per vedere i consumi dell'appartamento x \n";
        cin >> scelta;

        switch (scelta) {

            case 1:
                inserisciConsumi(m);
                datiInseriti = true;
                break;

            case 2:
                if (datiInseriti) {
                    mostraTabella(m);
                } else {
                    cout << "ERRORE, Inserisci prima i consumi" << endl;
                }
                break;

            case 3:
                if (datiInseriti) {
                    totaleAppartamento(m);
                } else {
                    cout << "ERRORE, Inserisci prima i consumi" << endl;
                }
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