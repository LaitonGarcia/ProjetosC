// 3� lista de Exerc�cios - quest�o 3 - letra g
#include <stdio.h>
#include <string.h>
#include <locale.h>
main(){
      setlocale(LC_ALL,"");
      system("title Sal�rio e Gratifica��o de Funcion�rio");
      
      char nome[50];
	  float numHorasTrab, valorHora, salario, gratificacao;
	  int numFilhos;
	  
	  printf("Informe a seguir os dados de um Funcion�rio:\n\nNome: ");scanf("%s",nome);
	  strcpy(nome,strupr(nome)); //convertendo o nome do funcion�rio em mai�sculo
	  printf("\nN� de horas trabalhadas por %s: ",nome);scanf("%f",&numHorasTrab);
	  printf("\nN� de filhos de %s: ",nome);scanf("%d",&numFilhos);
	  printf("\nValor da Hora de Trabalho de %s: ",nome);scanf("%f",&valorHora);
	  
	  salario = valorHora * numHorasTrab;
	  printf("\nO valor do salario de %s = R$ %.2f\n",nome,salario);
	  
	  if (numFilhos>3) gratificacao = salario * 0.03 * numFilhos;
	  else gratificacao = 0; 
	  printf("\nO valor da Gratifica��o de %s = R$ %.2f\n",nome,gratificacao);
	  
	  printf("\nO Sal�rio Bruto de %s = R$ %.2f\n",nome,salario+gratificacao);
	  
	  getch();
}
