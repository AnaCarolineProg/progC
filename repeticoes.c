/* O quadrado de um n�mero natural n � dado pela soma dos n
primeiros n�meros �mpares consecutivos. Por exemplo, 1
2=1, 2
2=1+3, 3
2=1+3+5,
4
2=1+3+5+7, etc. Dado um n�mero n, calcule seu quadrado usando a soma de
�mpares ao inv�s de produto*/
#include <stdio.h>
#include <locale.h>

int calcularQuadradoPorSomaDeImpares(int n) {
    int soma = 0;
    int impar = 1;

    for (int i = 0; i < n; i++) {
        soma += impar;
        impar += 2; // Pr�ximo n�mero �mpar
    }

    return soma;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numero;

    printf("Digite um numero natural: ");
    scanf("%i", &numero);

    int quadrado = calcularQuadradoPorSomaDeImpares(numero);
    printf("O quadrado de %i � %i.\n", numero, quadrado);

    return 0;
}
