#include <iostream>
#include "temperature.h"
using namespace std;


//FUNZIONE VISTA INSIEME IN LAB
void inserisciConsumi(float m[APP][GIORNI]) {
    for (int i = 0; i < APP; i++) {
        for (int j = 0; j < GIORNI; j++) {
                cout << "Consumo appartamento " << i << " giorno " << j << ": ";
                cin >> m[i][j];
            }
        }
    }


//IMPLEMENTA LE FUNZIONI RICHIESTA

//Implementa la funzione per poter stampare i dati inseriti
void mostraTabella(float m[APP][GIORNI]) {

}


/*La funzione deve chiedere all’utente quale appartamento analizzare
Deve controllare che il valore inserito sia valido
Deve calcolare la somma dei consumi di quell’appartamento
Deve stampare il totale
*/

void totaleAppartamento(float m[APP][GIORNI]) {
}

