#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int distancia;
    double combustivel, consumo;

    printf("Dist�ncia percorrida: ");
    scanf("%d", &distancia);

    printf("Combust�vel gasto: ");
    scanf("%lf", &combustivel);

    consumo = distancia / combustivel;

    printf("Consumo m�dio = %.3lf", consumo);

    return 0;
}
