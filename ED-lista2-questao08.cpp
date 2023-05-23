/* Fun��o: Complexo
 * Autor: Giovanna Falcone Vasconcellos Marques
 * Data: 20/05/2023
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    double real;
    double imaginario;
} Complexo;

Complexo* criarComplexo(double real, double imaginario) {
    Complexo* complexo = (Complexo*)malloc(sizeof(Complexo));
    complexo->real = real;
    complexo->imaginario = imaginario;
    return complexo;
}

void destruirComplexo(Complexo* complexo) {
    free(complexo);
}

Complexo* lerComplexo() {
    double real, imaginario;
    printf("Digite a parte real: ");
    scanf("%lf", &real);
    printf("Digite a parte imagin�ria: ");
    scanf("%lf", &imaginario);
    return criarComplexo(real, imaginario);
}

Complexo* somarComplexo(Complexo* c1, Complexo* c2) {
    double real = c1->real + c2->real;
    double imaginario = c1->imaginario + c2->imaginario;
    return criarComplexo(real, imaginario);
}

Complexo* subtrairComplexo(Complexo* c1, Complexo* c2) {
    double real = c1->real - c2->real;
    double imaginario = c1->imaginario - c2->imaginario;
    return criarComplexo(real, imaginario);
}

Complexo* multiplicarComplexo(Complexo* c1, Complexo* c2) {
    double real = c1->real * c2->real - c1->imaginario * c2->imaginario;
    double imaginario = c1->real * c2->imaginario + c1->imaginario * c2->real;
    return criarComplexo(real, imaginario);
}

Complexo* dividirComplexo(Complexo* c1, Complexo* c2) {
    double denominador = c2->real * c2->real + c2->imaginario * c2->imaginario;
    double real = (c1->real * c2->real + c1->imaginario * c2->imaginario) / denominador;
    double imaginario = (c1->imaginario * c2->real - c1->real * c2->imaginario) / denominador;
    return criarComplexo(real, imaginario);
}

void mostrarComplexo(Complexo* complexo) {
    printf("(%.2f, %.2f)\n", complexo->real, complexo->imaginario);
}

int main() {
    Complexo* c1 = lerComplexo();
    Complexo* c2 = lerComplexo();

    Complexo* soma = somarComplexo(c1, c2);
    printf("Soma: ");
    mostrarComplexo(soma);

    Complexo* subtracao = subtrairComplexo(c1, c2);
    printf("Subtra��o: ");
    mostrarComplexo(subtracao);

    Complexo* multiplicacao = multiplicarComplexo(c1, c2);
    printf("Multiplica��o: ");
    mostrarComplexo(multiplicacao);

    Complexo* divisao = dividirComplexo(c1, c2);
    printf("Divis�o: ");
    mostrarComplexo(divisao);

    destruirComplexo(c1);
    destruirComplexo(c2);
    destruirComplexo(soma);
    destruirComplexo(subtracao);
   

