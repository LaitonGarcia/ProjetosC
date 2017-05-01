// 3ª lista de Exercícios - questão 3 - letra i
#include <stdio.h>
#include <locale.h>
main(){
      setlocale(LC_ALL,"");
      system("title Verificando se Ano é Bissexto");
      
      int ano;
      
      printf("Informe o Ano: "); scanf("%d", &ano);
      
      if((ano%4==0 && ano%100!=0) || (ano%100==0 && ano%400==0)) 
          printf ("\nO ano %d é Bissexto!\n", ano);
	  else 
          printf ("\nO ano %d NÃO é Bissexto!\n", ano);
    
     getch();
}
