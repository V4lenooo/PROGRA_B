/*Simular una fila de empleados para usar un horno microondas en el comedor de una empresa.
Para cada empleado se tiene: su número de legajo, el momento de arribo (en segundos a partir
de las 12:00) y la cantidad de segundos que piensa usar el horno. El programa debe mostrar
para cada empleado el tiempo en que empieza y termina el uso del horno. Al finalizar mostrar
tiempo promedio de espera y legajo con mayor tiempo de espera.*/
#include <stdio.h>
#include "colasEst.h"

void carga_cola(TCola * );
void muestra_datos(TCola * );
void calcula_hora(int , int *, int *, int *);

int main(){
    TCola C;

    carga_cola(&C);
    muestra_datos(&C);

    return 0;
}

void carga_cola(TCola * C){
    FILE * arch;
    arch = fopen("empleados.txt", "r");
    TElementoC input;

    iniciaC(C);

    if (arch == NULL) 
        printf("Error: no se puede abrir el archivo\n");
    else {
        while (fscanf(arch, "%d %d %d", &input.legajo, &input.llegada, &input.tiempo_de_uso) == 3)
            poneC(C,input);

        fclose(arch);
    }
}

void muestra_datos(TCola * C){
    TElementoC output;
    int espera = 0, libre = 0, max_espera = -999, sum_espera = 0, cont = 0, empleado_max, h,m,s;

    while(!vaciaC(*C)){
        sacaC(C,&output);
        cont++;
        printf("Empleado: %d\n", output.legajo);

        if (output.llegada<libre) {
            espera = (libre - output.llegada);
            sum_espera += espera;
            calcula_hora(output.llegada+espera,&h,&m,&s);
            printf("Inicio de uso: %d:%d:%d\n", 12+h,m,s);

            calcula_hora(output.llegada+output.tiempo_de_uso+espera,&h,&m,&s);
            printf("Fin de uso: %d:%d:%d\n", 12+h,m,s);
        }
        else{
            calcula_hora(output.llegada,&h,&m,&s);
            printf("Inicio de uso: %d:%d:%d\n", 12+h,m,s);

            calcula_hora(output.llegada+output.tiempo_de_uso,&h,&m,&s);
            printf("Fin de uso: %d:%d:%d\n", 12+h,m,s);
        }

        if (espera > max_espera){
            empleado_max = output.legajo;
            max_espera = espera;

        }
        libre = (output.llegada > libre ? output.llegada : libre) + output.tiempo_de_uso;
        

    }
    printf("la mayor espera fue de: %d\n", empleado_max);
    printf("el promedio de espera fue de %5.2f\n", (float)sum_espera/cont);

}

void calcula_hora(int tiempo, int *h, int *m, int *s){
        *h = tiempo / 3600;
        *m = (tiempo % 3600) / 60;
        *s = (tiempo % 3600) % 60;
}

