#include <stdio.h>
#include <locale.h>
main(){
     setlocale(LC_ALL,"");
     system("title Calculando Ponto de Sela de Matriz 3 x 2");
     int X[3][2], i, j, y, lin, col, maior, menor, achou = 0; 
	 printf("\nInforme a seguir os elementos (inteiros) de uma Matriz 3 x 2:");
     for ( i = 0; i < 3; i++ )
          for (j = 0; j < 2; j++){
          	  printf("\nElemento [%d,%d] da matriz:", (i + 1),(j + 1));
          	  scanf("%d", &X[i][j]);
          }
     system("cls");
	 printf("\n A Matriz Informada\n\n");
	 for (i = 0; i < 3; i++){
	      for (j = 0; j < 2; j++)
	      	   printf("%5d",X[i][j]);
	      printf("\n\n");
	 }
	 //percorrendo a matriz para procurar o ponto de sela
	 for (i = 0; i < 3; i++){
	 	  menor = X[i][0];
	 	  col = 0;
	      for (j = 0; j < 2; j++)
	           if (X[i][j]<menor){
	           	  menor = X[i][j];
	           	  col = j;
	           }
	      maior = X[i][col];
	      for (y = 0; y < 3; y++)
	      	if (X[y][col]>maior){
	      		maior = X[y][col];
				lin = y; 
	      	}
	      if (lin==i && menor==maior){
	      	achou = 1;
	      	printf("\nEsta matriz possui um ponto de sela");
	      	printf("\nque é o número %d localizado na %dª linha e %dª coluna",maior,lin+1,col+1);
	      }
	 }
	 if (achou==0) printf("\n\nNão existe PONTO DE SELA nesta matriz!");
  getch();
}

