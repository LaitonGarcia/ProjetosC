#include <stdio.h>
#include <locale.h>
#include <string.h>
main(){
     setlocale(LC_ALL,"");
     system("title Comissão dos Vendedores");
     int  tecla, x=0;
     char nome[50], nmMaior[50], nmMenor[50]; 
	 float totalVendas, comissao, somaVendas=0, maiorComissao=-9999,menorComissao=9999, tvMaior, tvMenor;  
	 do{
         system("cls");
         printf("\nInforme os dados do %dº vendedor\n",++x);
         printf("\nNome: ");gets(nome);
         printf("\nTotal de Vendas: ");scanf("%f",&totalVendas);
         somaVendas += totalVendas; 
		 comissao = totalVendas * 0.1; 
         printf("\nComissão de %s = R$ %8.2f",nome,comissao);
         if (comissao < menorComissao){
         	menorComissao = comissao;
         	strcpy(nmMenor,nome);
         	tvMenor = totalVendas;
         }
         if (comissao > maiorComissao){
         	maiorComissao = comissao;
         	strcpy(nmMaior,nome);
         	tvMaior = totalVendas;
         }
         printf("\n\nPressione ESC para encerrar\n\n");
         fflush(stdin); tecla = getch();
	}while (tecla != 27);
	printf("\nA soma total das vendas = R$ %8.2f",somaVendas);
	printf("\nDados do vendedor de MAIOR comissão\nNome: %s\nTotal Vendas: R$%8.2f\nComissão: R$%8.2f\n",nmMaior,tvMaior,maiorComissao);
	printf("\nDados do vendedor de MENOR comissão\nNome: %s\nTotal Vendas: R$%8.2f\nComissão: R$%8.2f",nmMenor,tvMenor,menorComissao);
}

