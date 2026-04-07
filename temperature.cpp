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
//serve per mostrre un quadro generale dei consumi del condominio
void mostraTabella(float m[APP][GIORNI]) {
    for (int i = 0; i < APP; i++) {
        cout<<"appartamento"<<i<<" | ";
        for (int j = 0; j < GIORNI; j++) {
            cout<< m[i][j]<<"\t";
        } cout<<endl;
    }
}


/*La funzione deve chiedere all’utente quale appartamento analizzare
Deve controllare che il valore inserito sia valido
Deve calcolare la somma dei consumi di quell’appartamento
Deve stampare il totale
*/

//serve per fae un calcolo solo su una riga (7g)
void totaleAppartamento(float m[APP][GIORNI]) {
    int n_app;
    float somma=0;
    cout << "\nInserisci il numero dell'appartamento (da 1 a " << APP << "): ";
    cin>>n_app;
    if (n_app>=1 && n_app<=APP) {
        for (int i=0;i<GIORNI; i++) {
            somma +=m[n_app-1][i];
        }
        cout<<"il consumo totale dell'appartamento"<<n_app<<"e' di"<<somma<<"kwh"<<endl;
    }else {
        cout<<"errore: numeroappartamento non valido"<<endl;
    }
}

