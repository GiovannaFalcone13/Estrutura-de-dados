/* Fun��o: Newton-Raphson
 * Autor: Giovanna Falcone Vasconcellos Marques
 * Data: 20/05/2023
  */
#include <stdio.h>
#include <math.h>

double squareRoot(double N) {
    double x0 = N; 
    double x1 = 0.0; 
    double epsilon = 0.0001; 

    while (1) {
        x1 = (x0 + N / x0) / 2;
        if (fabs(x1 - x0) < epsilon) {
            break; 
        }
        x0 = x1;
    }

    return x1;
}

int main() {
    double number;

    printf("Digite um n�mero: ");
    scanf("%lf", &number);

    if (number < 0) {
        printf("N�mero inv�lido. A raiz quadrada s� pode ser calculada para n�meros n�o negativos.\n");
    } else {
        double square_root = squareRoot(number);
        printf("Raiz quadrada de %.2lf � %.4lf\n", number, square_root);
    }

    return 0;
}
