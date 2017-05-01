                                #include<stdlib.h>
                          #include<stdio.h>
               #include<locale.h>

int vetordosnumeros[100], i = 0, contador = 0 , escape, TOTAL = 0 ;
int maior, menor, somatotal, qtdpares, qtdimpares;
float porpares, porimpares ;

/******subrotina do MAIOR NUMERO**********/
int max( int aux ) {
                aux = -999 ;
         for (  i = 0 ; i <= contador ; i ++ ) {   
          if (vetordosnumeros[i] > aux) aux  = vetordosnumeros[i]; 
                                                }
                              return aux  ;  
                   }
/******subrotina do MENOR NUMERO**********/           
int min(int aux) {
                 aux = 9999 ;
                for ( i = 0 ; i <= contador ; i ++ ) {
            if (vetordosnumeros[i] < aux ) aux = vetordosnumeros[i] ; }
                             return aux ; 
                   }
/******subrotina da QUANTIDADE DE PARES *****/
int pares(int num ) {
          if(num % 2 == 0) qtdpares++ ;
             return qtdpares ;   }
/******subrotina da QUANTIDADE DE IMPARES*****/
int impares(int num) {
           if(num % 2 != 0) qtdimpares ++ ;
           return qtdimpares ;      } 
           /******subrotina da PORCENTAGEM DE PARES*******/
float porcenpares (int num) { 
                  porpares = qtdpares * 100 / TOTAL ;  
                 return porpares ;                    }
/******subrotina da PORCENTAGEM DE IMPARES*****/
float porcenimpares ( int num ) {
                   porimpares = qtdimpares*100 / TOTAL ; 
                   return porimpares ;                       }
/******subrotina da SOMA DOS NUMEROS**********/
int soma(int mix) { 
                    for( i = 0 ; i < contador ; i++) {
                         mix += vetordosnumeros[i] ; }
                         
                         return mix ;
                   }          
main() {  do{vetordosnumeros[100]=0 ; i = 0, contador = 0 , escape=0, TOTAL = 0 ;
             maior=0 ; menor = 0 ; somatotal = 0 ; qtdpares=0 ; qtdimpares= 0;
              porpares = 0 ; porimpares = 0;  
             setlocale(LC_ALL, "") ; system("color 0e") ;
          do{  TOTAL++ ;
          system("cls") ;
          printf("\n\n\n\n\n\t\t\t   Digite um número ==>") ;  scanf("%d", &vetordosnumeros[contador]) ;
          
          maior = max(vetordosnumeros[contador]) ;
          menor = min(vetordosnumeros[contador]) ;
          qtdpares = pares(vetordosnumeros[contador]) ;
          qtdimpares = impares(vetordosnumeros[contador]) ;
          porpares = porcenpares(vetordosnumeros[contador]) ;
          porimpares = porcenimpares(vetordosnumeros[contador]) ;
          somatotal = soma(vetordosnumeros[contador]) ;
          contador++ ;
          printf("\n\n\t\t\t  INSERIR MAIS NÚMEROS ?\n\n\t\t\tENTER-sim   ESC -sair do laço") ;
          fflush(stdin) ; escape = getch() ;
          }  while(escape != 27) ;
          system("cls") ;
          printf("\n\n\t\t\tOs números digitados foram =>\n\t\t") ;
          for(i = 0 ; i < contador ; i++) { 
                printf(" %3d", vetordosnumeros[i]) ; } 
            
          printf("\n\n\n  O maior dos numeros é ==> %d", maior) ;
          printf("\n\n  O menor dos numeros é ==> %d", menor) ;
          printf("\n\n  A quantidade de pares é==> %d", qtdpares) ;
          printf("\n\n  A quantidade de impares é ==> %d", qtdimpares) ;
          printf("\n\n  A porcentagem de pares é ==> %.2f%%", porpares) ;
          printf("\n\n  A porcentagem de impares é ==> %.2f%%", porimpares) ;
          printf("\n\n  A soma dos números é ==> %d\n\n", somatotal) ;
          
          printf("\n\n\t\t\t    REPETIR O PROGRAMA ?\n\n\t\t\tENTER-sim   ESC -sair do laço") ;
          escape = getch() ;
          } while(escape !=27) ;
       
           
       }

