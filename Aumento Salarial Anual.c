#include <stdio.h>
#include <locale.h>
#include <string.h>
main(){
     setlocale(LC_ALL,"");
     system("title Aumento Salarial Anual de Funcion�rios");
     int  x=0, y, anoAdmissao, maisTempo=0, depto, tempoServico, tecla, anoAdmMaisTempo, anoAdmGanhaMenos;
     char sexo, sexoMaisTempo, sexoGanhaMenos, nome[50], nomeDepto[20], nomeMaisTempo[50], nomeDeptoMaisTempo[50], nomeGanhaMenos[50], nomeDeptoGanhaMenos[50]; 
	 float salario, menorSalario=9999, salarioMaisTempo;
     
	 do{
		 system("cls");
         printf("\nInforme a seguir os dados do %d� Funcion�rio\n",++x);
         printf("\nNome: ");gets(nome);
         printf("\nAno de Admiss�o: ");scanf("%d",&anoAdmissao);
         do{
         	printf("\nSexo (M-Masculino F-Feminino): ");fflush(stdin);scanf("%c",&sexo);
         }while (!(tolower(sexo) == 'm' || tolower(sexo) == 'f'));
         do{
         	printf("\nDepartamento em que est� lotado:\n1-Inform�tica\n2-Vendas\n3-Compras\n4-Almoxarifado\n5-Contabilidade\n ==> "); scanf("%d",&depto);
    	}while (!(depto == 1 || depto == 2 || depto == 3 || depto == 4 || depto == 5));
        salario = 800;
		switch(depto){
         	case 1: strcpy(nomeDepto,"Inform�tica"); salario = 1000;break;
         	case 2: strcpy(nomeDepto,"Vendas");break;
         	case 3: strcpy(nomeDepto,"Compras");break;
         	case 4: strcpy(nomeDepto,"Almoxarifado");break;
         	case 5: strcpy(nomeDepto,"Contabilidade");break;
         }  
         tempoServico = 2013 - anoAdmissao;
         if (tempoServico > 0) {
		 	printf("\n%s j� teve %d aumento(s) no seu sal�rio\n",nome,tempoServico);
		 	for (y=1; y <= tempoServico; y++){
		 		salario += 0.025 * salario;
		 	}
		}
		else printf("\n%s ainda n�o tem 1 ano de servi�o para receber aumento\n",nome);
		printf("\nSal�rio atual de %s = R$ %8.2f\n",nome,salario);
		if (tempoServico > maisTempo){
			maisTempo = tempoServico;
			anoAdmMaisTempo = anoAdmissao;
			salarioMaisTempo = salario;
			strcpy(nomeMaisTempo, nome);
			sexoMaisTempo = sexo;
			strcpy(nomeDeptoMaisTempo,nomeDepto);
		}
		if (salario < menorSalario){
			menorSalario = salario;
			strcpy(nomeGanhaMenos, nome);
			anoAdmGanhaMenos = anoAdmissao;
			sexoGanhaMenos = sexo;
			strcpy(nomeDeptoGanhaMenos,nomeDepto);
		}
		printf("\n\n\nPressione ESC para encerrar\n\n");
        fflush(stdin); tecla = getch();
	}while (tecla != 27);
	system("cls");
	printf("\nForam informados os dados de %d funcion�rios",x);
	printf("\n\nFuncion�rio que est� a mais tempo na empresa");
	printf("\nNome: %s\nSexo: %c\nAno de admiss�o: %d\nDepartamento: %s\nSal�rio R$ %8.2f",nomeMaisTempo,sexoMaisTempo,anoAdmMaisTempo,nomeDeptoMaisTempo,salarioMaisTempo);
    printf("\n\nFuncion�rio que ganha menos na empresa");
	printf("\nNome: %s\nSexo: %c\nAno de admiss�o: %d\nDepartamento: %s\nSal�rio R$ %8.2f",nomeGanhaMenos,sexoGanhaMenos,anoAdmGanhaMenos,nomeDeptoGanhaMenos,menorSalario);
	getch();
}







