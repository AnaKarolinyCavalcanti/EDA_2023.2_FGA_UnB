#include <stdio.h>

int a = 5;
float num = 2.5;

/* existe ainda a variável double, que faz a mesma coisa que o float, porém com o dobro de precisão.
é usadada em alguns casos particulares, porém é ocupa mais memória. */

int main () {

printf ("O valor da variável a é: %d\n", a);
printf ("O valor da variável num é: %.2f\n", num);

return 0;

}