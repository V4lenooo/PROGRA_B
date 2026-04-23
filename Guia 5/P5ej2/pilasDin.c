#include <stdio.h>
#include <stdlib.h>
#include "pilasDin.h"

void iniciaP(TPila *P){
    *P = NULL;
}

int vaciaP(TPila P){
    return P == NULL;
}

void poneP(TPila *P , TElementoP X){
    TPila N;

    N = (TPila)malloc(sizeof(nodop));
    (*N).dato = X;
    (*N).sig = *P;

    *P = N;
    
}

void sacaP(TPila *P , TElementoP *X){
    TPila N;
    if (*P != NULL){
        N = *P;
        *X = (*P)->dato;
        *P = (*P)->sig;
        free(N);
    }

}

TElementoP consultaP(TPila P){

    if(P != NULL)
        return P->dato;
}