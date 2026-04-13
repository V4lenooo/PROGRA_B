/*Dada una matriz A de NxM float, retornar la cantidad de veces que un valor X aparece en A
(realizar una versión void y otra int)*/

#include <stdio.h>

int busca_X_int (int[][3], int, int, int ,int);
void busca_X_void (int[][3], int, int, int, int, int);
int main(){
    int X, matriz[3][3] = {{4,7,2}, {4,3,9}, {9,0,9}};

    printf("ingrese el entero a buscar: \n");
    scanf("%d", &X);
    printf("(int) el numero %d se encuentra %d vez/veces\n", X, busca_X_int(matriz, X, 3-1, 3-1, 3-1));
    busca_X_void(matriz, X, 2, 2, 2, 0);
    
}

int busca_X_int(int matriz[][3], int X, int i, int j, int recuerda_j){ //invoco con i-1 y j-1
    int cont = 0;

    if (i == -1)
        return cont;
    else{
        if (j == -1)
            return busca_X_int(matriz, X, i - 1, recuerda_j, recuerda_j);

        if (matriz[i][j] == X)
            cont = 1 + busca_X_int(matriz, X, i, j - 1, recuerda_j);
        else
            cont = busca_X_int(matriz, X, i, j - 1, recuerda_j);

    }
}

void busca_X_void(int matriz[][3], int X, int i, int j, int recuerda_j, int cont){

    if (i == -1)
        printf("(void) el numero %d se encuentra %d vez/veces\n", X, cont);
    else 
        if (j == -1)
            busca_X_void(matriz, X, i - 1, recuerda_j, recuerda_j, cont);
        else{
            if (matriz[i][j] == X)
                cont++;
            busca_X_void(matriz, X, i, j - 1, recuerda_j, cont);
        }

}