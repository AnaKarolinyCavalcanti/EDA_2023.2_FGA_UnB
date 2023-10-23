#include <stdio.h>

int *p;
int val = 5; 

int main (){

    p = &val;
    printf ("O valor apontado por 'p' é: %d\n", *p);

    return 0; 
}

//Quando precisarmos alocar memória dinamicamente são necessários os ponteiros.