#include <stdio.h>
#include "colasEst.h"
#include "pilasEst.h"

void leeArch_Pila(TPila * );
void leeArch_Cola(TCola * );
void muestra_Pila(TPila * , int );
void muestra_Cola(TCola * , int );

int main(){
    TPila P;
    TCola C;
    int N;
    N=3;
    
    leeArch_Pila(&P);
    leeArch_Cola(&C);

    muestra_Pila(&P,N);
    muestra_Cola(&C,N);

    return 0;
}

void leeArch_Pila(TPila * P){
    FILE * arch;
    TElementoP dni;

    iniciaP(P);
    arch = fopen("DNI.txt", "r");

    if (arch == NULL) 
        printf("Error: no se puede abrir el archivo\n");
    else {
        while (fscanf(arch, " %d", &dni) == 1)
            poneP(P,dni);

        fclose(arch);
    }
}

void leeArch_Cola(TCola * C){
    FILE * arch;
    TElementoP dni;

    iniciaC(C);
    arch = fopen("DNI.txt", "r");

    if (arch == NULL) 
        printf("Error: no se puede abrir el archivo\n");
    else {
        while (fscanf(arch, " %d", &dni) == 1)
            poneC(C,dni);

        fclose(arch);
    }
}

void muestra_Pila(TPila * P, int N){
    int i = 0;
    TElementoP elem;
    for (i; i < N; i++){
        if(!vaciaP(*P)){
            sacaP(P, &elem);
            printf("DNI %d: %d\n", 3-i, elem);
        }
    }

}

void muestra_Cola(TCola * C, int N){
    int i = 0;
    TElementoP elem;
    for (i; i < N; i++){
        if(!vaciaC(*C)){
            sacaC(C, &elem);
            printf("DNI %d: %d\n", i+1, elem);
        }
    }

}