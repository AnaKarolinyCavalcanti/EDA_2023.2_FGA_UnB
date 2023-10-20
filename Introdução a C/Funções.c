/*Este programa é uma mini calculadora que faz soma e subtração com números inteiros*/
#include <stdio.h>

int soma(int a, int b)
{

    int s = a + b;
    return s;
}

int sub(int a, int b)
{

    int s = a - b;
    return s;
}

int main()
{

    int n1, n2, op, res;
    int fim = 0;

    while (fim == 0)
    {
        printf("Digite um valor: ");
        scanf("%d", &n1);

        printf("Digite um valor: ");
        scanf("%d", &n2);

        printf("Escolha uma operação: \n 1- Adição \n 2 - 0Subtração \n");
        scanf("%d", &op);

        if (op == 1)
        {
            res = soma(n1, n2);
        }

        if (op == 2)
        {
            res = sub(n1, n2);
        }

        printf ("O resultado é: %d \n", res);

        printf ("0 - Continuar \n 1 - Parar \n");
        scanf ("%d", &fim);
    }

    return 0;
}