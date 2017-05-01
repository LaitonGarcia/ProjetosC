// 3ª lista de Exercícios - questão 3 - letra d
#include <stdio.h>
#include <string.h>
#include <locale.h>
main(){
      setlocale(LC_ALL,"");
      system("title Soma do Maior com Menor valor de 5 números");
      
      float n1, n2, n3, n4, n5, maior = -9999, menor = 9999;
      
      printf("Informe a seguir os 5 valores para análise: ");
      scanf("%f%f%f%f%f",&n1,&n2,&n3,&n4,&n5);
      
      //localizando o MAIOR valor
      if (n1 > maior) maior = n1;
      if (n2 > maior) maior = n2;
      if (n3 > maior) maior = n3;
      if (n4 > maior) maior = n4;
      if (n5 > maior) maior = n5;
      
      //localizando o MENOR valor
      if (n1 < menor) menor = n1;
      if (n2 < menor) menor = n2;
      if (n3 < menor) menor = n3;
      if (n4 < menor) menor = n4;
      if (n5 < menor) menor = n5;
      
      printf("\nO maior valor = %.1f\n\nO menor valor = %.1f\n\nA soma entre eles = %.1f\n\n",maior, menor, maior+menor);
	  getch();
}
