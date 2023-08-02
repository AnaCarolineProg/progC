/* O quadrado de um número natural n é dado pela soma dos n
primeiros números ímpares consecutivos. Por exemplo, 1
2=1, 2
2=1+3, 3
2=1+3+5,
4
2=1+3+5+7, etc. Dado um número n, calcule seu quadrado usando a soma de
ímpares ao invés de produto*/
#include <stdio.h>
#include <locale.h>

int calcularQuadradoPorSomaDeImpares(int n) {
    int soma = 0;
    int impar = 1;

    for (int i = 0; i < n; i++) {
        soma += impar;
        impar += 2; // Próximo número ímpar
    }

    return soma;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numero;

    printf("Digite um numero natural: ");
    scanf("%i", &numero);

    int quadrado = calcularQuadradoPorSomaDeImpares(numero);
    printf("O quadrado de %i é %i.\n", numero, quadrado);

    return 0;
}
