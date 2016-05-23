#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    
    int i, j;
    float nota[30], troca;
    char nome[30][30]; 
    char troca2[30];
    //introdução//
    printf("Olá, meu nome é Matheus Tostes\n");

    //le o nome do aluno e a sua nota//
    for(i=0;i<=29;i++)
    {
        printf("Entre com o nome do aluno %d: ", i+1);
        scanf("%s", nome[i]);
        printf("entre com a nota do %s: ", nome[i]);
        scanf("%f", &nota[i]);
    }
    //ordem decrescente//
    for(i=0;i<=29;i++ )
    {
        for(j=i+1;j<=29;j++) 
        {
          if ( nota[j] > nota[i] )
          {
             troca = nota[j];
             nota[j] = nota[i];
             nota[i] = troca;
             
             strcpy(troca2, nome[j]);
             strcpy(nome[j], nome[i]);
             strcpy(nome[i], troca2);
          }
        } 
    }
    

    
    printf("NOME DO ALUNO\t\tNOTAS\n");
    printf("_____________________________\n");
    
    for(i=0;i<=29;i++)
    {
        printf("%s\t\t\t%.2f\n\n", nome[i], nota[i]);
    }
    
}