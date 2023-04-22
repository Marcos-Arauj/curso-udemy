#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    double preco, quantidade, valor, troco;

    printf("Preço unitário do produto: R$");
    scanf("%lf", &preco);
    printf("Quantidade comprada: ");
    scanf("%lf", &quantidade);
    printf("Dinheiro recebido: R$");
    scanf("%lf", &valor);

    troco = valor - (preco * quantidade);

    printf("TROCO = R$%.2lf", troco);

    return 0;
}
