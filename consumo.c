#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int distancia;
    double combustivel, consumo;

    printf("Distância percorrida: ");
    scanf("%d", &distancia);

    printf("Combustível gasto: ");
    scanf("%lf", &combustivel);

    consumo = distancia / combustivel;

    printf("Consumo médio = %.3lf", consumo);

    return 0;
}
