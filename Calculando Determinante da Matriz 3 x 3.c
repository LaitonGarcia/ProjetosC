#include <stdio.h>
#include <locale.h>
main(){
     setlocale(LC_ALL,"");
     system("title Calculando Determinante da Matriz 3 x 3");
     int X[3][3], i, j, determinante; 
	 printf("\nInforme a seguir os elementos (inteiros) de uma Matriz 3 x 3:");
     for ( i = 0; i < 3; i++ )
          for (j = 0; j < 3; j++){
          	  printf("\nElemento [%d,%d] da matriz:", (i + 1),(j + 1));
          	  scanf("%d", &X[i][j]);
          }
     system("cls");
	 printf("\n A Matriz Informada\n\n");
	 for (i = 0; i < 3; i++){
	      for (j = 0; j < 3; j++)
	      	   printf("%5d",X[i][j]);
	      printf("\n\n");
	 }
	 determinante = (X[0][0] * X[1][1] * X[2][2]) + (X[0][1] * X[1][2] * X[2][0]) + (X[0][2] * X[1][0] * X[2][1]) - (X[0][0] * X[1][2] * X[2][1]) - (X[0][1] * X[1][0] * X[2][2]) - (X[0][2] * X[1][1] * X[2][0]);
	 printf("\n\nO determinante da Matriz = %d\n",determinante);
  getch();
}

