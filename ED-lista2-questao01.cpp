/* Fun��o: Classifica��o por sele��o
 * Autor: Giovanna Falcone Vasconcellos Marques
 * Data: 19/05/2023
 */
#include <stdio.h>

void selectionSort(int vetor[], int tamanho);
void imprimirVetor(int vetor[], int tamanho);

void selectionSort(int vetor[], int tamanho) {
    int i, j, indice_minimo, temp;
    for (i = 0; i < tamanho - 1; i++) {
        indice_minimo = i;
        for (j = i + 1; j < tamanho; j++) {
            if (vetor[j] < vetor[indice_minimo]) {
                indice_minimo = j;
            }
        }
        temp = vetor[i];
        vetor[i] = vetor[indice_minimo];
        vetor[indice_minimo] = temp;
    }
}

void imprimirVetor(int vetor[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int vetor[] = {9, 5, 7, 3, 1, 8, 2, 4, 6};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("Vetor original: ");
    imprimirVetor(vetor, tamanho);

    selectionSort(vetor, tamanho);

    printf("Vetor ordenado: ");
    imprimirVetor(vetor, tamanho);

    return 0;
}
