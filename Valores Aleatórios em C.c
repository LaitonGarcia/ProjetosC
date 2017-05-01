#include <stdlib.h> // pois as funções rand() e srand() estão na biblioteca stdlib.h 
#include <stdio.h>
#include <locale.h>
main(){
     setlocale(LC_ALL,"");
     system("title Valores Randômicos (aleatórios) em C");
     int i;         
     srand(time(NULL)); // para inicializar o gerador de números aleatórios 
     for (i = 0; i < 10; i++){
	     printf("%5d", rand() % 100); // para gerar números aleatórios de 0 a 100
      }
      getch();
}

