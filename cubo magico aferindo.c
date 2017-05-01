#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
main(){
     setlocale(LC_ALL,"");
     system("title Verificando se Matriz forma Quadrado Mágico");
     int m[10][10], i, j, n, somaLin[10], somaCol[10], somaDP=0, somaDS=0, verificaLC, achou=0,cont=0; 
	 system("cls");
	 do{
	 	printf("Informe a Ordem da Matriz: ");scanf("%d",&n);
	 }while (n<1 || n>10);
	 for ( i = 0; i < n; i++ )
          for (j = 0; j < n; j++){
          	  printf("\nElemento [%d,%d] da matriz:", (i + 1),(j + 1));
          	  scanf("%d", &m[i][j]);
          }
          system("CLS");
	// srand(time(NULL));
	 printf("\nA Matriz Gerada\n");
	 for (i = 0; i < n ; i++){
	 	somaLin[i]=0;somaCol[i]=0;
	 	for (j = 0; j < n ; j++){
	 	//	m[i][j] = rand() % 10;	 	
	 	    printf("%5d",m[i][j]);
	 	    //SOMA DAS LINHAS
	 	    somaLin[i]+=m[i][j];
	 	    if (i==j) somaDP += m[i][j];
	 	    if (i+j==n-1) somaDS += m[i][j];
	 	    //soma das colunas
	 	    somaCol[i]+=m[j][i];
	 	}
	 	printf("\n");
	 }
	 printf("\n\nSomas encontradas:\n");
	 for(i = 0; i < n; i++)printf("\n%dª linha  = %d",i+1,somaLin[i]);
	 for(i = 0; i < n; i++)printf("\n%dª coluna = %d",i+1,somaCol[i]);
	 printf("\nDiagonal Principal  = %d",somaDP);
	 printf("\nDiagonal Secundária = %d",somaDS);
	 //verificaLC=0;
	 for (i = 0; i < n; i++){
	 if(somaLin[i]==somaDP && somaCol[i]==somaDP && somaDP == somaDS)cont++;
	 	if(cont==n)printf("\nA matriz forma um QUADRADO MÁGICO!\n\n");}
	 
	if(cont!=n)
	 printf("\nA matriz NÃO forma um Quadrado Mágico\n\n");
	 printf("Cont: %d",cont);
  getch();
}
