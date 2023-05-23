/* Fun��o: numero n
 * Autor: Giovanna Falcone Vasconcellos Marques
 * Data: 19/05/2023
  */
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int num;

    printf("Digite um n�mero inteiro maior que 2: ");
    scanf("%d", &num);

    if (num <= 2) {
        printf("N�mero inv�lido!\n");
        return 0;
    }

    for (int par = 4; par <= num; par += 2) {
        printf("N�mero par: %d\n", par);
        printf("Primos correspondentes: ");

        for (int i = 2; i <= par / 2; i++) {
            if (isPrime(i) && isPrime(par - i)) {
                printf("%d + %d ", i, par - i);
            }
        }

        printf("\n\n");
    }

    return 0;
}
