               #include<stdlib.h>
               #include<stdio.h>
               #include<locale.h>
               
                char nome[100][50];        int i=0, cont=0 , choice[100], escape;
                          float nota1[100], nota2[100], nota3[100] ; 
           float media_harmonica[100], media_aritmetica[100], media_ponderada[100] ;
//--------------------------------------------------------------------------------------------------                    
// SubRotina da aritmetica
 float aritmetica(float nota1, float nota2 , float nota3){ float media ; 
                       media = (nota1+nota2+nota3)/ 3 ;
                       return media ;
                                                         }
// SubRotina da ponderada              
float ponderada(float nota1, float nota2 , float nota3)  { float media ;
              media =  ((nota1*5) + (nota2*3) + (nota3*2)) / 10 ;
              return media ;
                                                         }
// SubRotina  da harmonica                     
float harmonica(float nota1, float nota2 , float nota3)  { float media ;
               media = (3/  ( (1/nota1)+(1/nota2)+(1/nota3)  ) )  ; 
                     return media ;
                                                          }                
//-------------------------------------------------------------------------------------------------               
                //zerando tudo se precisar reiniciar o programa!
main () { do{   nome[100][50]=0; i=0; cont=0 ; choice[100]=0 ; 
                nota1[100]=0 ; nota2[100]=0 ; nota3[100]=0 ; 
                media_harmonica[100]=0 ; media_aritmetica[100]=0 ; media_ponderada[100]=0 ;
//--------------------------------------------------------------------------------------------------      
           do {system("cls") ; setlocale(LC_ALL, "") ; system("color 8e") ;
                    
           printf("\n\t\t\t    Digite o nome do aluno==>\n\n\t\t\t         ") ;
           fflush(stdin) ; gets(nome[cont]) ;
printf("\nEscolha a opção de média =>\n\n\t    1-Aritmética\t2-Ponderada\t3-Harmônica\n\n\t\t\t\t\n=>");
fflush(stdin) ; scanf("%d", &choice[cont]) ;
           printf("\n\nDigite a nota 1 ==>"); fflush(stdin) ; scanf("%f", &nota1[cont]) ;
           printf("\n\nDigite a nota 2 ==>"); fflush(stdin) ; scanf("%f", &nota2[cont]) ;
           printf("\n\nDigite a nota 3 ==>"); fflush(stdin) ; scanf("%f", &nota3[cont]) ;
                    
if( choice[cont] == 1 ) media_aritmetica[cont] = aritmetica(nota1[cont], nota2[cont], nota3[cont]) ;
if( choice[cont] == 2 ) media_ponderada[cont] =  ponderada(nota1[cont], nota2[cont], nota3[cont]) ;
if( choice[cont] == 3 ) media_harmonica[cont] =  harmonica(nota1[cont], nota2[cont], nota3[cont]) ;                    
                    
                    cont++ ;
                    printf("\n\t\t\t Inserir mais alunos ? \n\t\t\tENTER-sim       ESC-não") ;
                    fflush(stdin) ; escape = getch() ;
                    
                    } while(escape != 27) ;
//-----------------------------------------------------------------------------------------------------------           
           system("cls") ;      
           for(i=0 ; i < cont ; i++) {
if( choice[i] == 1) printf(" \n\n\n\t\tA média Aritmética de %s é => %.2f", nome[i], media_aritmetica[i]) ;
if( choice[i] == 2) printf(" \n\n\n\t\tA média Ponderada de %s é => %.2f", nome[i], media_ponderada[i]) ;
if( choice[i] == 3) printf(" \n\n\n\t\tA média Harmonica de %s é => %.2f",nome[i], media_harmonica[i]);
                                         }
         printf("\n\n\t\t\t Repetir o programa ? \n\t\t\tENTER-sim       ESC-não") ;
         fflush(stdin) ; escape = getch() ;
        }while( escape != 27 ) ;
        system("pause") ;
                    }
