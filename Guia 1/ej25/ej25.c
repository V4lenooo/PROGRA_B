/*Leer el nombre y la edad de N personas, calcular e imprimir:
a) el listado de nombres de las personas de más de X años (X es dato).
b) el porcentaje de las personas mayores de edad (sobre el total).*/

#include <stdio.h>
#define max 30

void ingresa_personas (int, char[][15] , int*);
void mayores_que_X (int, char[][15] , int*, int);
float mayores_de_edad(int, int*);

int main(){
    int numero_de_personas, vec_edad_personas[max], X;
    char vec_personas[max][15]; 

    printf("ingrese la cantidad de personas: \n");
    scanf("%d", &numero_de_personas);
    ingresa_personas(numero_de_personas, vec_personas, vec_edad_personas);

    printf("\ningrese X: \n");
    scanf("%d", &X);
    printf("las personas mayores de %d son: \n", X);
    mayores_que_X(numero_de_personas, vec_personas, vec_edad_personas, X);

    printf("El porcentaje de mayores de edad es del %5.2f%%",mayores_de_edad(numero_de_personas, vec_edad_personas));

    return 0;
}

void ingresa_personas(int numero_de_personas, char vec_personas[][15], int *vec_edad_personas){
    int i;

    for(i = 0; i < numero_de_personas; i++){
        printf("ingrese el nombre y edad de la persona %d \n", i+1);

        printf("Nombre: ");
        scanf("%14s", vec_personas[i]);

        printf("Edad: ");
        scanf("%d", &vec_edad_personas[i]);
    }

}

void mayores_que_X(int numero_de_personas, char vec_personas[][15], int *vec_edad_personas, int X){
    int i;

    for(i = 0; i < numero_de_personas; i++){
        if(vec_edad_personas[i] > X)
            printf("%s\n", vec_personas[i]);
    }

}

float mayores_de_edad(int numero_de_personas, int *vec_edad_personas){
    int i, cont = 0;

    for(i = 0; i < numero_de_personas; i++){
        if(vec_edad_personas[i] >= 18)
            cont++;
    }

    if (cont == 0)
    return 0;
    else
    return (float)cont*100/numero_de_personas;

}