#include <stdio.h>
#include <stdlib.h>

int main() {
 int c, n=0;
 for(c=0; c<=255; c++) {
 printf("\n%c ==> %d", c, c);
 n++;
 if( n==23 ) {
 printf("\n\nPressione uma tecla ...");
 n=0;

 getch();
 }
 }
 return 0;
}
