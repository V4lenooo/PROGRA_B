/*Declarar un tipo struct para almacenar nombre, matrícula y promedio de un alumno. 
Desarrollar una función que realice lectura de una variable del tipo creado.*/

#include <stdio.h> 

typedef struct{
    char nombre[15];
    char matricula[10];
    float promedio;
} Tdatos_alumno;

void ingresa_datos(Tdatos_alumno *);
void muestra_datos(Tdatos_alumno );

int main(){
    Tdatos_alumno a1;

    printf("ingrese los datos del alumno\n");
    ingresa_datos(&a1);
    printf("\n");
    muestra_datos(a1);
}

void ingresa_datos(Tdatos_alumno *a1){
    printf("Nombre: \n");
    scanf("%14s", a1->nombre);
    printf("Matricula: \n");
    scanf("%9s", a1->matricula);
    printf("promedio: \n");
    scanf("%f", &a1->promedio);
}

void muestra_datos(Tdatos_alumno a1){
    printf("El alumno %s de matricula %s tiene un promedio de %5.2f", a1.nombre, a1.matricula, a1.promedio);
}

