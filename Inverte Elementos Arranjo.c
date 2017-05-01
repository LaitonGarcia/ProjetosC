#include <stdio.h>
#include <locale.h>
main(){
     setlocale(LC_ALL,"");
     system("title Invertendo os elemetnos em um Arranjo");
	 system("cls");
	 int aux, v[8],i;
	 v[0]=7;
	 v[1]=400;
	 v[2]=111;
	 v[3]=58;
	 v[4]=89;
	 v[5]=22;
	 v[6]=30;
	 v[7]=67;
	 printf("\n\n Vetor Original: ");
	 for (i = 0; i < 8; i++) 
	     printf("%5d",v[i]);
	 for (i = 7; i >= 4; i--){
	 	 aux = v[i];
	 	 v[i] = v[7-i];
	 	 v[7-i] = aux;
	 }
	 printf("\n\n Vetor Final...: ");
	 for (i = 0; i < 8; i++) 
	     printf("%5d",v[i]);
     getch();
}
