#include <stdio.h>

int main () {

    int a, b, c;

    printf("Digite um número: ");
    scanf("%d",&a);
    printf("Digite digite outro número: ");
    scanf("%d",&b);
    printf("Digite mais um número: ");
    scanf("%d",&c);

    if (a==b && b==c)
    {    
        printf("As variáveis a, b, c têm valores iguais.\n");
    }

    return 0;
}


 /*
    && é um cond. lógica. Obriga que todos os testes sejam verdadeiros: operador lógico AND.
    || Operador lógico OR: apenas uma condição precisa ser verdadeira. 
    ! Operador lógico NOT: inverte o valor lógico da operação.
 */