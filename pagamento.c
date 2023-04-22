#include <stdio.h>
#include <locale.h>
#include <string.h>

void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    char nome[50];
    double valor, salario;
    int horas;

    printf("Nome: ");
    ler_texto(nome, 50);

    printf("Valor por hora: ");
    scanf("%lf", &valor);

    printf("Horas trabalhadas: ");
    scanf("%d", &horas);

    salario = valor * horas;

    printf("O pagamento para %s deve ser R$%.2lf", nome, salario);

    return 0;

}

