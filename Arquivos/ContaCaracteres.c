#include <stdio.h>

int main( )
{
  FILE *fp;
  char ch;
  int pqtdecar = 0, qtdesp = 0, qtdtabs = 0, newline = 0;
  
  fp = fopen ("arquivo1.txt", "r");
  
  if (fp == NULL){
      
      printf ("Erro ao abrir o arquivo. \n");
      return 1;
  }

  // Conta a quantidade de caracteres 
  while ( 1 )
  {
    ch = fgetc(fp);
    if(ch==EOF)
      break;
    pqtdecar++;

    if (ch == ' '){
      qtdesp++;
    } 
    else if (ch == '\t'){
      qtdtabs++;
    }
    else if (ch == '\n'){
      newline++;
    }

    
  }


  
  
  fclose ( fp );
  printf("Quantidade de Caracteres: %d \n",pqtdecar);
  printf("Quantidade de Espaços: %d \n",qtdesp);
  printf("Quantidade de Tabs: %d \n",qtdtabs);
  printf("Quantidade de Newlines: %d \n", newline);
  
  
  return 0;
}