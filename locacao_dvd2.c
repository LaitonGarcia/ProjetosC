#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
   main()   {
          system("color f1") ;
          setlocale(LC_ALL,"") ;
          int tipoDVD, dia ;
          float DVDCOMUM = 5.0 , DVDLANCAMENTO = 5.75 ; //esses valores s�o aleat�rios, poderiam ser quaisquer outros.
          
          printf("\n\t\t\t\t*************\n\t\t\t\t* MOVIE STAR * \t\t          \n\t\t\t\t*************\n\t\t\tleve o cinema para sua casa!!! \n\n\t\n\t\t\t  1- DVD COMUM = 5,00 R$ \n\n\t\t\t 2- LAN�AMENTO = 5,75 R$ " );
          
          printf("\t\t\n\n\n Digite uma das op��es ===> ");
          scanf("%d", &tipoDVD) ;
          system("cls");
          printf("\n\n\t\t      Dia da semana que est� locando o dvd: \n  1- Domingo\n\n  2- Segunda\n\n  3- Ter�a\n\n  4- Quarta\n\n  5- Quinta\n\n  6- Sexta\n\n  7- S�bado\n\n\t\t\t\t\t =====> " );
          scanf("%d", &dia) ;
          
          
 
 if (tipoDVD > 2 || tipoDVD < 1  || dia > 7 || dia < 1 ) printf("Op��o de dia ou tipo de dvd inv�lida \n") ; 
 if (dia==2 && tipoDVD == 1) printf(" \nO pre�o da loca��o para dia de segunda, dvd normal � de: %.2f R$\n",DVDCOMUM-= 0.4*DVDCOMUM); else
 if(dia==2 && tipoDVD == 2) printf(" O pre�o da loca��o para dia de segunda, dvd lancamento � de : %.2fR$\n\n", DVDLANCAMENTO-=0.4*DVDCOMUM);else  
 if(dia==3 && tipoDVD == 1) printf(" O pre�o da loca��o para dia de ter�a, dvd normal � de: %.2fR$\n\n",DVDCOMUM-=0.4*DVDCOMUM); else
 if(dia==3 && tipoDVD == 2) printf(" O pre�o da loca��o para dia de ter�a, dvd lancamento � de : %.2fR$\n\n", DVDLANCAMENTO-=0.4*DVDCOMUM);else 
 if(dia==5 && tipoDVD == 1) printf(" O pre�o da loca��o para dia de quinta, dvd normal � de: %.2fR$\n\n",DVDCOMUM-=0.4*DVDCOMUM); else
 if(dia==5 && tipoDVD == 2) printf(" O pre�o da loca��o para dia de quinta, dvd lancamento � de : %.2fR$\n\n", DVDLANCAMENTO-=0.4*DVDCOMUM);else
 if(dia==4 && tipoDVD == 1) printf(" O pre�o da loca��o para dia de quarta, dvd normal � de : %.2fR$\n\n",DVDCOMUM) ; else
 if(dia==4 && tipoDVD == 2) printf(" O pre�o da loca��o para dia de quarta, dvd lan�amento � de: %.2fR$\n\n",DVDLANCAMENTO) ; else 
 if(dia==6 && tipoDVD == 1) printf(" O pre�o da loca��o para dia de sexta, dvd normal � de : %.2fR$\n\n",DVDCOMUM) ; else
 if(dia==6 && tipoDVD == 2) printf(" O pre�o da loca��o para dia de sexta, dvd lan�amento � de: %.2fR$\n\n",DVDLANCAMENTO) ; else 
 if (dia==7 && tipoDVD == 1) printf(" O pre�o da loca��o para dia de s�bado, dvd normal � de : %.2fR$\n\n",DVDCOMUM) ; else
 if(dia==7 && tipoDVD == 2) printf(" O pre�o da loca��o para dia de s�bado, dvd lan�amento � de: %.2fR$\n\n",DVDLANCAMENTO) ; else 
 if(dia==1 && tipoDVD == 1) printf(" O pre�o da loca��o para dia de domingo, dvd normal � de : %.2fR$\n\n",DVDCOMUM) ;  else
 if(dia==1 && tipoDVD == 2) printf(" O pre�o da loca��o para dia de domingo, dvd lan�amento � de: %.2fR$\n\n",DVDLANCAMENTO) ;  
 
      system("pause") ;
          } 
