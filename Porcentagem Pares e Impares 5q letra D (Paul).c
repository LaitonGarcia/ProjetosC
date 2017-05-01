#include <stdio.h>
main(){
       int arranjo[50],i=0,tecla=0,pares=0,impares=0;
       float porcp=0,porci=0;
       do{
       		printf("\nInforme um valor: ");scanf("%d",&arranjo[i]);
       		if (arranjo[i]%2==0) pares++;
       		else impares++;
       		i++;
       printf("Tecle ESC para sair");fflush(stdin);tecla=getch();
       }while(tecla!=27);
       porcp=(pares*100)/(pares+impares);
       porci=(impares*100)/(pares+impares);
       printf("\nPorcentagem Pares = %.1f%%",porcp);
       printf("\nPorcentagem Impares = %.1f%%",porci);  
       getch();     
       }
