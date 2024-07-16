#include <iostream>
#include <cstring>
using namespace std;

#include "bst.h"

int totalePunti(bst tree, int inf, int sup){
    int somma=0;
    if(tree==NULL){
        
	}
    else{
        if(get_left(tree)!=NULL){
           somma += totalePunti(tree->left,inf,sup);
        }
        if(tree->key>=inf && tree->key<=sup){
            somma += tree->inf.punti_totali;
        }
        if(get_right(tree)!=NULL){
            somma +=totalePunti(tree->right,inf,sup);
        }
    }
    return somma;
}

int main ()
{
    bst tree = NULL;
    int n;
    int dim;
    bnode* node;
    tipo_key chiave;
    tipo_inf card;
    do {
        cout<<"Quante carte vuoi inserire? ";
        cin>>n;
            if (n<=0)
                cout<<"ERRORE. ";
    }
    while (n<=0);
    for (int i=0; i<n; i++)
    {
        node=NULL;
        cout<<"INSERISCI CODICE DELLA CARTA: ";
        cin>>chiave;
        cout<<"INSERISCI NOME E COGNOME: ";
        cin>>card.nome_cognome;
        cout<<"INSERISCI PUNTI: ";
        cin>>card.punti_totali;
        node = bst_newNode(chiave, card);
        bst_insert(tree, node);
    }
    stampa_crescente(tree);
    int inf, sup;
    cout<<"INSERISCI ESTREMO INFERIORE NUMERO DI CARTA: ";
    cin>>inf;
    cout<<"INSERISCI ESTREMO MASSIMO NUMERO DI CARTA: ";
    cin>>sup;
    cout<<totalePunti(tree, inf, sup);
} 