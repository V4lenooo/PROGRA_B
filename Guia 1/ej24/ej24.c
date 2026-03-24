/*Desarrollar un programa que lea una matriz de enteros de NxM y:
a) busque la posición de un valor x (puede no existir)
b) muestre el promedio de cada columna de la matriz.
c) muestre para cada fila que tenga al menos un cero la cantidad de elementos que superan el
promedio de la matriz*/ 
#include <stdio.h>
#include <stdbool.h>

void buscaPos (int mat[] [4], int);
float promedioCol (int mat[] [4],int);
float promTot(int mat[] [4]);
void superaProm (int mat[] [4], float);

int main() {
    int I,J; //posicion del valor buscado
    int i,j; //variable para recorrer las filas 
    int X; // valor buscado
    float promedio;
    int mat[3][4] = { {1,2,3,7}, {3,0,0,9}, {2,7,0,4} };

    //a)
    printf("inciso a) \n");
    printf("\n");

    printf("ingrese el valor a buscar: \n");
    scanf("%d", &X);

    printf("\n");
    buscaPos (mat, X);
    if (I==-1)
        printf("no se encontro ese valor \n");
    else
        
    printf("\n");
    //b)

    printf("inciso b) \n");
    printf("\n");

    for(j = 0; j <= 3; j++){
        printf("El promedio de la columna %d es de: %5.2f \n", j, promedioCol(mat, j));
    }
    printf("\n");

    //c)
    
    printf("inciso c) \n");
    printf("\n");

    promedio = promTot(mat);
    printf("El promedio total es de %5.2f \n", promedio);       
    superaProm(mat, promedio);

    printf("\n");
    return 0;
    }

    //-----FUNCIONES-----//

    void buscaPos (int mat[][4], int X){
        int j,i;
        bool encontrado = false;

        for(i = 0; i <= 2; i++){
            for(j=0; j <= 3; j++){
                if (mat[i][j] == X){
                    printf("%d se encuentra en i: %d j: %d \n", X,i,j);
                    encontrado = true;
                }
            }
        }
        if (!encontrado){
            printf("no se encontro el valor %d \n", X);
        }
    }

    float promedioCol (int mat[][4], int j){
        int i,cont=0;
        float prom=0;
        for(i = 0; i <= 2; i++){
            prom += mat[i] [j];
            cont++;
        }
        prom /= cont;
        return prom;

    }

    float promTot(int mat[][4]){
        int i,j;
        float promedio = 0;

        for(i = 0; i <= 2; i++){
            for(j = 0; j <= 3; j++)
                promedio += mat[i][j];
        }
        promedio /= 12;
        return promedio;

    }
    
    void superaProm (int mat[][4], float promedio){
        int i,j,cont;
        bool hayceros = false;

        for(i = 0; i <= 2; i++){
            cont = 0;
            for(j = 0; j <= 3; j++){
                if (mat[i][j] == 0)
                    hayceros = true;
                if ((float) mat[i][j] > promedio)
                    cont++;
                
            }
            if (hayceros)
                printf("la cantidad de elementos que superan el promedio en la fila %d es de %d \n", i, cont);
            else
                printf("no hay ceros en la fila %d \n", i);
        } 
    }     
