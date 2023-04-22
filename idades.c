#include <stdio.h>
#include <locale.h>
#include <string.h>

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int idade1, idade2;
    char nome1[50], nome2[50];
    double media;

    printf("Dados da primeira pessoa: ");
    printf("\nNome: ");
    ler_texto(nome1, 50);
    //fgets(nome1, 50, stdin);
    //strtok(nome1, "\n"); //Evita que ele armazene na variável a quebra de linha
    printf("Idade: ");
    scanf("%d", &idade1);

    printf("\nDados da segunda pessoa: ");
    printf("\nNome: ");
    limpar_entrada();
    ler_texto(nome2, 50);
    printf("Idade: ");
    scanf("%d", &idade2);

    media = (double) (idade1 + idade2) / 2;

    printf("A média de idades entre %s e %s é de %.2lf", nome1, nome2, media);




    return 0;
}
