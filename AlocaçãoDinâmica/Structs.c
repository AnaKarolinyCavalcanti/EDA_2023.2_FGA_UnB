#include <stdio.h>

struct pessoa
{
    int idade;
    float altura;
};

typedef  struct pessoa Pessoa; // comando 'typedef' define ou redefine nomes e/ou tipos de dados.

int main (){

    Pessoa p;
    p.idade = 5;
    p.altura = 1.65;

    printf ("A idade da pessoa é: %d", p.idade);
    printf ("\nA altura da pessoa é: %.2f\n", p.altura);

    return 0;
}