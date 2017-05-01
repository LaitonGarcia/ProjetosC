#include <stdio.h>
#include <locale.h>
main(){
     setlocale(LC_ALL,"");
     system("title MATRIZ SERA QUE E ISTO");
	 system("cls");
	 int i, j; char m[4][4], r[4][4], aux;
	 m[0][0] = 'O';
	 m[0][1] = 'Q';
	 m[0][2] = '*';
	 m[0][3] = 'I';
	 m[1][0] = 'E';
	 m[1][1] = '*';
	 m[1][2] = 'E';
	 m[1][3] = 'S';
	 m[2][0] = 'R';
	 m[2][1] = 'E';
	 m[2][2] = 'U';
	 m[2][3] = 'T';
	 m[3][0] = 'A';
	 m[3][1] = '*';
	 m[3][2] = '*';
	 m[3][3] = 'S';
	 printf("\n Matriz M\n");
	 for (i = 0; i < 4 ; i++){
	 	for (j = 0; j < 4 ; j++)
	 	    printf("%5c",m[i][j]);
	 	printf("\n");
	 }
     for(i=0;i<4;i++) 
         for(j=0;j<4;j++)
         	r[j][i] = m[i][j]; //ALGORITMO DA MATRIZ TRANSPOSTA
	 //ALGUMAS TROCAS
	 aux = r[0][0];
	 r[0][0] = r[3][3];
	 r[3][3] = aux;
	 aux = r[1][1];
	 r[1][1] = r[2][2];
	 r[2][2] = aux;
	 printf("\n Matriz R\n");
	 for (i = 0; i < 4 ; i++){
	 	for (j = 0; j < 4 ; j++)
	 	     printf("%5c",r[i][j]);
	 	printf("\n");
	 }
     getch();
}
