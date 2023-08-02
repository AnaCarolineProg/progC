#include<stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n, c, r;

    system("cls");

    printf("\n Digite um número entre 1 e 10: ");
    scanf("%d", &n);

    for(c=1; c<=10; c++){
        r = n*c;
        printf("\n %d x %2d = %3d\n", n, c, r);
    }
    return 0;
}
