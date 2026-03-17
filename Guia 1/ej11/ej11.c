#include <stdio.h>
#define comp(a,b) (a<b) ? a : b
#define esletra(c) (c>='a' && c<='z') || (c>='A' && c<='Z') ? 1:0
int main() {
    int a= 3, b=10, x;
    char car = '3';
    x= comp(a,b);
    printf("%d\n", x);

  if (esletra(car) == 1) 
    printf("Es una letra\n");
  else 
    printf("No es una letra\n");
    
return 0;
}