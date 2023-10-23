#include <stdio.h>
#include <string.h>

int namefilepointposition(char *fullname){
   int i;
   for(i=0;i<strlen(fullname);i++){
       if(fullname[i]=='.')
        break;
   } 
   if(i>=strlen(fullname))
        return -1;
    else
        return i;
}

int word2vec(char *pNomeTxtEntrada){
    FILE *arqent, *arqsaida;
    char nomarq[40];
    int pointidx = namefilepointposition(pNomeTxtEntrada);
    int pp;
//Generating Output filename    
    if(pointidx>=0){
        for(pp=0;pp<pointidx;pp++)
            nomarq[pp] = pNomeTxtEntrada[pp];
        nomarq[pp] = '\0';//End of string
    }
    else
        strcpy(nomarq,  pNomeTxtEntrada);
        
    strcat(nomarq,  "_Vocabulo");
    strcat(nomarq,  ".txt");

    printf("\nArquivo de entrada: %s\n", pNomeTxtEntrada);
    
    arqent = fopen(pNomeTxtEntrada, "r");
    if(arqent == NULL){
        printf("Nao foi possivel abrir o arquivo %s", pNomeTxtEntrada);
        return 0;
    }

    arqsaida = fopen("saidaPreliminar.txt", "w");
    if(arqsaida == NULL){
        printf("Nao foi possivel abrir o arquivo %s", pNomeTxtEntrada);
        return 0;
    } 

    while(!feof(arqent)){
        char word[40];
        fscanf(arqent, "%s" , word);

        if(strlen(word) > 4){
            for(int i = 0; i < strlen(word); i++){
            if(word[i] == ',') word[i] = ' ';
            else if(word[i] == '.' || word[i] == '!' || word[i] == '?') word[i] = '\0';
            else if(word[i] >= 'A' && word[i] <= 'Z') word[i] += 32;
            }
            fprintf(arqsaida, "%s\n", word);
        }
    }
    fclose(arqent);
    fclose(arqsaida);

    FILE *finalFile;
    printf("\nRecebi no nome do arquivo: %s", nomarq);

    arqsaida = fopen("saidaPreliminar.txt", "r");
    if(arqsaida == NULL){
        printf("Nao foi possivel abrir o arquivo saidaPreliminar.txt");
        return 0;
    } 

    finalFile = fopen(nomarq, "w");
    if(finalFile == NULL){
        printf("Nao foi possivel abrir o arquivo %s", nomarq);
        return 0;
    }
    char word[40];
    int count = 0;
    char word2[40];
    
    while(!feof(arqsaida)){    
        fscanf(arqsaida, "%s" , word);
        //fseek;
        //fpos_t;// Endereço do ponteiro de arquivo
        printf("procurando a %s", word);

        while(!feof(arqsaida)){
            fscanf(arqsaida, "%s" , word2);
            printf("comparando com %s", word2);
            if(strcmp(word, word2) == 0) count++;
        }
        printf("achei %d vezes\n", count);
        if(count == 0){
            fprintf(finalFile, "%s\n", word);
        }

        count = 0;
    }

    return 1;
}


int main()
{
    char nomearq[30];
    printf("Entre com nome do arquivo:");
    scanf("%s",nomearq);
    if (!word2vec(nomearq))
        printf("\nErro na geração do vocábulo!");
    else
        printf("\nGerei o vocábulo!");
    

    return 0;
}