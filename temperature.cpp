#include <iostream>
#include "temperature.h"
using namespace std;


//FUNZIONE VISTA INSIEME IN LAB
void inserisciConsumi(float m[APP][GIORNI]) {
    for (int i = 0; i < APP; i++) {
        for (int j = 0; j < GIORNI; j++) {
            cout << "Consumo appartamento " << i+1 << " giorno " << j+1 << ": ";
            cin >> m[i][j];
        }
    }
}


//IMPLEMENTA LE FUNZIONI RICHIESTA

//Implementa la funzione per poter stampare i dati inseriti
void mostraTabella(float m[APP][GIORNI]) {
    cout<<"\t";
    for (int i=0;i<GIORNI;i++){
        cout<<"Gio. "<<i+1<<"\t";
    }
    cout<<endl;
    for (int i=0;i<APP;i++){
        cout<<"App. "<<i+1<<"\t";
        for (int j=0;j<GIORNI;j++){
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

void totaleAppartamento(float m[APP][GIORNI]) {
    int n,tot;

    cout<<"Inserire il numero dell'appartamento da analizzare"<<endl;
    do
    {
        cin>>n;
        if (n<1||n>3)
            cout<<"Valore non valido"<<endl;
    }while (n<1||n>3);

    tot=0;
    for (int j=0;j<GIORNI;j++){
        tot += m[n-1][j];
    }
    cout<<"Il consumo totale dell'appartmaneto e' "<<tot<<endl;
}

void seNonAbilitato(){
    cout<<"Si prega di inserire dei valori almeno una volta\n";
}

