/*Desarrollar un programa que cree dinámicamente un arreglo de números reales que contenga
N elementos (N es ingresado por teclado). Ingresar sus elementos y mostrar aquellos que sean
positivos utilizando aritmética de punteros. Al finalizar, liberar la memoria solicitada en tiempo
de ejecución.*/
#include <stdio.h>
#include <stdlib.h>
#define max 30

void crea_array(float **, int);
void carga_array(float *, int);
void muestra_array(float *, int);

int main(){
    int N;
    float *vec;

    printf("ingrese el largo del array N\n");
    scanf("%d",&N);

    crea_array(&vec, N);
    carga_array(vec, N);
    muestra_array(vec, N);

    free(vec);


    return 0;
}
void crea_array(float **vec, int N){
    *vec = (float *) malloc(sizeof(float) * N);
    if (*vec == NULL){
        perror("malloc");
        exit(1);
    }
}

void carga_array(float *puntero_vec, int N){
    int i, num;
    for (i = 0; i < N; i++){
        printf("ingrese el numero %d\n", i+1);
        scanf("%f", puntero_vec + i);
    }

}
void muestra_array(float *puntero_vec, int N){
    int i;
    for (i = 0; i < N; i++)
        if (*(puntero_vec + i) > 0)  
            printf("[%5.2f]", *(puntero_vec + i));
}