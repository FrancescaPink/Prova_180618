#include <iostream>
#include <cstring>
using namespace std;

#include "carta.h"

void copy(tipo_inf& dest, tipo_inf source){     //Due parametri: dest (riferimento a un puntatore a char dove verrà copiata la stringa), source (puntatore a char, rappresenta la stringa da copiare)
	strcpy(dest.nome_cognome, source.nome_cognome);           //Copia il contenuto della stringa nome nella memoria appena allocata puntata da dest
    dest.punti_totali=source.punti_totali;
}

int compare(tipo_inf s1,tipo_inf s2) {      //Due parametri: s1 e s2 -> puntatori a stringhe di tipo tipo_inf
	return strcmp(s1.nome_cognome,s2.nome_cognome);                   //Restituisce 0 se le stringhe sono uguali, un valore negativo se la prima stringa precede in ordine alfabetico la seconda e un valore positivo nel caso contrario.
}

void print(tipo_inf inf){       //Prende in ingresso un puntatore di tipo tipo_inf che contiene l'informazione da stampare.
	cout<<inf.punti_totali<<endl;                  //Stampa del puntatore
}