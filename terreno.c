#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");
    
    double largura, comprimento, area, valor, preco;
    
    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);
	
	printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);
    
    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &valor);
    
    area = largura * comprimento;
    preco = valor * area;
    
    printf("Area do terreno = %.2lf", area);
    printf("\nPreço do terreno = %.2lf", preco);
    
    
    return 0;
}
