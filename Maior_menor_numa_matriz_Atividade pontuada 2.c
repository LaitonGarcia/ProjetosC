#include<stdio.h>
#include<stdlib.h>

int op=0,scape=0,maior=0, menor=0, n=0,i=0, j=0, troca=0,l,k,matriz[5][5];
//função maior numero
int maximo(int m[5][5],int n){
	int i, j, maior=-99;
	for ( i = 0; i < n; i++ )
          for (j = 0; j < n; j++){
          	if(m[i][j]>maior)maior=m[i][j];
          }
          return maior;
}
//função menor numero
int minimo(int m[5][5],int n){
	int i, j, menor=999;
	for ( i = 0; i < n; i++ )
          for (j = 0; j < n; j++){
          	if(m[i][j]<menor)menor=m[i][j];
          }
          return menor;
}
//função substituir valor

void sub(){
	system("cls");
	printf("\nMatriz informada !");
          	  for (i = 0; i < n ; i++){printf("\n");          	  
	 	for (j = 0; j < n ; j++){
	 	 	    printf("%5d",matriz[i][j]);}}
	printf("\nInforme linha:");scanf("%d",&l);
	printf("\nInforme coluna:");scanf("%d",&k);
	printf("\nDigite o valor a substituir:");scanf("%d",&troca);
	          matriz[l-1][k-1]=troca;
}
//função coleta de dados
void intro(){
	for ( i = 0; i < n; i++ )
          for (j = 0; j < n; j++){
          	  printf("\nElemento [%d,%d] da matriz:", (i + 1),(j + 1));
          	  scanf("%d", &matriz[i][j]);}
}
void exibir(){
	system("cls");
          	  printf("Matriz informada !");
          	  for (i = 0; i < n ; i++){printf("\n");          	  
	 	for (j = 0; j < n ; j++){
	 	 	    printf("%5d",matriz[i][j]);
          }}
}
void maior_menor(){
	printf("\nMaior numero:%d", maximo(matriz, n));
		  printf("\nMenor numero:%d", minimo(matriz, n));
	
}
void final(){
	system("cls");
          printf("\nMatriz informada !");
          	  for (i = 0; i < n ; i++){printf("\n");          	  
	 	for (j = 0; j < n ; j++){
	 	 	    printf("%5d",matriz[i][j]);}}
}




main(){
	 op=0;scape=0;maior=0; menor=0; n=0;i=0; j=0; troca=0;l;k;matriz[5][5]=0;
	do{
		system("cls");
	do{
	 	printf("Informe o tamanho Matriz: ");scanf("%d",&n);
	 }while (n<1 || n>5);
				intro();	 
          	  exibir();
			do{
				printf("\nDeseja fazer alguma alteração: \t\nQualque tecla-(Sim)\t\n<ESC>-(para ver resultado) ?");          
				fflush(stdin);scape=getch();
				if(scape!=27)sub();
			
			
			}while(scape!=27);
			
          final();
          maior_menor();
          printf("\nDeseja rodar programa denovo ?"); 
          printf("\nESC-nao\nqualquer tecla-sim");
          fflush(stdin);scape=getch();
	}while(scape!=27);

}
