#include <stdio.h>
#include <locale.h>
#include <string.h>
main(){
     setlocale(LC_ALL,"");
     system("title Estat�stica de Entrevista sobre Vacina��o contra o V�rus H1N1");
     int  x=0, anoNascimento, idade, tecla, contF=0, contM=0, cont1=0,cont2=0, idadeMaisVelho=-999;
     char sexo, vacinou, sexoMaisVelho;
	 do{
		 system("cls");
         printf("\nInforme a seguir os dados do %d� entrevistado\n",++x);
         do{
         	printf("\nSexo (M-Masculino F-Feminino): ");fflush(stdin);scanf("%c",&sexo);
         }while (!(tolower(sexo) == 'm' || tolower(sexo) == 'f'));
         if (tolower(sexo) == 'm') contM++; else contF++;
         printf("\nAno de Nascimento: ");scanf("%d",&anoNascimento); idade = 2013 - anoNascimento;
         if (idade > idadeMaisVelho){
         	idadeMaisVelho = idade;
         	sexoMaisVelho = sexo;
         }
         do{
         	printf("\nFoi vacinado para H1N1? (S-Sim N-N�o): ");fflush(stdin);scanf("%c",&vacinou);
         }while (!(tolower(vacinou) == 's' || tolower(vacinou) == 'n'));
         if (tolower(sexo) == 'f' && tolower(vacinou) == 'n') cont1++;
         if (idade < 30 && tolower(sexo) == 'm' && tolower(vacinou) == 's' ) cont2++;
		 printf("\n\n\nPressione ESC para encerrar\n\n");
         fflush(stdin); tecla = getch();
	}while (tecla != 27);
	system("cls");
	printf("\nForam entrevistadas %d pessoas do sexo Feminino e %d do sexo Masculino",contF,contM);
	printf("\n\n%.1f%% das pessoas do sexo feminino N�O se vacinaram", (float) cont1 * 100 / contF);
	printf("\n\nO entrevistado mais velho tem %d anos e � do sexo ",idadeMaisVelho);
	switch(tolower(sexo)){
		case 'm': printf("MASCULINO");break;
		case 'f': printf("FEMININO");break;
	}
	printf("\n\n%.1f%% das pessoas do sexo masculino com menos de 30 anos SE vacinaram", (float) cont2 * 100 / contM);
	getch();
}






