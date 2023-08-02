#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n, fatorial = 1;

    // Solicita ao usu�rio um n�mero inteiro n�o negativo
    printf("Digite um n�mero inteiro n�o negativo: ");
    scanf("%d", &n);

    // Verifica se o n�mero � n�o negativo
    if (n < 0) {
        printf("Valor inv�lido! Digite um n�mero inteiro n�o negativo.\n");
    } else {
        // Calcula o fatorial usando um loop for
        for (int i = 1; i <= n; i++) {
            fatorial *= i;
        }

        // Exibe o resultado do fatorial
        printf("O fatorial de %d �: %d\n", n, fatorial);
    }

    return 0;
}
