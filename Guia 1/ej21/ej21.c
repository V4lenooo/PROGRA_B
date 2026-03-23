#include <stdio.h>
#define max 30

void devuelveimpar(int vector[]);
void generavec(int vector[],int divisibles[],int , int *);
void muestravec(int divisibles[] ,int );
void buscaX(int vector[], int);

int main(){
    int X, k, L, divisibles[max], vector[] = {0,1,2,3,4,5,6,7,8,9};
    char car;
    do {
        printf("Que desea realizar? \n A: devolver impares \n B: generar un vector de numeros divisibles por un valor k \n C: buscar la posicion de un lugar X \n X: para salir \n");
        do {
            scanf(" %c", &car);  // espacio para saltar espacios/blancos
        } while (car != 'a' && car != 'A' && car != 'b' && car != 'B' && car != 'c' && car != 'C' && car != 'x' && car != 'X');

        switch (car) {

            case 'a':
            case 'A': devuelveimpar(vector);
            break;
            case 'b':
            case 'B':{
                printf("ingrese el valor k \n");
                scanf("%d",&k);
                generavec(vector, divisibles, k, &L);
                muestravec(divisibles,L);}
            break;
            case 'c':
            case 'C':{
                printf("ingrese el valor X \n");
                scanf("%d",&X);
                buscaX(vector,X);}
            break;
            case 'x':
            case 'X': printf("Saliendo...");
            break;
        }
    } while (car != 'x' && car != 'X');
    return 0;
}

void devuelveimpar(int vector[]){
    int i;
    for (i=1; i<10; i+=2)
        printf("[%d]",vector[i]);
    printf("\n");
}

void generavec(int vector[],int divisibles[],int k, int *L){
    int i,j=0;
    for(i=0;i<10;i++){
        if(vector[i]%k == 0){
            divisibles[j]=vector[i];
            j++;
        }
    }
    *L=j;
}

void muestravec(int divisibles[] ,int L){
    int i;
    if (L == 0)
    printf("no existen numeros divisibles");
    else{
    printf("los numeros divisibles son: ");
    for (i=0; i<L; i++)
        printf("[%d] ", divisibles[i]);
    }
    printf("\n");
}

void buscaX(int vector[], int X){
    int i = 0;
    while (i<10 && X != vector[i])
    i++;
    if (i<10)
    printf("X esta en la pos: %d", i);
    else
    printf("No se encontro X");
    printf("\n");
}

