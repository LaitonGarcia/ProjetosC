#include <stdlib.h> // pois as fun��es rand() e srand() est�o na biblioteca stdlib.h 
#include <stdio.h>
#include <locale.h>
main(){
     setlocale(LC_ALL,"");
     system("title Valores Rand�micos (aleat�rios) em C");
     int i;         
     srand(time(NULL)); // para inicializar o gerador de n�meros aleat�rios 
     for (i = 0; i < 10; i++){
	     printf("%5d", rand() % 100); // para gerar n�meros aleat�rios de 0 a 100
      }
      getch();
}

