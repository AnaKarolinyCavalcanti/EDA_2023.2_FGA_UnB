#include <stdio.h>

float nota1, nota2, nota3, media;

int main (){

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    media = (nota1+nota2+nota3)/3;

    printf("a média é: %.2f \n", media);

    return 0;
}   

