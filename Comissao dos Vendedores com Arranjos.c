#include <stdio.h>
#include <locale.h>
main(){
     setlocale(LC_ALL,"");
     system("title Controle de Comissão dos Vendedores");
     char nome[50][50]; 
	 float totalVendas[50], comissao[50], somaVendas, maiorComissao = -9999, menorComissao = 9999;
	 int i=0, x = 0, tecla;
	 
	 do{
	 	system("cls");
	 	printf("Nome do(a) vendedor(a): ");gets(nome[i]);
	 	printf("\nTotal de vendas de %s: ",nome[i]); scanf("%f",&totalVendas[i]);
	 	comissao[i] = totalVendas[i] * 0.1;
		somaVendas += totalVendas[i]; 
		if (comissao[i] > maiorComissao) maiorComissao = comissao[i];
		if (comissao[i] < menorComissao) menorComissao = comissao[i];
		i++;
		printf("\n\n\nPressione ESC para ENCERRAR");
        fflush(stdin); tecla = getch();
	}while (tecla != 27 && i < 50);
	x = i;
	system("cls");
	printf("\nRelatório dos Vendedores\n");
	printf("\n VENDAS (R$) - COMISSAO (R$) - NOME\n************************************");
	for ( i = 0; i < x; i++)
        printf("\n%10.2f  -  %8.2f  - %s",totalVendas[i], comissao[i], nome[i]);
    printf("\n************************************\n Soma das Vendas = %10.2f\n\a",somaVendas);
    printf("\n\n Maior Comissão R$ %8.2f",maiorComissao);
    printf("\nVendedor(es) com essa Comissao\n");
    for (i = 0; i < x; i++) 
         if (comissao[i] == maiorComissao)
             printf("\n%10.2f  -  %8.2f  - %s",totalVendas[i], comissao[i], nome[i]);
    printf("\n\n Menor Comissão R$ %8.2f",menorComissao);
    printf("\nVendedor(es) com essa Comissao\n");
    for (i = 0; i < x; i++) 
         if (comissao[i] == menorComissao)
             printf("\n%10.2f  -  %8.2f  - %s",totalVendas[i], comissao[i], nome[i]);
  getch();
}
	 
	 
	 
