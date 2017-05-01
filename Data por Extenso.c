// 3ª lista de Exercícios - questão 3 - letra c
#include <stdio.h>
#include <locale.h>
main(){
      setlocale(LC_ALL,"");
      system("title Data por Extenso");
      
	  int dia, mes, ano, diaSemana; 
	  //variáveis auxiliares
	  int m; // Numero do mes.
      int a; // Dois ultimos algarismos do ano.
      int s; // Dois primeiros algarismos do ano. 
      
      printf("Digite todos os dados de uma data a seguir: ");
      printf("Dia (1-31): ");scanf("%d",&dia);
      printf("Mês (1-12): ");scanf("%d",&mes);
	  printf("Ano: ");scanf("%d",&ano);      
      s = ano / 100; // Dois primeiros algarismos do ano.
      a = ano % 100; // Dois ultimos algarismos do ano.
      if(mes <= 2){ m = mes + 10; a = a - 1;}else m = mes - 2;
      // Fomula para calculo do dia da semana para qualquer data informada
      diaSemana = (int)(2.6 * m - 0.1) + dia + a + (a / 4) + (s / 4) - 2 * s;      
      diaSemana %= 7;
      if(diaSemana < 0) diaSemana += 7;
      switch(diaSemana){
      	case 0:printf("\n Floriano(PI), Domingo: "); break;                          
      	case 1:printf("\n Floriano(PI), Segunda-feira: "); break;
        case 2:printf("\n Floriano(PI), Terça-feira: "); break;
        case 3:printf("\n Floriano(PI), Quarta-feira: "); break;
        case 4:printf("\n Floriano(PI), Quinta-feira: "); break;
        case 5:printf("\n Floriano(PI), Sexta-feira: "); break;
        case 6:printf("\n Floriano(PI), Sábado: "); break;
      }
      switch(mes){
      	case 1:printf(" %d de Janeiro de %d \n",dia,ano);break;
      	case 2:printf(" %d de Fevereiro de %d \n",dia,ano);break;
      	case 3:printf(" %d de Março de %d \n",dia,ano);break;
      	case 4:printf(" %d de Abril de %d \n",dia,ano);break;
      	case 5:printf(" %d de Maio de %d \n",dia,ano);break;
      	case 6:printf(" %d de Junho de %d \n",dia,ano);break;
      	case 7:printf(" %d de Julho de %d \n",dia,ano);break;
      	case 8:printf(" %d de Agosto de %d \n",dia,ano);break;
      	case 9:printf(" %d de Setembro de %d \n",dia,ano);break;
      	case 10:printf(" %d de Outubro de %d \n",dia,ano);break;
      	case 11:printf(" %d de Novembro de %d \n",dia,ano);break;
      	case 12:printf(" %d de Dezembro de %d \n",dia,ano);break;
      }  
	  getch();      
} 
