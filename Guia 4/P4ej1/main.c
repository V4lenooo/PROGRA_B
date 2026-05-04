#include <stdio.h>
#include <stdlib.h>
#include "fraccionarios.h"
//#include "fraccionarios.c"

//gcc main.c fraccionarios.c -o main;  if ($?) { .\main }
//para ejecutar


int main(){
    fraccion f1, f2, F;

    f1 = simplificar(crear(2,3));
    f2 = simplificar(crear(16,30));

    printf("el numerador de f2 es: %d\n", numerador(f2));
    printf("el denominador de f2 es: %d\n", denominador(f2));

    F = simplificar(sumar(f1,f2));
    printf("(sumar) F= %d/%d\n", F.numerador, F.denominador);

    F = simplificar(restar(f1,f2));
    printf("(restar) F= %d/%d\n", F.numerador, F.denominador);

    F = simplificar(multiplicar(f1,f2));
    printf("(multiplicar) F= %d/%d\n", F.numerador, F.denominador);

    F = simplificar(dividir(f1,f2));
    printf("(dividir) F= %d/%d\n", F.numerador, F.denominador);

    f2 = simplificar(crear(2,3));

    printf("(iguales)? %d\n", iguales(f1,f2));
}