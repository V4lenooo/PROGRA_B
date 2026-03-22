#include <stdio.h>
#define max 30

void conversion (int binario[], int, int *);
void muestra (int binario[], int);

int main (){
    int num, binario[max], L;
    printf("ingrese el numero a convertir \n");
    scanf("%d", &num);
    conversion(binario,num,&L);
    muestra(binario, L);
    return 0;
}

void conversion(int binario[], int num, int *L){
    int i, aux;
    aux = num;

    if (num == 0) {
        binario[0] = 0;
        *L = 1;
     }
    else{
    for (i=0; aux>=1; i++){
        if (aux % 2 != 0)
            binario[i] = 1;
        else
            binario[i] = 0;
        aux /= 2;
    }
    *L = i;
    }
}

void muestra (int binario[], int L){
    int i;
    for (i=L-1; i>=0; i--)
        printf("%d", binario[i]);

}
