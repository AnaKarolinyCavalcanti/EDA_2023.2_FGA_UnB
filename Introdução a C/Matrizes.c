#include <stdio.h>

int mat [2][2];

int main (){

    for (int i=0; i < 2; i++){

        for (int j = 0; j < 2; j++){

            printf ("Digite um número: ");
            scanf ("%d", &mat[i][j]);  

        }
    }

    for (int i=0; i < 2; i++){

        for (int j = 0; j < 2; j++){

            printf ("\n O valor de mat[%d][%d] = %d: ",i, j, mat[i][j]);  

        }
    }

    return 0;

}