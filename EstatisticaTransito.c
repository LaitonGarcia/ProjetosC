#include <stdio.h>
#include <locale.h>
main(){
     setlocale(LC_ALL,"");
     system("title Estatísticas dos Acidentes de Trânsito");
     int  x=0, anoNasc, proced, veiculo, causa, tecla;
     char sexo; float contF=0, contM=0, cont1=0, cont2=0, cont3=0;
     
	 do{
         system("cls");printf("\nDados de acidentes de trânsito do ano passado\n");
         printf("\nInforme os dados do %dº motorista/condutor envolvido no acidente\n",++x);
         printf("\nAno de nascimento: ");scanf("%d",&anoNasc);
         printf("\nSexo (M-Masculino F-Feminino): ");fflush(stdin);scanf("%c",&sexo);
         printf("\nProcedência\n1-Teresina\n2-Floriano\n3-outra cidade da região\n4-outro estado\n ==> "); scanf("%d",&proced);
		 printf("\nVeículo\n1-carro\n2-moto\n3-caminhão\n4-outro transporte\n ==> ");scanf("%d",&veiculo);
		 printf("\nCausa do acidente:\n1-Imprudência\n2-Alcoolismo\n3-Sonolência\n4-Sentiu-se mal");
		 printf("\n5-Falha mecânica\n6-outro motivo\n ==> "); scanf("%d",&causa);
		 if (sexo == 'M' || sexo == 'm') contM++;
		 if (sexo == 'F' || sexo == 'f') contF++;
		 if (sexo == 'M' || sexo == 'm' && causa == 2 &&  anoNasc > 1983) cont1++;
		 if (proced == 1 && anoNasc>=1943 && anoNasc<=1973 && causa == 4) cont2++;
		 if (sexo == 'F' || sexo == 'f' && proced ==2 && veiculo == 2) cont3++;
         printf("\n\nPressione ESC para encerrar\n\n");
         fflush(stdin); tecla = getch();
	}while (tecla != 27);
	printf("\n %.0f vítimas do sexo FEMININO",contF);
	printf("\n %.0f vítimas do sexo MASCULINO",contM);
	printf("\n %5.2f%% das vítimas sexo masculino morreram alcoolizados com menos 30 anos",cont1*100/contM);
	printf("\n %.0f das vítimas da capital com idade entre 40 e 70 anos se sentiram mal",cont2);
	printf("\n %5.2f%% das vítimas sexo feminino de Floriano que estavam de moto",cont3*100/contF);
}







