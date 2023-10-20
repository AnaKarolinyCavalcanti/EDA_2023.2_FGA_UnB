#include <stdio.h>

int main( )
{
  FILE *fp;
  char ch;
  int pqtdecar = 0;
  
  fp = fopen ("arquivo1.txt", "r");
  
  if (fp == NULL){
      
      printf ("Erro ao abrir o arquivo. \n");
      return 1;
  }
  
  while ( 1 )
  {
    ch = fgetc(fp);
    if(ch==EOF)
      break;
    pqtdecar++;
  }
  
  fclose ( fp );
  printf("Quantidade de Caracteres: %d \n",pqtdecar);
  
  return 0;
}