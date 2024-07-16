#ifndef CARTA_H
#define CARTA_H

struct carta {
    char nome_cognome [40];
    int punti_totali;
};
typedef carta tipo_inf;

int compare(tipo_inf,tipo_inf);
void copy(tipo_inf&,tipo_inf);
void print(tipo_inf);

#endif