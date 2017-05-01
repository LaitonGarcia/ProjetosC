/* Obtenha a matriz M = (mij)4x4 definida por mij = 3i - j.*/
#include <stdio.h>
#include <locale.h>
main(){
     setlocale(LC_ALL,"");
     system("title Matriz M");
     int m[4][4]; 
	 int i,j;
	 system("cls");
	 printf("\nMatriz M = (mij)4x4 definida por mij = 3i - j \n\n");
	 for (i = 0; i < 4 ; i++){
	 	for (j = 0; j < 4 ; j++){
	 		m[i][j] = 3 * (i+1) - (j+1);	 	
	 	    printf("%5d",m[i][j]);
	 	}
	 	printf("\n");
	 }
  getch();
}
	 
	 
	 
