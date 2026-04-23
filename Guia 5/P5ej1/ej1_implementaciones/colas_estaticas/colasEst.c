#include <stdio.h>
#include "colasEst.h"

void IniciaC (TCola * C){
    (*C).pri = (*C).ult = -1;

}

int vaciaC (TCola C){
    return (*C).pri == -1;
}

void poneC(TCola *C, TElementoC X){
    if ((*C).ult != MAX - 1){
        if ((*C).pri == -1)
            (*C).pri++;
        (*C).datos[++((*C).ult)] = X;
    }
}

void sacaC(TCola *C, TElementoC *X){
    if ((*C).pri != -1) // o  =! vaciaC(*C)
        *X = (*C).datos[(*C).pri]

    if ((*C).pri == (*C).ult)
        IniciaC(C);
    else
        ((*C).pri)++;

}

TElementoC consultaC (TCola C){
    if ((*C).pri != -1) // o  =! vaciaC(*C)
        return (*C).datos[(*C.pri)];

}