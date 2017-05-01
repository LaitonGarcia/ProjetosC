#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
   main()   {
          system("color f1") ;
          setlocale(LC_ALL,"") ;
          int tipoDVD, dia ;
          float DVDCOMUM = 5.0 , DVDLANCAMENTO = 5.75 ; //esses valores são aleatórios, poderiam ser quaisquer outros.
          
          printf("\n\t\t\t\t*************\n\t\t\t\t* MOVIE STAR * \t\t          \n\t\t\t\t*************\n\t\t\tleve o cinema para sua casa!!! \n\n\t\n\t\t\t  1- DVD COMUM = 5,00 R$ \n\n\t\t\t 2- LANÇAMENTO = 5,75 R$ " );
          
          printf("\t\t\n\n\n Digite uma das opções ===> ");
          scanf("%d", &tipoDVD) ;
          system("cls");
          printf("\n\n\t\t      Dia da semana que está locando o dvd: \n  1- Domingo\n\n  2- Segunda\n\n  3- Terça\n\n  4- Quarta\n\n  5- Quinta\n\n  6- Sexta\n\n  7- Sábado\n\n\t\t\t\t\t =====> " );
          scanf("%d", &dia) ;
          
          
 
 if (tipoDVD > 2 || tipoDVD < 1  || dia > 7 || dia < 1 ) printf("Opção de dia ou tipo de dvd inválida \n") ; 
 if (dia==2 && tipoDVD == 1) printf(" \nO preço da locação para dia de segunda, dvd normal é de: %.2f R$\n",DVDCOMUM-= 0.4*DVDCOMUM); else
 if(dia==2 && tipoDVD == 2) printf(" O preço da locação para dia de segunda, dvd lancamento é de : %.2fR$\n\n", DVDLANCAMENTO-=0.4*DVDCOMUM);else  
 if(dia==3 && tipoDVD == 1) printf(" O preço da locação para dia de terça, dvd normal é de: %.2fR$\n\n",DVDCOMUM-=0.4*DVDCOMUM); else
 if(dia==3 && tipoDVD == 2) printf(" O preço da locação para dia de terça, dvd lancamento é de : %.2fR$\n\n", DVDLANCAMENTO-=0.4*DVDCOMUM);else 
 if(dia==5 && tipoDVD == 1) printf(" O preço da locação para dia de quinta, dvd normal é de: %.2fR$\n\n",DVDCOMUM-=0.4*DVDCOMUM); else
 if(dia==5 && tipoDVD == 2) printf(" O preço da locação para dia de quinta, dvd lancamento é de : %.2fR$\n\n", DVDLANCAMENTO-=0.4*DVDCOMUM);else
 if(dia==4 && tipoDVD == 1) printf(" O preço da locação para dia de quarta, dvd normal é de : %.2fR$\n\n",DVDCOMUM) ; else
 if(dia==4 && tipoDVD == 2) printf(" O preço da locação para dia de quarta, dvd lançamento é de: %.2fR$\n\n",DVDLANCAMENTO) ; else 
 if(dia==6 && tipoDVD == 1) printf(" O preço da locação para dia de sexta, dvd normal é de : %.2fR$\n\n",DVDCOMUM) ; else
 if(dia==6 && tipoDVD == 2) printf(" O preço da locação para dia de sexta, dvd lançamento é de: %.2fR$\n\n",DVDLANCAMENTO) ; else 
 if (dia==7 && tipoDVD == 1) printf(" O preço da locação para dia de sábado, dvd normal é de : %.2fR$\n\n",DVDCOMUM) ; else
 if(dia==7 && tipoDVD == 2) printf(" O preço da locação para dia de sábado, dvd lançamento é de: %.2fR$\n\n",DVDLANCAMENTO) ; else 
 if(dia==1 && tipoDVD == 1) printf(" O preço da locação para dia de domingo, dvd normal é de : %.2fR$\n\n",DVDCOMUM) ;  else
 if(dia==1 && tipoDVD == 2) printf(" O preço da locação para dia de domingo, dvd lançamento é de: %.2fR$\n\n",DVDLANCAMENTO) ;  
 
      system("pause") ;
          } 
