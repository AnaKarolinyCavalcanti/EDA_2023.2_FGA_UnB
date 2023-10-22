#include <stdio.h>

//Diferentes formas de declarar vetores

int v[4];

float v1[3];

int main (){

    //Declarando vetores direto no código. int v[4]

    v[0] = 45;
    v[1] = 32;
    v[2] = 12;
    v[3] = 5;

    //Declarando vetores com 'for'. Usuário quem digita:

    for(int i = 0; i < 3; i++){

        printf ("Digite um valor: ");
        scanf ("%f", &v1[i]);
    }

    for(int i = 0; i < 3; i++){

        printf ("\n O valor de v1[%d] = %.1f", i, v1[i]);
    }

    return 0; 

}