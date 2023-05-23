/* Fun��o: Conjectura de Goldbach
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
    int inicio = 700;
    int fim = 1100;

    if (inicio % 2 != 0) {
        inicio++; 
    }

    for (int num = inicio; num <= fim; num += 2) {
        printf("Numero par: %d\n", num);
        printf("Primos correspondentes: ");

        for (int i = 2; i <= num / 2; i++) {
            if (isPrime(i) && isPrime(num - i)) {
                printf("%d + %d ", i, num - i);
            }
        }

        printf("\n\n");
    }

    return 0;
}
