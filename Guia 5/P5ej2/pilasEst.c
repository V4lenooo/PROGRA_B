#include <stdio.h>
//#include <stdlib.h>
#include "pilasEst.h"

void iniciaP (TPila * P){
    (*P).tope = -1;
}

void poneP (TPila * P, TElementoP X){
    if ((*P).tope != MAX-1) {
        (*P).tope++;
        (*P).datos[(*P).tope] = X;
    }
    //puede ser como en la teoria que: (*P).datos[++((*P).tope)] = x;
}

void sacaP (TPila * P, TElementoP * X){
    if ((*P).tope != -1)
        *X = ((*P).datos[(*P).tope--]);

}

TElementoP consultaP (TPila P){
    if (P.tope != -1)
        return P.datos[P.tope];

}

int vaciaP (TPila P){
    return P.tope == -1;
}