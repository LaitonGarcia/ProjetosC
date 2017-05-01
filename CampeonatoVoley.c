#include <stdio.h>
#include <locale.h>
main(){
     setlocale(LC_ALL,"");
     system("title Estatísticas do Campeonato de Vôley");
     int  idade, contTimes, contAtletas, quantMenor18, tecla;
	 float peso, altura,mediaIdadeTime, porcentagemMais170m;
	 do{
	     quantMenor18 = 0;
	     porcentagemMais170m = 0;
         system("cls");
         for(contTimes=1; contTimes <= 2; contTimes++){// deve ser ate 5 (5 times)
             printf("\n\nInformações do %dº time",contTimes);
             mediaIdadeTime = 0;
             for (contAtletas=1;contAtletas <= 2; contAtletas++){ //deve ser ate 6  (6 jogadores)
                  printf("\nInforme os dados do %dº jogador",contAtletas);
                  printf("\nIdade ........: ");scanf("%d",&idade);
				  printf("\nPeso (Kg).....: ");scanf("%f",&peso);                  
                  printf("\nAltura (m)....: ");scanf("%f",&altura);
                  if (idade < 18) quantMenor18 ++;
				  mediaIdadeTime += idade;
				  if (altura > 1.70) porcentagemMais170m ++;
			 }
			 printf("\nA média de idade desse time = %.0f anos",mediaIdadeTime/2);  
			 //deve ser dividido por 6 (6 jogadores)
        }
		printf("\nA quantidade de jogadores com idade inferior a 18 anos: %d",quantMenor18);
		printf("\nA porcentagem de jogadores com mais de 1,70m de altura: %.2f%%",porcentagemMais170m * 100 / 4); 
		//deve ser dividido por 30 ( 5 x 6)
        printf("\n\nPressione qualquer tecla para\nCalcular Estatísticas de outro Campeonato de Vôlei");
        printf("\n ou pressione ESC para encerrar\n\n");
        fflush(stdin); tecla = getch();
	}while (tecla != 27);
}
