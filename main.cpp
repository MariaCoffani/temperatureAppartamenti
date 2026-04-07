/*Un edificio vuole monitorare il consumo energetico gornaliero
di più appartamenti durante una settimana.

I dati devono essere memorizzati in una matrice
(appartamento*giorni), dove giorni in questo caso sono 7, una settimana
dove ogni elemento rappresenta il consumo in kWh.

1.main.cpp = contenere il menu e le chiamate ale funzioni (switch case)
2.temperature.h = dichiarazione delle funzioni
3.temperature.cpp = implementare le funzioni
*/
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
    int scelta,s,a;
    bool datiValidi=false;
    do {
        cout << "\nMENU\n";
        cout << "1. Inserire consumi\n"<<"2. Visualizzare tabella \n"<<"3. Totale appartamento\n"<<"0. Esci"<<endl;
        cin >> scelta;

        while (datiValidi==false){
            if (scelta==1) {
                datiValidi=true;
            } else {
                cout << "Inserisci dei dati per poter visualizzare la tabella o il consumo totale  di un appartamento\n"<<"1. Inserire consumi"<<endl;
                cin >> scelta;
            }
        }

        switch (scelta) {

            case 1:
                inserisciConsumi(m);
                break;

            case 2:
                mostraTabella(m);
                break;

            case 3:
                totaleAppartamento(s,a,m);
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