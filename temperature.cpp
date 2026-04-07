
#include <iostream>
#include "temperature.h"
using namespace std;


//FUNZIONE VISTA INSIEME IN LAB
void inserisciConsumi(float m[APP][GIORNI]) {
    for (int i = 0; i < APP; i++) {
        for (int j = 0; j < GIORNI; j++) {
            cout << "Consumo appartamento " << i+1 << " giorno " << j+1<< ": ";
            cin >> m[i][j];
        }
    }
}


//IMPLEMENTA LE FUNZIONI RICHIESTA

//Implementa la funzione per poter stampare i dati inseriti
void mostraTabella(float m[APP][GIORNI]) {
    cout <<"Tabella dei consumi (in kWh): "<<endl;
    for (int i=0; i<APP; i++) {
        for (int j=0; j<GIORNI; j++) {
            cout<<m[i][j]<<"\t";
        }
        cout<<endl;
    }
}


/*La funzione deve chiedere all’utente quale appartamento analizzare
Deve controllare che il valore inserito sia valido
Deve calcolare la somma dei consumi di quell’appartamento
Deve stampare il totale
*/

void totaleAppartamento(int somma, int app, float m[][GIORNI]) {
    cout <<"Consumo totale dell'appartamento: "<<endl;
    cin>>app;
    while (app!= 1&& app!=2 && app!=3) {
        cout<<"Numero appartamento non valido, inserisci: 1,2 oppure 3 \n";
        cin>>app;
    }
    app=app-1;
    somma=0;
    for (int i=0; i<GIORNI; i++) {
        somma=somma+m[app][i];
    }
    cout <<"Il consumo totale dell'appartamento "<< app+1 <<" e' di: "<< somma << " kWh" <<endl;
}
