/*Uso do scanf
Exemplo Lê e Mostra Idade*/

#include <stdio.h>

int main (){
    int idade;
    char nome [30];

    printf ("Digite sua idade: ");
    scanf ("%d", &idade);

    printf ("Seu Nome: ");
    scanf ("%s", nome); //Strings não utilizam '&' na leitura
    
    printf ("%s, sua idade é %d anos. \n", nome, idade); //%s apenas lê um único nome
    return 0;
}
