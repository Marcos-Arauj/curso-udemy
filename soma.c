#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int x, y, result;

    printf("Digite o primeiro valor: ");
    scanf("%d", &x);
    printf("Digite o segundo valor: ");
    scanf("%d", &y);

    result = x + y;

    printf("RESULTADO DA SOMA = %d", result);

    return 0;
}
