#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int seg, min, hora, resto;

    printf("Digite a dura��o em segundos: ");
    scanf("%d", &seg);

    hora = seg / 3600;
    resto = seg % 3600;
    min = resto / 60;
    seg = resto % 60;

    printf("%d:%d:%d", hora, min, seg);

    return 0;
}
