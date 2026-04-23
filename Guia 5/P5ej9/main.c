#include <stdio.h>
#include "pilasEst.h"

void lee_arch(TPila * , const char * );
void suma(TPila * , TPila * , TPila * );

int main(){
    TPila P1, P2, P3;

    lee_arch(&P1, "pila1.txt");
    lee_arch(&P2, "pila2.txt");
    iniciaP(&P3);
    suma(&P1,&P2,&P3);
}

void lee_arch(TPila * P, const char * nombre_arch){
    FILE * arch;
    TElementoP car;

    iniciaP(P);
    arch = fopen(nombre_arch, "r");
    
    if (arch == NULL) 
        printf("Error: no se puede abrir %s\n", nombre_arch);
    else {
        while (fscanf(arch, " %c", &car) == 1)
            poneP(P,car);

        fclose(arch);
    }

}

void void suma(TPila * P1, TPila * P2, TPila * P3){
    int acarreo = 0, num1, num2, num3;
    char num_caracter1, num_caracter2;

    while( !vaciaP(P1) || !vaciaP(P2) ){
        sacaP(P1,&num_caracter1);
        sacaP(P2,&num_caracter2);

        if (!vaciaP(P1))
            num1 = num_caracter1 - 48;
        else
            num1 = 0;
        
        if (!vaciaP(P2))
            num2 = num_caracter2 - 48;
        else
            num2 = 0; 

        num3 = num1 + num2 + acarreo;

        if (num3 >= 10)
            acarreo = num3 - 10;
        else 
            acarreo = 0; 

        poneP(P3,num3+48);

        
    }

}