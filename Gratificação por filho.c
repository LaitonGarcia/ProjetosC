// 3ª lista de Exercícios - questão 3 - letra g
#include <stdio.h>
#include <string.h>
#include <locale.h>
main(){
      setlocale(LC_ALL,"");
      system("title Salário e Gratificação de Funcionário");
      
      char nome[50];
	  float numHorasTrab, valorHora, salario, gratificacao;
	  int numFilhos;
	  
	  printf("Informe a seguir os dados de um Funcionário:\n\nNome: ");scanf("%s",nome);
	  strcpy(nome,strupr(nome)); //convertendo o nome do funcionário em maiúsculo
	  printf("\nNº de horas trabalhadas por %s: ",nome);scanf("%f",&numHorasTrab);
	  printf("\nNº de filhos de %s: ",nome);scanf("%d",&numFilhos);
	  printf("\nValor da Hora de Trabalho de %s: ",nome);scanf("%f",&valorHora);
	  
	  salario = valorHora * numHorasTrab;
	  printf("\nO valor do salario de %s = R$ %.2f\n",nome,salario);
	  
	  if (numFilhos>3) gratificacao = salario * 0.03 * numFilhos;
	  else gratificacao = 0; 
	  printf("\nO valor da Gratificação de %s = R$ %.2f\n",nome,gratificacao);
	  
	  printf("\nO Salário Bruto de %s = R$ %.2f\n",nome,salario+gratificacao);
	  
	  getch();
}
