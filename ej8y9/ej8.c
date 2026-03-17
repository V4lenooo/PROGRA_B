#include <stdio.h>
int main() {
/*    int a = 0;
if( a++ == 0)
printf("a vale 0");
else
printf("a vale 1");
printf(" y a vale %d\n", a);
return 0;*/

//ej 9 
int y,x = 1;
switch (x) {
  case (4): 
    y=7;
    break;
  case (5): 
    y=9;
    break;
  case (9): 
    y=14;
    break;
default: y = 22;
}
printf("Y vale: %d", y);
return 0;
}