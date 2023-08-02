#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n, fatorial = 1;

    // Solicita ao usuário um número inteiro não negativo
    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &n);

    // Verifica se o número é não negativo
    if (n < 0) {
        printf("Valor inválido! Digite um número inteiro não negativo.\n");
    } else {
        // Calcula o fatorial usando um loop for
        for (int i = 1; i <= n; i++) {
            fatorial *= i;
        }

        // Exibe o resultado do fatorial
        printf("O fatorial de %d é: %d\n", n, fatorial);
    }

    return 0;
}
