/* Implementar un programa que cree dinámicamente 3 variables enteras (pint1, pint2 y pint3),
muestre su suma y su producto. No utilizar estructuras iterativas. Asegurarse de administrar
correctamente la memoria e implementar una función para evitar duplicaciones de código en la
creación y lectura de cada variable. Desarrollar en primera instancia una función que retorne
un puntero a entero. Para cumplir con el paradigma de programación estructurada, convertir
en una función void que retorne el resultado como parámetro de salida.*/

#include <stdio.h> 
#include <stdlib.h>

void inicia_variable(int **);
int suma(int *, int *, int *);
int producto (int *, int *, int *);

int main(){
    int *a, *b, *c;

    inicia_variable(&a);
    inicia_variable(&b);
    inicia_variable(&c);

    printf("Suma: %d\n", suma(a,b,c));
    printf("Producto: %d\n", producto(a,b,c));

    free(a);
    free(b);
    free(c);

    return 0;
}

void inicia_variable(int **x){
   *x = (int *) malloc(sizeof(int));
   scanf("%d",*x); 
}

int suma(int *a, int *b, int *c){
    return *a + *b + *c;
}

int producto(int *a, int *b, int *c){
    return *a * *b * *c;
}