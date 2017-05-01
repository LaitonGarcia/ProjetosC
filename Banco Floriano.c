#include <stdio.h>
#include <locale.h>
#include <string.h>
main(){
     setlocale(LC_ALL,"");
     system("title Análise dos Clientes do Banco Floriano Cash S.A.");
     int  codigo, tecla, x=0, contC=0, contD=0, contC10=0, codMaiorCredito;
     char nome[50], tipoSaldo, nomeMaiorCredito[50];
	 float saldoMedio, valorCredito, mediaSaldosCredores=0, maiorCredito = -9999;
	 do{
		 system("cls");
		 printf("\nInforme a seguir os dados do %dº cliente\n",++x);
		 printf("\nNº do código desse cliente ........: ");scanf("%d",&codigo);
		 printf("\nNome do cliente ...................: ");fflush(stdin);gets(nome);
		 printf("\nSaldo Médio desse cliente (R$).....: ");scanf("%f",&saldoMedio);
		 do{
         	 printf("\nTipo do saldo (C-Credor  D-Devedor): ");fflush(stdin);scanf("%c",&tipoSaldo);
         }while (!(tolower(tipoSaldo) == 'c' || tolower(tipoSaldo) == 'd'));
         if (tolower(tipoSaldo) == 'c') {
         	contC++;
            if (saldoMedio >= 0 && saldoMedio <= 2000) {
                valorCredito = saldoMedio * 0.1; 
				contC10++;
			} else
            	if (saldoMedio <= 6000) valorCredito = saldoMedio * 0.2; else
            	if (saldoMedio <= 10000) valorCredito = saldoMedio * 0.3; 
				else valorCredito = saldoMedio * 0.4; 
			mediaSaldosCredores += saldoMedio;
			printf("\nO valor de crédito para o cliente R$ %8.2f\n",valorCredito);
			if (valorCredito > maiorCredito){
				codMaiorCredito = codigo;
				strcpy(nomeMaiorCredito,nome);
			}
         }else contD++;
		 printf("\n\n\nPressione ESC para encerrar\n\n");
         fflush(stdin); tecla = getch();
	}while (tecla != 27);
	mediaSaldosCredores/=contC;
	printf("\n\n\nForam informados os dados de %d clientes",x);
	printf("\n\n%.1f%% têm crédito master e %.1f%% não possuem",(float)contC*100/x,(float)contD*100/x);
    printf("\n\nA média de saldos credores dos clientes do banco = R$ %8.2f",mediaSaldosCredores);
    printf("\n\nNúmero de clientes com crédito máster de 10%% do valor do saldo médio = %d",contC10);
	printf("\n\nO cliente de maior crédito máster");
	printf("\nNome: %s\nCódigo: %d", nomeMaiorCredito, codMaiorCredito);
	getch();
}






