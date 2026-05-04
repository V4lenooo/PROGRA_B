 /*Ingresar en una pila los caracteres almacenados (uno por línea) en un archivo de texto. Mostrar
el contenido de la pila.
a. Utilizar la implementación estática.
b. Utilizar la implementación dinámica.
c. Mantener la información en la pila.*/

#include <stdio.h>
#include "pilasEst.h"
// ejecutar con gcc main_A.c pilasEst.c -o main; if ($?) { .\main }

void lee_arch(TPila * , int *);
void muestra_pila(TPila *, int );

int main(){
    int N = 0;
    TPila P;
    
    lee_arch(&P, &N);
    muestra_pila(&P, N);

    return 0;
}
void lee_arch(TPila * P, int *N){
    FILE * arch;
    TElementoP car;

    iniciaP(P);
    arch = fopen("caracteres.txt", "r");
    
    if (arch == NULL) 
        printf("Error: no se puede abrir caracteres.txt\n");
    else {
        while (fscanf(arch, " %c", &car) == 1){

            poneP(P,car);
            (*N)++;
        }

        fclose(arch);
    }

}

void muestra_pila(TPila * P, int N){
    TElementoP car;

    while (!vaciaP(*P)){
        sacaP(P,&car);
        printf("elemento %d: %c\n",N ,car);
        N--;
    }

}