#include <stdio.h>
#include <locale.h>
main(){
     setlocale(LC_ALL,"");
     system("title Produ��o de Pe�as de um F�brica");
     int  x=0, contF=0, matricula, matriculaMenorSal, numPecasMes, tecla, totalPecas=0;
     char sexo, classe, sexoMenorSal; float salario=510, mediaPecasM=0, menor=9999, totalBrutoFolhaPagamento=0;  
	 do{
         system("cls");
         printf("\nInforme os dados do %d� funcion�rio\n",++x);
         printf("\nMatr�cula: ");scanf("%d",&matricula);
         printf("\nSexo (M-Masculino F-Feminino): ");fflush(stdin);scanf("%c",&sexo);
         printf("\nN�mero de pe�as fabricadas no m�s: "); scanf("%d",&numPecasMes);
         totalPecas += numPecasMes;
		 if (numPecasMes <= 20){classe = 'A'; salario = salario;}else
		 if (numPecasMes <= 30){classe = 'B'; salario += salario * 0.03 * numPecasMes;}else
		 {classe = 'C'; salario += salario * 0.05 * numPecasMes;}
		 totalBrutoFolhaPagamento += salario;
		 if (sexo == 'F' || sexo == 'f') {contF++; mediaPecasM += numPecasMes;}
		 if (salario<menor){
		 	menor = salario;
		 	sexoMenorSal = sexo;
		 	matriculaMenorSal = matricula;
		 }
         printf("\n\nPressione ESC para encerrar\n\n");
         fflush(stdin); tecla = getch();
	}while (tecla != 27);
	printf("\nTotal de pe�as fabricadas: %d",totalPecas);
	printf("\nA m�dia de pe�as fabricadas pelas mulheres: %.1f",mediaPecasM/contF);
	printf("\nFuncion�rio de menor sal�rio tem matricula = %d e sexo = %c",matriculaMenorSal,sexoMenorSal);
	printf("\nO total bruto da folha de pagamento da f�brica = R$ %8.2f",totalBrutoFolhaPagamento);
}







