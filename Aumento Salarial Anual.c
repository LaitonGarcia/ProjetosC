#include <stdio.h>
#include <locale.h>
#include <string.h>
main(){
     setlocale(LC_ALL,"");
     system("title Aumento Salarial Anual de Funcionários");
     int  x=0, y, anoAdmissao, maisTempo=0, depto, tempoServico, tecla, anoAdmMaisTempo, anoAdmGanhaMenos;
     char sexo, sexoMaisTempo, sexoGanhaMenos, nome[50], nomeDepto[20], nomeMaisTempo[50], nomeDeptoMaisTempo[50], nomeGanhaMenos[50], nomeDeptoGanhaMenos[50]; 
	 float salario, menorSalario=9999, salarioMaisTempo;
     
	 do{
		 system("cls");
         printf("\nInforme a seguir os dados do %dº Funcionário\n",++x);
         printf("\nNome: ");gets(nome);
         printf("\nAno de Admissão: ");scanf("%d",&anoAdmissao);
         do{
         	printf("\nSexo (M-Masculino F-Feminino): ");fflush(stdin);scanf("%c",&sexo);
         }while (!(tolower(sexo) == 'm' || tolower(sexo) == 'f'));
         do{
         	printf("\nDepartamento em que está lotado:\n1-Informática\n2-Vendas\n3-Compras\n4-Almoxarifado\n5-Contabilidade\n ==> "); scanf("%d",&depto);
    	}while (!(depto == 1 || depto == 2 || depto == 3 || depto == 4 || depto == 5));
        salario = 800;
		switch(depto){
         	case 1: strcpy(nomeDepto,"Informática"); salario = 1000;break;
         	case 2: strcpy(nomeDepto,"Vendas");break;
         	case 3: strcpy(nomeDepto,"Compras");break;
         	case 4: strcpy(nomeDepto,"Almoxarifado");break;
         	case 5: strcpy(nomeDepto,"Contabilidade");break;
         }  
         tempoServico = 2013 - anoAdmissao;
         if (tempoServico > 0) {
		 	printf("\n%s já teve %d aumento(s) no seu salário\n",nome,tempoServico);
		 	for (y=1; y <= tempoServico; y++){
		 		salario += 0.025 * salario;
		 	}
		}
		else printf("\n%s ainda não tem 1 ano de serviço para receber aumento\n",nome);
		printf("\nSalário atual de %s = R$ %8.2f\n",nome,salario);
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
	printf("\nForam informados os dados de %d funcionários",x);
	printf("\n\nFuncionário que está a mais tempo na empresa");
	printf("\nNome: %s\nSexo: %c\nAno de admissão: %d\nDepartamento: %s\nSalário R$ %8.2f",nomeMaisTempo,sexoMaisTempo,anoAdmMaisTempo,nomeDeptoMaisTempo,salarioMaisTempo);
    printf("\n\nFuncionário que ganha menos na empresa");
	printf("\nNome: %s\nSexo: %c\nAno de admissão: %d\nDepartamento: %s\nSalário R$ %8.2f",nomeGanhaMenos,sexoGanhaMenos,anoAdmGanhaMenos,nomeDeptoGanhaMenos,menorSalario);
	getch();
}







