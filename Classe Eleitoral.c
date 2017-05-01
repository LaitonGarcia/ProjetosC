// 3ª lista de Exercícios - questão 3 - letra e
#include <stdio.h>
#include <string.h>
#include <locale.h>
main(){
      setlocale(LC_ALL,"");
      system("title Confirmação de Classe eleitoral");
      int idade;
      
      printf("Informe um idade (anos): "); scanf("%d",&idade);
      
      if (idade < 16) printf("\nNão votante!\n"); else
      if (idade >=16 && idade <18 || idade >65) printf("\nEleitor de Voto Facultativo!\n"); else
      printf("\nEleitor de Voto Obrigatório!\n");
      
      getch();
}
