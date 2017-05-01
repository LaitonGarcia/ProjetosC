#include <stdio.h>
#include <locale.h>
#include <string.h>
main(){
     setlocale(LC_ALL,"");
     system("title Análise dos alunos de TADS I em Algoritmos e Programação");
     int  x=0, anoNascimento, idade, tecla, contF=0, contM=0;
     int idadeMaisVelho = -999, idadeMaisNovo = 999, anoNascMaisVelho, anoNascMaisNovo, anoMelhor, anoPior;
     char sexo, nome[50], sexoMaisVelho, sexoMaisNovo, nomeMaisVelho[50], nomeMaisNovo[50], sexoMelhor, sexoPior, nomeMelhor[50], nomePior[50];
	 float media, mediaMaisVelho, mediaMaisNovo, mediaMelhor = -999, mediaPior = 999;
	 do{
		 system("cls");
         printf("\nInforme a seguir os dados do %dº Aluno da Turma\n",++x);
         printf("\nNome: ");gets(nome);
         do{
         	printf("\nSexo (M-Masculino F-Feminino): ");fflush(stdin);scanf("%c",&sexo);
         }while (!(tolower(sexo) == 'm' || tolower(sexo) == 'f'));
         if (tolower(sexo) == 'm') contM++; else contF++;
         do{
         	printf("\nMédia em Algoritmos e Programação: ");scanf("%f",&media);
         }while (media<0 || media>10);
         printf("\nAno de Nascimento: ");scanf("%d",&anoNascimento); idade = 2013 - anoNascimento;
         if (idade > idadeMaisVelho){
         	idadeMaisVelho = idade;
         	anoNascMaisVelho = anoNascimento;
         	sexoMaisVelho = sexo;
         	mediaMaisVelho = media;
         	strcpy(nomeMaisVelho,nome);
         }
         if (idade < idadeMaisNovo){
         	idadeMaisNovo = idade;
         	anoNascMaisNovo = anoNascimento;
         	sexoMaisNovo = sexo;
         	mediaMaisNovo = media;
         	strcpy(nomeMaisNovo,nome);
         }
         if (media > mediaMelhor){
         	mediaMelhor = media;
         	anoMelhor = anoNascimento;
         	sexoMelhor = sexo;
         	strcpy(nomeMelhor,nome);
         }
         if (media < mediaPior){
         	mediaPior = media;
         	anoPior = anoNascimento;
         	sexoPior = sexo;
         	strcpy(nomePior,nome);
         }
		 printf("\n\n\nPressione ESC para encerrar\n\n");
         fflush(stdin); tecla = getch();
	}while (tecla != 27);
	system("cls");
	printf("\nForam informados os dados de %d alunos",x);
	printf("\n\n%.1f%% dos alunos são do sexo Feminino e %.1f%% do sexo Masculino",(float)contF*100/x,(float)contM*100/x);
    printf("\n\nAluno mais jovem da turma");
	printf("\nNome: %s\nSexo: %c\nAno de Nascimento: %d\nMédia: %5.2f",nomeMaisNovo,sexoMaisNovo,anoNascMaisNovo,mediaMaisNovo);
	printf("\n\nAluno mais velho da turma");
	printf("\nNome: %s\nSexo: %c\nAno de Nascimento: %d\nMédia: %5.2f",nomeMaisVelho,sexoMaisVelho,anoNascMaisVelho,mediaMaisVelho);
    printf("\n\nAluno de melhor média da turma");
	printf("\nNome: %s\nSexo: %c\nAno de Nascimento: %d\nMédia: %5.2f",nomeMelhor,sexoMelhor,anoMelhor,mediaMelhor);
	printf("\n\nAluno de pior média da turma");
	printf("\nNome: %s\nSexo: %c\nAno de Nascimento: %d\nMédia: %5.2f",nomePior,sexoPior,anoPior,mediaPior);	
	getch();
}






