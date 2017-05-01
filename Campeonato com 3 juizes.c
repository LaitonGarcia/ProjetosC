#include <stdio.h>
#include <locale.h>
#include <string.h>
main(){
     setlocale(LC_ALL,"");
     system("title Análise da Competição Atlética");
     int  numAtletas, identificacao, x, y, idade, tecla, contF=0, contM=0, contMediaSuperior8, idadeMelhor, identMelhor;
     char sexo, nome[50], sexoMelhor, nomeMelhor[50];
	 float nota, media, mediaSuperior8, mediaGeral, maiorMedia;
	 do{
		 system("cls");
		 printf ("Quantos atletas irão participar dessa prova? ==> "); scanf("%d",&numAtletas);
		 mediaGeral = 0;
		 contMediaSuperior8 = 0;
		 for (x = 1; x <= numAtletas; x++){
		 	  media = 0;
		 	  maiorMedia = -9999;
			  printf("\nInforme a seguir os dados do %dº de %d Atletas da Competição\n",x,numAtletas);
		 	  identificacao = x;
			  printf("\nNº de identificação: %d\n", identificacao);
			  printf("\nNome: "); fflush(stdin); gets(nome);
         	  do{
         		  printf("\nSexo (M-Masculino F-Feminino): ");fflush(stdin);scanf("%c",&sexo);
         	  }while (!(tolower(sexo) == 'm' || tolower(sexo) == 'f'));
         	  printf("\nIdade: ");scanf("%d",&idade); 
         	  if (tolower(sexo) == 'm') contM++; else contF++;
         	  printf("\nInfome a nota de cada um dos 3 juízes da prova\n");
         	  for (y = 1; y <= 3; y++){
         	 	do{
         	 		printf("\n%dª nota: ",y);scanf("%f",&nota);
         	 	}while (nota<0 || nota>10);
         	 	media += nota;
        	  }
        	  media/=3;
        	  if (media > 8) contMediaSuperior8++;
              if (media > maiorMedia) {
             	   maiorMedia = media;
             	   strcpy(nomeMelhor,nome);
             	   idadeMelhor = idade;
             	   sexoMelhor = sexo;
             	   identMelhor = identificacao;
              }
        	  printf("\nMédia de %s nessa competição: %.1f pontos\n\n",nome,media);
              mediaGeral += media;
         }
		 printf("\nForam informados os dados de %d Atletas",numAtletas);
		 printf("\n\n%.1f%% dos atletas são do sexo Feminino e %.1f%% do sexo Masculino",(float)contF*100/numAtletas,(float)contM*100/numAtletas);
    	 printf("\n\n%d atletas tiveram média superior a 8 pontos",contMediaSuperior8);
		 printf("\n\nAtleta de melhor desempenho");
		 printf("\nIdentificação: %d\nNome: %s\nSexo: %c\nIdade: %d\nMédia da competição: %5.2f",identMelhor, nomeMelhor,sexoMelhor,idadeMelhor,maiorMedia);
    	 printf("\n\nA média das médias dos atletas = %.1f pontos",mediaGeral/numAtletas);
		 printf("\n\n\nPressione ESC para encerrar\n\n");
         fflush(stdin); tecla = getch();
	}while (tecla != 27);
}






