// 3� lista de Exerc�cios - quest�o 3 - letra f
#include <stdio.h>
#include <string.h>
#include <locale.h>
main(){
      setlocale(LC_ALL,"");
      system("title Convers�o de Moedas em Reais");
      
      float quantia; char moeda;
      
      printf("Observe o menu e selecione a moeda para convers�o em Reais");
      printf("\nE - Euro\nL - Libra Esterlina\nD - D�lar\nI - Iene\n ===> ");
      scanf("%c",&moeda); 
	  //convertendo o valor informado em mai�sculo
	  moeda = toupper(moeda);
      printf("\nInforme a quantia para convers�o: "); scanf("%f",&quantia);
      switch(moeda){
      	case 'E': printf("\nEquivale a R$ %.2f\n",quantia * 2.617);break;
      	case 'L': printf("\nEquivale a R$ %.2f\n",quantia * 3.816);break;
      	case 'D': printf("\nEquivale a R$ %.2f\n",quantia * 2.071);break;
      	case 'I': printf("\nEquivale a R$ %.2f\n",quantia * 0.018);break;
      }
      getch();
  }
