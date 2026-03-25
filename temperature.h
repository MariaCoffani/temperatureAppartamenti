#ifndef FILE_H
#define FILE_H

const int APP = 2;
const int GIORNI = 7;

void inserisciConsumi(float m[APP][GIORNI]);
void mostraTabella(float m[APP][GIORNI]);
void totaleAppartamento(float m[APP][GIORNI]);
void totaleGiorno(float m[APP][GIORNI]);
void giornoMaxConsumo(float m[APP][GIORNI]);
void contaSopraSoglia(float m[APP][GIORNI]);

#endif
