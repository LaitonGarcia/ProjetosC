#include<stdio.h>
#include<string.h>
#include<locale.h> 

main(){
 char mens[100], codigo[300], letra, resp;
 int  x ,tamanho;
do{
   strcat(codigo,"");
   printf("\tAlgoritmo para Exibir Mensagem em Codigo Morse\n\n");
   printf("\tInforme uma mensagem:\n");
   scanf("%s",&mens);
   /*mens = minusc(mens);Não existe em "c" é função do visual g */
   tamanho = strlen(mens);
   for(x = 0;x < tamanho; x++){
		   letra = mens[x];
		   switch(letra){
			   case '.':strcat (codigo,".-.-.- ");break;
			   case ',':strcat (codigo,"--..-- ");break;
			   case 'a':case 'A':strcat(codigo,".- ");break;
			   case 'b':case 'B':strcat(codigo,"-... ");break;
			   case 'c':case 'C':strcat(codigo, "-.-. ");break;
			   case 'd':case 'D':strcat(codigo," '-.. '");break;
			   case 'e':case 'E':strcat(codigo, "'. '");break;
			   case 'f':case 'F':strcat(codigo," '..-. '");break;
			   case 'g':case 'G':strcat(codigo,"'--. '");break;
			   case 'h':case 'H':strcat(codigo," '.... '");break;
			   case 'i':case 'I':strcat(codigo," '.. '");break;
			   case 'j':case 'J':strcat(codigo,"'.--- '");break;
			   case 'k':case 'K':strcat(codigo," '-.- '");break;
			   case 'l':case 'L':strcat(codigo,"'.-.. '");break;
			   case 'm':case 'M':strcat(codigo," '-- '");break;
			   case 'n':case 'N':strcat(codigo," '-. '");break;
			   case 'o':case 'O':strcat(codigo,"'--- '");break;
			   case 'p':case 'P':strcat(codigo,"'.--. '");break;
			   case 'q':case 'Q':strcat(codigo," '--.- '");break;
			   case 'r':case 'R':strcat(codigo," '.-. '");break;
			   case 's':case 'S':strcat(codigo,"'... '");break;
			   case 't':case 'T':strcat(codigo," '- '");break;
			   case 'u':case 'U':strcat(codigo," '..- '");break;
			   case 'v':case 'V':strcat(codigo," '...- '");break;
			   case 'w':case 'W':strcat(codigo," '.-- '");break;
			   case 'x':case 'X':strcat(codigo,"'-..- '");break;
			   case 'y':case 'Y':strcat(codigo," '-.-- '");break;
			   case 'z':case 'Z':strcat(codigo,"'--.. '");break;
			   
          }
  }
   printf("A mensagem em codigo morse:%s\n ",codigo);
   printf("\nPressione qualquer tecla para formular outro Codigo Morse\n");
   printf(" ou * para encerrar >>>>\n ");
   fflush(stdin);/*Limpar buffer do teclado*/
   scanf("%c",&resp);
   }while (resp!='*');
   getch();
}
