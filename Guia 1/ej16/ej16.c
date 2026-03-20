/*Desarrollar un subprograma que reciba una cantidad de segundos y devuelva su equivalente en
el formato horas:minutos:segundos*/
#include <stdio.h>
void calcula_hora(int x);

int main(){
    int input;

    printf("ingrese los segundos \n");
    scanf("%d", &input);
    calcula_hora(input);
    return 0;
}

void calcula_hora(int x){
    int h = 0, m = 0, s = 0;

    h = x / 3600;
    m = (x - h * 3600) /60;
    s = x - (h * 3600 + m * 60);

    printf("%d : %d : %d\n",h,m,s);
}