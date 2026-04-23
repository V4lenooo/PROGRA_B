#include <stdio.h>
#include <stdlib.h>
#include "colasDin.h"

void iniciaC(TCola * C){
    (*C).pri = (*C).ult = NULL;
}

int vaciaC(TCola C){
    return (*C).pri == NULL;
}

void poneC (TCola *C, TElementoC X){
    nodo * aux;

    aux = (nodo *) malloc (sizeof(nodo));
    (*aux).dato = X;
    (*aux).sig = NULL;
    if (vaciaC(*C))
        (*C).pri = aux;
    else
        (*C).ult->sig = aux;
    (*C).ult=aux;  

}

void sacaC (TCola *C, TElementoC *X){
    nodo * aux;

    if (!vaciaC(*C)){
        aux = (*C).pri
        *X = (*aux).dato;
        (*C).pri = (*C).pri->sig;
        if (vaciaC(*C))
            (*C).ult = NULL;
        free aux;
    }   
}

TElementoC consultaC (TCola C){
    if (!vaciaC)
        return (*C).pri->dato;
}