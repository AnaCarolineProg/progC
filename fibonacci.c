#include <stdio.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num1 = 1, num2 = 1, n, proxTermo;

    // Solicita ao usu�rio o valor de n
    printf("Digite um valor inteiro (n >= 3): ");
    scanf("%d", &n);

    // Verifica se o valor de n � v�lido
    if (n < 3) {
        printf("Valor inv�lido! Digite um n�mero maior ou igual a 3.\n");
    } else {
        // Calcula os pr�ximos termos da s�rie at� alcan�ar o n-�simo termo
        for (int i = 3; i <= n; i++) {
            proxTermo = num1 + num2;

            // Atualiza os valores de num1 e num2 para o pr�ximo c�lculo
            num1 = num2;
            num2 = proxTermo;
        }

        // Exibe o n-�simo termo da s�rie de Fibonacci
        printf("O %d-�simo termo da s�rie de Fibonacci �: %d\n", n, proxTermo);
    }

    return 0;
}
