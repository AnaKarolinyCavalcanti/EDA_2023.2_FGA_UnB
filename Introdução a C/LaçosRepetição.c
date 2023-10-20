#include <stdio.h>

int main (){

printf("\nLaço WHILE\n");

int a = 0;

while (a < 5)
{

    printf ("A variável a é: %d \n", a);
    a++; // a = a + 1

}

printf ("\nLaço FOR\n");


    // for (inicialização; teste; incremento;)

    for (int i =0; i<4; i++)
    {
       
        printf ("A variável i é: %d \n", i);

    }

    return 0;
}

/*Os laços de repetição em C são: while e for*/