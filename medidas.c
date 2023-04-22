#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    //Ler as tr�s medidas A, B, e C:

    double A, B, C, quadrado, triangulo, trapezio;

    printf("Digite a medida A: ");
    scanf("%lf", &A);
    printf("Digite a medida B: ");
    scanf("%lf", &B);
    printf("Ditigite a medida C: ");
    scanf("%lf", &C);

    //a)a �rea do quadrado que tem lado A

    quadrado = pow(A, 2);

    printf("AREA DO QUADRADO = %.4lf", quadrado);

    //b)a �rea do tri�ngulo ret�ngulo que base A e altura B

    triangulo = (A * B) / 2;

    printf("\nAREA DO TRI�NGULO = %.4lf", triangulo);

    //c)a �rea do trap�zio que tem bases A e B, e altura C

    trapezio = ((A + B) * C) / 2;

    printf("\nAREA DO TRAP�ZIO = %.4lf", trapezio);

    return 0;
}
