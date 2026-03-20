/*Desarrollar  un  subprograma  que  duplique  los  elementos  de  un  vector  ubicados  en  las 
posiciones pares. Implementar 3 veces utilizando for, while y do while*/
#include <stdio.h>
void muestraV(int v[], int );
void func_for (int v[],int );
void func_while (int v[], int );
void func_dowhile (int v [], int);

int main() {
    int v[] = {2,2,2,2,2,2};
    func_for (v,6);
    printf("\n");
    func_while (v,6);
    printf("\n");
    func_dowhile (v,6);
    return 0;
}
void muestraV(int v[], int n){
    for (int i=0;i<n;i++)
        printf("v[ %d ] = %d\n",i,v[i]);
}

void func_for (int v[],int n){
    int i;
    for (i=0;i<n; i++){
        if(i%2 == 0)
        v[i]*= 2;
    }
    muestraV(v,n);
}

void func_while (int v[], int n){
    int i = 0;
    while (i<n){
        if(i%2 == 0)
        v[i]*= 2;
        i++;
    }
    muestraV(v,n);
}

void func_dowhile (int v[], int n){
    int i = 0;
    do{
        if(i%2 == 0)
        v[i]*= 2;
        ++i;
    } while (i<n);      
    

    muestraV(v,n);
}