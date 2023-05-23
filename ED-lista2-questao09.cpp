/* Fun��o: BubbleSort
 * Autor: Giovanna Falcone Vasconcellos Marques
 * Data: 21/05/2023
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int arr[], int size, int* numIfs, int* numTrocas) {
    int i, j;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            (*numIfs)++;

            if (arr[j] > arr[j + 1]) {
                (*numTrocas)++;

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size, i;
    int numIfs = 0, numTrocas = 0;

    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &size);

    int* vetor = (int*)malloc(size * sizeof(int));

    srand(time(NULL));
    for (i = 0; i < size; i++) {
        vetor[i] = rand() % 100;
    }

    printf("Vetor original: ");
    for (i = 0; i < size; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    bubbleSort(vetor, size, &numIfs, &numTrocas);

    printf("Vetor ordenado: ");
    for (i = 0; i < size; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("N�mero de ifs realizados: %d\n", numIfs);
    printf("N�mero de trocas realizadas: %d\n", numTrocas);

    free(vetor);

    return 0;
}

