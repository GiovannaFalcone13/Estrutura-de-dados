/* Fun��o: Aeroporto
 * Autor: Giovanna Falcone Vasconcellos Marques
 * Data: 19/05/2023
  */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char sigla[4];
    char cidade[51];
    char pais[31];
    float taxa;
    int capacidade;
} Aeroporto;


void lerAeroporto(Aeroporto *aeroporto) {
    printf("Sigla: ");
    scanf("%s", aeroporto->sigla);

    printf("Cidade: ");
    scanf(" %[^\n]", aeroporto->cidade);

    printf("Pais: ");
    scanf(" %[^\n]", aeroporto->pais);

    printf("Taxa: ");
    scanf("%f", &(aeroporto->taxa));

    printf("Capacidade: ");
    scanf("%d", &(aeroporto->capacidade));
}


void escreverAeroporto(Aeroporto *aeroporto) {
    printf("Sigla: %s\n", aeroporto->sigla);
    printf("Cidade: %s\n", aeroporto->cidade);
    printf("Pais: %s\n", aeroporto->pais);
    printf("Taxa: %.2f\n", aeroporto->taxa);
    printf("Capacidade: %d\n", aeroporto->capacidade);
}

void excluirAeroporto(Aeroporto *aeroportos[], int *num_aeroportos, int indice) {
    if (indice < 0 || indice >= *num_aeroportos) {
        printf("�ndice inv�lido\n");
        return;
    }

    free(aeroportos[indice]); 


    for (int i = indice; i < *num_aeroportos - 1; i++) {
        aeroportos[i] = aeroportos[i + 1];
    }

    (*num_aeroportos)--; 
}

int main() {
    int num_aeroportos;

    printf("Digite o n�mero de aeroportos: ");
    scanf("%d", &num_aeroportos);

    
    Aeroporto **vetor_aeroportos = (Aeroporto **)malloc(num_aeroportos * sizeof(Aeroporto *));

 
    for (int i = 0; i < num_aeroportos; i++) {
        printf("\nDigite os dados do aeroporto %d:\n", i + 1);
        Aeroporto *novo_aeroporto = (Aeroporto *)malloc(sizeof(Aeroporto));
        lerAeroporto(novo_aeroporto);
        vetor_aeroportos[i] = novo_aeroporto;
    }

    printf("\nDados dos aeroportos:\n");
    for
