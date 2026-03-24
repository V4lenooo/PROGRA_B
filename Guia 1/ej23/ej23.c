/* Corregir el siguiente código para que asigne el contenido de la cadena cad1 a cad3, solamente
si cad1 y cad2 son distintas.
char cad1[20], cad2[20], cad3[20];
gets(cad1); gets(cad2);
if(cad1 != cad2)
cad3 = cad1;*/

#include <stdio.h>
#include <string.h>
#define max 20

int main(){
    char cad1[max], cad2[max], cad3[max];

    fgets(cad1, max, stdin);
    cad1[strcspn(cad1, "\n")] = '\0';

    fgets(cad2, max, stdin);
    cad2[strcspn(cad2, "\n")] = '\0';
    
    if (strcmp(cad1,cad2) != 0)
        strcpy(cad3,cad1);

    printf("cad3=%s\n", cad3);
    return 0;
}