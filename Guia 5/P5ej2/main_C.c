#include <stdio.h>
#include <stdlib.h>
#include "pilasDin.h"
// ejecutar con gcc main_C.c pilasDin.c -o main; if ($?) { .\main }

void lee_arch(TPila * , int *);
void muestra_pila(TPila *, TPila * , int );
void reestablece_pila(TPila *, TPila * );

int main(){
    int N = 0;
    TPila P,Paux;

    iniciaP(&P);
    iniciaP(&Paux);
    lee_arch(&P, &N); //lee el archivo y carga la pila
    muestra_pila(&P,&Paux, N);// muestra la pila y guarda su contenido en otra auxiliar
    reestablece_pila(&P,&Paux);// vuelve a armar la pila original

    return 0;
}

void lee_arch(TPila * P, int *N){
    FILE * arch;
    TElementoP car;

    arch = fopen("caracteres.txt", "r");
    
    if (arch == NULL) 
        printf("Error: no se puede abrir \"caracteres.txt\"\n");
    else {
        while (fscanf(arch, " %c", &car) == 1){

            poneP(P,car);
            (*N)++;
        }

        fclose(arch);
    }

}

void muestra_pila(TPila * P, TPila * Paux, int N){
    TElementoP car;

    while (!vaciaP(*P)){
        sacaP(P,&car);
        poneP(Paux,car);
        printf("elemento %d: %c\n",N ,car);
        N--;
    }

}

void reestablece_pila(TPila * P, TPila * Paux){
    TElementoP car; 
    
    while (!vaciaP(*P)){
        sacaP(Paux,&car);
        poneP(P,car);
    }
}