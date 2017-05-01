#include <stdio.h>
#include <locale.h>
#include <math.h> 
main(){
     setlocale(LC_ALL,"");
     system("title Preenchendo um Arranjo de 10 posições");
     int S[10], i = 5;
	 system("cls");
	 S[0] = i;
	 S[i] = 36;
	 S[i * 2 - 1] = (int)pow(S[0],2);
	 S[i % 2] = 100;
	 S[S[i] / S[0]] = (int)sqrt(S[1]);
	 S[i - 1] = S[i]% S[7];
	 S[(int) sqrt(S[i])] = (int) sqrt(S[1]) * sqrt(S[9]);
	 S[S[7] / S[0]] = (int) pow(S[1],0.5) +  pow(S[9],0.5);
	 S[S[2] / S[0]] = S[i] - S[9];
	 S[i + (S[2] / S[0])] = (int) pow(S[2]/S[0],3);
	 printf("\n Elementos do Arranjo: \n\n");
	 for ( i = 0; i < 10; i++ ) printf("%5d",S[i]);
     getch();
}
