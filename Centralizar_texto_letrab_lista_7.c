#include<stdio.h>
#include<locale.h>
char texto[1000];int i;

char centralizar(char *texto){
	                          setlocale(LC_ALL,"");
	                          int margens,i,carac;
	
    
                            for(i=0;texto[i]!='\0';i++)
		                          carac=i;
	                      margens=(80-carac)/2;
	                      for(i=1;i<=margens;i++)
		             printf(" ");strupr(texto);puts(texto);
	
}
main(){
	setlocale(LC_ALL,"");
	printf("Digite uma frase qualquer:\n\t");gets(texto);
	printf("\n\nTexto centralizado:\n\n");
	centralizar(texto);
	
	getch();
	
}
