#include <stdio.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num1 = 1, num2 = 1, n, proxTermo;

    // Solicita ao usuário o valor de n
    printf("Digite um valor inteiro (n >= 3): ");
    scanf("%d", &n);

    // Verifica se o valor de n é válido
    if (n < 3) {
        printf("Valor inválido! Digite um número maior ou igual a 3.\n");
    } else {
        // Calcula os próximos termos da série até alcançar o n-ésimo termo
        for (int i = 3; i <= n; i++) {
            proxTermo = num1 + num2;

            // Atualiza os valores de num1 e num2 para o próximo cálculo
            num1 = num2;
            num2 = proxTermo;
        }

        // Exibe o n-ésimo termo da série de Fibonacci
        printf("O %d-ésimo termo da série de Fibonacci é: %d\n", n, proxTermo);
    }

    return 0;
}
