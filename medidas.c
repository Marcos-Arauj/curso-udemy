#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    //Ler as três medidas A, B, e C:

    double A, B, C, quadrado, triangulo, trapezio;

    printf("Digite a medida A: ");
    scanf("%lf", &A);
    printf("Digite a medida B: ");
    scanf("%lf", &B);
    printf("Ditigite a medida C: ");
    scanf("%lf", &C);

    //a)a área do quadrado que tem lado A

    quadrado = pow(A, 2);

    printf("AREA DO QUADRADO = %.4lf", quadrado);

    //b)a área do triângulo retângulo que base A e altura B

    triangulo = (A * B) / 2;

    printf("\nAREA DO TRIÂNGULO = %.4lf", triangulo);

    //c)a área do trapézio que tem bases A e B, e altura C

    trapezio = ((A + B) * C) / 2;

    printf("\nAREA DO TRAPÉZIO = %.4lf", trapezio);

    return 0;
}
