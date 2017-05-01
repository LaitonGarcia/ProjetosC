#include <stdio.h>
#include <locale.h>
#include <math.h> 
#include <stdlib.h>
main(){
     setlocale(LC_ALL,"");
     system("title Ordenação de Elementos");
     int M[25], i,j, aux;
	 system("cls");
	 srand(time(NULL));
	 for (i = 0; i <25; i++)
	     M[i]=rand()% 100;
	     
	 for (i = 0; i <25; i++)
	    printf("%3d",M[i]);
	    
	 for (i = 0; i < 24; i++)
	     for (j = i+ 1; j < 25; j++)
	          if (M[i]>M[j]){
	          	 aux = M[i];
	          	 M[i]=M[j];
	          	 M[j]=aux;
	          }
	printf("\n\n");
	for (i = 0; i <25; i++)
	    printf("%3d",M[i]);
	getch();
}
