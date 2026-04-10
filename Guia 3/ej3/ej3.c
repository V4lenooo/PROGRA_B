/*Dado un vector A de N elementos, obtener el promedio de sus elementos.*/

#include <stdio.h>
#define max 30

void carga_vec(int[max], int * );
void promedio_vec(int[max], int ,int, int );

int main(){
    int A[max], N;

    carga_vec(A, &N);
    //printf("el promedio es:");
    promedio_vec(A, N-1, 0, 0);

    return 0;
}

void carga_vec(int A[max], int *N){
    int i = 0, num = 0;

    while (i < max && num != -1) {
        printf("numero %d: \n", i + 1);
        scanf("%d", &num);
        if (num != -1) {
            A[i] = num;
            i++;
        }
    }

    *N = i;
}

void promedio_vec (int A[max], int N, int sum, int cont){
    if(N == -1){
        if (cont > 0)
            printf("El promedio es: %5.2f \n", (double)sum / cont);
        else 
            printf("El promedio es: 0");
    }
    else{ 
        sum += A[N];
        cont++;
        promedio_vec(A, N-1, sum, cont);
    }

}