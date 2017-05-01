#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
main(){
     setlocale(LC_ALL,"");
     system("title Arranjo de 50 elementos reais randômicos");
     float arranjo[50], media = 0; int i, x=0;
	 system("cls");
	 srand(time(NULL)); 
	 printf("\n  * * * * * * *  ARRANJO 50 Elementos * * * * * * * \n\n");
	 for ( i = 0; i < 50; i++ ){
	 	  arranjo[i] = rand() % 100;
	 	  media += arranjo[i];
	 }
	 for ( i = 0; i < 50; i++ ){
	 	  printf("%6.0f",arranjo[i]);
	 	  x++; 
		  if (x == 10) { printf("\n"); x = 0;}
	 }
	 media /= 50;
	 printf("\nNúmeros acima da média = %4.1f\n\n",media);
	 for ( i = 0; i < 50; i++ ){
	 	  if (arranjo[i]>media)
	 	     printf("%6.0f",arranjo[i]);
	 	  x++; 
		  if (x == 10) { printf("\n"); x = 0;}
	 } 
     getch();
}

