// 3� lista de Exerc�cios - quest�o 3 - letra b
#include <stdio.h>
#include <string.h>
#include <locale.h>
main(){
      setlocale(LC_ALL,"");
      system("title Ordena��o Crescente de 3 n�meros");
      
      float n1,n2,n3,aux;
      
      printf("Informe 3 n�meros a seguir: ");
      scanf("%f%f%f",&n1,&n2,&n3);
      
      if (n1>n2){aux=n1;n1=n2;n2=aux;}
      if (n1>n3){aux=n1;n1=n3;n3=aux;}
      if (n2>n3){aux=n2;n2=n3;n3=aux;}
      
      printf("\nOs n�meros em ordem CRESCENTE s�o: %.1f - %.1f - %.1f\n",n1,n2,n3);
      
      getch();
}
