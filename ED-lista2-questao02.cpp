/* Fun��o: Empregados
 * Autor:Giovanna Falcone Vasconcellos Marques
 * Data: 19/05/2023
  */
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    char data_nascimento[20];
    char RG[20];
    char data_admissao[20];
    float salario;
} Empregado;

void lerEmpregado(Empregado *empregado) {
    printf("Nome: ");
    scanf("%s", empregado->nome);

    printf("Data de Nascimento: ");
    scanf("%s", empregado->data_nascimento);

    printf("RG: ");
    scanf("%s", empregado->RG);

    printf("Data de Admissao: ");
    scanf("%s", empregado->data_admissao);

    printf("Salario: ");
    scanf("%f", &(empregado->salario));
}

void escreverEmpregado(Empregado *empregado) {
    printf("Nome: %s\n", empregado->nome);
    printf("Data de Nascimento: %s\n", empregado->data_nascimento);
    printf("RG: %s\n", empregado->RG);
    printf("Data de Admissao: %s\n", empregado->data_admissao);
    printf("Salario: %.2f\n", empregado->salario);
}

int main() {
    int num_empregados;

    printf("Digite o n�mero de empregados: ");
    scanf("%d", &num_empregados);

    Empregado *vetor_empregados = (Empregado *)malloc(num_empregados * sizeof(Empregado));

    for (int i = 0; i < num_empregados; i++) {
        printf("\nDigite os dados do empregado %d:\n", i + 1);
        lerEmpregado(&vetor_empregados[i]);
    }

    printf("\nDados dos empregados:\n");
    for (int i = 0; i < num_empregados; i++) {
        printf("\nEmpregado %d:\n", i + 1);
        escreverEmpregado(&vetor_empregados[i]);
    }

    free(vetor_empregados);

    return 0;
}

