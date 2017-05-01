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
         printf("\nInforme a seguir os dados do %dº Livro comercializado\n",++x);
         do{
         	printf("\nTipo do Livro (F-Ficção  T-Técnico  L-Literatura): ");fflush(stdin);scanf("%c",&tipoLivro);
         }while (!(tolower(tipoLivro) == 'f' || tolower(tipoLivro) == 't' || tolower(tipoLivro) == 'l'));
         printf("\nPreço do Livro: ");scanf("%f",&custoLivro);
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
	printf("\n\n%.1f%% de Ficcção", (float) contFiccao * 100 / x);
	printf("\n\n%.1f%% Técnico", (float) contTecnico * 100 / x);
	printf("\n\n%.1f%% de Literatura", (float) contLiteratura * 100 / x);
	printf("\n\nQuantidade de livros com preço superior a R$ 52,00");
	printf("\n%d de Ficcção",quantPrecoSuperior52F);
	printf("\n%d Técnico",quantPrecoSuperior52T);
	printf("\n%d de Literatura",quantPrecoSuperior52L);
	printf("\n\nO livro mais BARATO custa R$ %5.2f é ",custoLivroMaisBarato);
	switch (tolower(tipoLivroMaisBarato)){
         	case 'f': printf("de FICÇÃO"); break;
         	case 't': printf("TÉCNICO"); break;
         	case 'l': printf("de LITERATURA"); break;
	}
	printf("\n\nO livro mais CARO custa R$ %5.2f é ",custoLivroMaisCaro);
	switch (tolower(tipoLivroMaisCaro)){
         	case 'f': printf("de FICÇÃO"); break;
         	case 't': printf("TÉCNICO"); break;
         	case 'l': printf("de LITERATURA"); break;
	}
	printf("\n\nA média de preços dos livros");
	printf("\nFiccção ....... R$ %5.2f",mediaFiccao);
	printf("\nTécnico ....... R$ %5.2f",mediaTecnico);
	printf("\nLiteratura .... R$ %5.2f",mediaLiteratura);
	getch();
}






