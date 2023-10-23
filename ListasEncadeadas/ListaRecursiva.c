#include <stdio.h>
#include <stdlib.h> //malloc 

//listas tem dinamicidade na adição/remoção de elementos;

struct ponto
{
    float x, y;
    struct ponto *prox;
};

typedef struct ponto Ponto;

Ponto *listaPontos; //aponta para o primeiro elemento da

void add (float x, float y){

    Ponto *p = (Ponto*) malloc (sizeof (Ponto));
    p -> x = x; 
    p -> y = y;
    p -> prox = listaPontos;
    listaPontos = p;

}

//Temos agora uma função de impressão, que funciona de forma recursiva. Não precisa mais do laço WHILE. 
void imprime (Ponto *p){

    if (p != NULL){

        printf ("\nPonto(%.1f, S%.1f)", p ->x, p -> y);
        imprime (p -> prox);
    }
   
}

int main (){

    add (1,5);
    add (2,7);
    add (5,3);

    Ponto *auxLista = listaPontos;
    imprime (auxLista);


    return 0; 
}