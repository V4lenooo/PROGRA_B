/*Desarrollar un programa que cree un arreglo estático de punteros a enteros, y luego cargue en
él una cantidad desconocida de enteros (se encuentran en un archivo de texto). Posteriormente
a la carga, mostrar aquellos que sean positivos. Luego, para finalizar, liberar la memoria
solicitada en tiempo de ejecución.*/

#include <stdio.h>
#include <stdlib.h>
#define max 30

void inicializa_array(int *enteros[], int *N);
void muestra_solo_positivos(int *enteros[], int N);
void liberar_memoria(int *enteros[], int N);

int main(){
    int N = 0;
    int *enteros[max];

    inicializa_array(enteros, &N);
    muestra_solo_positivos(enteros, N);
    liberar_memoria(enteros, N);

    return 0;
}

void inicializa_array(int *enteros[max], int *N){
    int num;
    FILE * arch;

    arch = fopen("Numeros.txt", "r");
    if (arch == NULL)
        printf("No se encuentra el archivo\n");
    else{
        while ((fscanf(arch, "%d", &num) == 1)) {
            *(enteros + *N) = (int *)malloc(sizeof(int));
            *(*(enteros + *N)) = num;
            (*N)++;
            }
        }

    fclose(arch);
}

void muestra_solo_positivos(int *enteros[], int N){
    int i;
    for(i = 0; i < N; i++){
        if (*(*(enteros + i)) > 0)
            printf("[%d] ", *(*(enteros + i)));
    }

    printf("\n");
}

void liberar_memoria(int *enteros[], int N){
    int i;
    for (i = 0; i < N; i++)
        free(*(enteros + i));
}