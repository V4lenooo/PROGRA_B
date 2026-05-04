#include <stdio.h>
#include "colas.h"

void Cuenta_X(Tcola , int , int *);

int main(){
    Tcola C;
    int X, cont;
    //TelementoC elem;

    printf("ingrese X\n");
    scanf("%d", &X);

    ("%d aparece %d veces", X, cont);

    return 0;
}

void Cuenta_X(Tcola *C, int X, int &cont){
    TelementoC elem;
    *cont = 0;
    
    while (!VaciaC(*C)){
        sacaC(c, &elem);
        if (elem == x)
            (*cont)++;


    }
}