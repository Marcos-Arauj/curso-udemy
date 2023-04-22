#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    double raio, area;

    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &raio);

    area = M_PI * pow(raio, 2); //M_PI = Pi

    printf("AREA = %.3lf", area);

    return 0;
}
