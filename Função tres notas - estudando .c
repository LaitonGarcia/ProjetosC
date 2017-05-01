#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
 int x=0;
 float media[10],maiorm=0;
	// sub-rotina maior numero
	float maior(float media[10],int x ){
		int i;
		float maiorm = -10;
		 
		for(i=0;i<x;i++){
		if(media[i]>maiorm) maiorm=media[i];
		}
		return maiorm;
	}
	// sub-rotina da função aritmetica
	float aritmetica(float n1,float n2,float n3){
		float media;
		return media=(n1+n2+n3)/3;
		
	}
	
	main(){
		
		char nome[10][40];
		float nota1[10],nota2[10],nota3[10];
		int scape=0,i=0,j;
		setlocale(LC_ALL,"");
		do{
			system("cls");
		printf("Digite o nome do %dº aluno : ",++x); gets(nome[i]);
		printf("Digite tres notas: "); scanf("%f%f%f",&nota1[i],&nota2[i],&nota3[i]);
		media[i]=aritmetica(nota1[i],nota2[i],nota3[i]);
		i++;
		printf("Pressione ESC para sair...");
		fflush(stdin);scape=getch();
		
	}while(scape!=27);
	
	for(i=0;i<x;i++)
	printf("\nMedia %.2f do aluno %s",media[i],nome[i]);
	
	printf("\n\nMaior media: %.2f",maior(media,x));
	printf("\n\n%d",x);
	getch();
}
