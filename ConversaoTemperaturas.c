// 3ª lista de Exercícios - questão 1
#include <stdio.h>
#include <string.h>
#include <locale.h>
main(){
      setlocale(LC_ALL,"");
      system("title Conversão de Temperaturas");
      
      float GrauOrigem,GrauDestino;
	  int EscalaOrigem,EscalaDestino;
	  char NomeEscalaOrigem[20],NomeEscalaDestino[20];
	  
	  printf("Digite uma medida da temperatura em graus: ");scanf("%f",&GrauOrigem);
      printf("Informe o número da escala da medida informada:\n1-Celsius\n2-Kelvin\n3-Fahrenheit\n ===> ");
      scanf("%d",&EscalaOrigem);
      printf("Informe o número da escala de conversão:\n1-Celsius\n2-Kelvin\n3-Fahrenheit\n ===> ");
      scanf("%d",&EscalaDestino);
      if (EscalaOrigem==1 && EscalaDestino==3){
               strcpy(NomeEscalaOrigem,"Celsius");
               strcpy(NomeEscalaDestino,"Fahrenheit");
               GrauDestino = 0.55 * (GrauOrigem - 32);
       }
       if (EscalaOrigem==1 && EscalaDestino==2){
               strcpy(NomeEscalaOrigem,"Celsius");
               strcpy(NomeEscalaDestino,"Kelvin");
               GrauDestino = GrauOrigem - 273.15;
   	   }
       if (EscalaOrigem==3 && EscalaDestino==1) {
               strcpy(NomeEscalaOrigem,"Fahrenheit");
               strcpy(NomeEscalaDestino,"Celsius");
               GrauDestino = 32 + 1.8 * GrauOrigem;
       }
       if (EscalaOrigem==2 && EscalaDestino==1){
               strcpy(NomeEscalaOrigem,"Kelvin");
               strcpy(NomeEscalaDestino,"Celsius");
               GrauDestino = GrauOrigem + 273.15;
       }
       if (EscalaOrigem==3 && EscalaDestino==2){
               strcpy(NomeEscalaOrigem,"Fahrenheit");
               strcpy(NomeEscalaDestino,"Kelvin");
               GrauDestino = 1.8 * GrauOrigem - 459.67;
       }
       if (EscalaOrigem==2 && EscalaDestino==3){
               strcpy(NomeEscalaOrigem,"Kelvin");
               strcpy(NomeEscalaDestino,"Fahrenheit");
               GrauDestino = 0.55 * (GrauOrigem + 459.63);
       }
       printf("\nO valor de %.1fº em %s corresponde a %.1fº em %s\n",GrauOrigem,NomeEscalaOrigem,GrauDestino,NomeEscalaDestino);
	   getch();
}
