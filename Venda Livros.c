#include <stdio.h>
#include <locale.h>
#include <string.h>
main(){
     setlocale(LC_ALL,"");
     system("title Controle de Vendas dos Livros da Livraria");
     int  x=0, tecla, contFiccao = 0, contTecnico = 0, contLiteratura = 0, quantPrecoSuperior52F = 0, quantPrecoSuperior52T = 0, quantPrecoSuperior52L = 0;
     char tipoLivro, tipoLivroMaisBarato, tipoLivroMaisCaro;
     float custoLivro, custoLivroMaisBarato = 9999, custoLivroMaisCaro = -9999, mediaFiccao = 0, mediaTecnico = 0, mediaLiteratura = 0;
	 do{
		 system("cls");
         printf("\nInforme a seguir os dados do %d� Livro comercializado\n",++x);
         do{
         	printf("\nTipo do Livro (F-Fic��o  T-T�cnico  L-Literatura): ");fflush(stdin);scanf("%c",&tipoLivro);
         }while (!(tolower(tipoLivro) == 'f' || tolower(tipoLivro) == 't' || tolower(tipoLivro) == 'l'));
         printf("\nPre�o do Livro: ");scanf("%f",&custoLivro);
		 switch (tolower(tipoLivro)){
         	case 'f': contFiccao++; mediaFiccao += custoLivro; break;
         	case 't': contTecnico++; mediaTecnico += custoLivro; break;
         	case 'l': contLiteratura++; mediaLiteratura += custoLivro; break;
         } 
         if (custoLivro > 52 && tolower(tipoLivro) == 'f') quantPrecoSuperior52F++;
         if (custoLivro > 52 && tolower(tipoLivro) == 't') quantPrecoSuperior52T++;
         if (custoLivro > 52 && tolower(tipoLivro) == 'l') quantPrecoSuperior52L++;
         if (custoLivro < custoLivroMaisBarato){
         	custoLivroMaisBarato = custoLivro;
         	tipoLivroMaisBarato = tipoLivro;
         }
         if (custoLivro > custoLivroMaisCaro){
         	custoLivroMaisCaro = custoLivro;
         	tipoLivroMaisCaro = tipoLivro;
         }
		 printf("\n\n\nPressione ESC para encerrar\n\n");
         fflush(stdin); tecla = getch();
	}while (tecla != 27);
	mediaFiccao /= contFiccao;
	mediaTecnico /= contTecnico;
	mediaLiteratura /= contLiteratura;
	printf("\n\n\nForam vendidos %d Livros\n",x);
	printf("\n\n%.1f%% de Ficc��o", (float) contFiccao * 100 / x);
	printf("\n\n%.1f%% T�cnico", (float) contTecnico * 100 / x);
	printf("\n\n%.1f%% de Literatura", (float) contLiteratura * 100 / x);
	printf("\n\nQuantidade de livros com pre�o superior a R$ 52,00");
	printf("\n%d de Ficc��o",quantPrecoSuperior52F);
	printf("\n%d T�cnico",quantPrecoSuperior52T);
	printf("\n%d de Literatura",quantPrecoSuperior52L);
	printf("\n\nO livro mais BARATO custa R$ %5.2f � ",custoLivroMaisBarato);
	switch (tolower(tipoLivroMaisBarato)){
         	case 'f': printf("de FIC��O"); break;
         	case 't': printf("T�CNICO"); break;
         	case 'l': printf("de LITERATURA"); break;
	}
	printf("\n\nO livro mais CARO custa R$ %5.2f � ",custoLivroMaisCaro);
	switch (tolower(tipoLivroMaisCaro)){
         	case 'f': printf("de FIC��O"); break;
         	case 't': printf("T�CNICO"); break;
         	case 'l': printf("de LITERATURA"); break;
	}
	printf("\n\nA m�dia de pre�os dos livros");
	printf("\nFicc��o ....... R$ %5.2f",mediaFiccao);
	printf("\nT�cnico ....... R$ %5.2f",mediaTecnico);
	printf("\nLiteratura .... R$ %5.2f",mediaLiteratura);
	getch();
}






