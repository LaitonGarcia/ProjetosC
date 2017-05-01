#include <stdio.h>
#include <locale.h>
#include <string.h>
main(){
       setlocale(LC_ALL,"");
       char nome[50][50],situacao[50][50];
       float media[50],pontos[50];
       int i=0,tecla=0,x=0;
       do{
       printf("\nInforme o nome do Aluno: ");gets(nome[i]);
       printf("Informe a média geral do %s em Algorítmo & Programação: "); scanf("%f",&media[i]);
       if (media[i]>=7&&media[i]<=10) 
          strcpy(situacao[i],"Aprovado");else{
          strcpy(situacao[i],"Reprovado");
          pontos[i]=7-media[i];}    
       
       i++;
       printf("Pressione ESC para encerrar");fflush(stdin);tecla=getch();
       system("cls");
       }while(tecla!=27&&i<50);
       x=i;
       for(i=0;i<x;i++){
       if (media[i]<7)
       printf("\nO Aluno %s \nPossui média %.2f \nSituação %s \nNecessita de %.2f pontos para ser Aprovado\n", nome[i],media[i],situacao[i],pontos[i]);
       else
       printf("\n\nO Aluno %s\nPossui média %.2f \nSituação %s ", nome[i],media[i],situacao[i]);                  
       }
       
       
       getch();
       }
