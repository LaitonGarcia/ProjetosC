#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>
char palavra[25],letra[25],espaco[25],
aleatoria[10][10]={"gato","banana","cachorro","brasil","piaui","floriano","carro","moto","oculos","algoritmos"};
int vida=6,x,i,j,erro=0,tecla,opcao=0;
/****************************************************************************************************/
 derrota(){          // se o jogador perdeu, exibe mensagem de derrota e a palavra correta
    system("cls");
    printf("\n\n\n\n\n\n\n\t\t\t PERDEU!!");
    printf("\n\n\t\t\t\tA palavra era: %s",palavra);
    getch();
    }
/*******************************************************************************************************/
 vitoria(){          // se o jogador ganhar, exibira a mensagem e a palavra correta
    system("cls");
    printf("\n\n\n\n\n\t\t\t PARABÉNS VOCÊ VENCEU!!\n\n\t\t\tTECLE ENTER PARA ENCERRAR!!");
    printf("\n\n\t\t\t\tA palavra era: %s",palavra);
    getch();}
/************************************FUNÇOES DOS DESENHOS*************************/
void cabeca(){
                          printf("                                          _ _ ");
                          printf("\n                                         |   |");                   
                          printf("\n                                         |   O");
                          printf("\n                                         |    ");
                          printf("\n                                         |    ");
                          printf("\n                                         |    ");}
/*******************************************************************************/
void corpo(){             printf("                                          _ _ ");
                          printf("\n                                         |   |"); 
                          printf("\n                                         |   O");
                          printf("\n                                         |   |");
                          printf("\n                                         |    ");
                          printf("\n                                         |    ");}
/*******************************************************************************/
void bracodireito(){      printf("                                          _ _ ");
                          printf("\n                                         |   |"); 
                          printf("\n                                         |   O");
                          printf("\n                                         |   |\\");
                          printf("\n                                         |    ");
                          printf("\n                                         |    ");
                }
/********************************************************************************/
void bracoesquerdo(){
                          printf("                                          _ _ ");
                          printf("\n                                         |   |"); 
                          printf("\n                                         |   O");
                          printf("\n                                         |  /|\\");
                          printf("\n                                         |    ");
                          printf("\n                                         |    ");}
/***********************************************************************************/
void pernadireita(){
                          printf("                                          _ _ ");
                          printf("\n                                         |   |"); 
                          printf("\n                                         |   O");
                          printf("\n                                         |  /|\\");
                          printf("\n                                         |    \\");
                          printf("\n                                         |    ");}
/***********************************************************************************/
void pernaesquerda(){    
                          printf("                                          _ _ ");
                          printf("\n                                         |   |"); 
                          printf("\n                                         |   O");
                          printf("\n                                         |  /|\\");
                          printf("\n                                         |  / \\");
                          printf("\n                                         |    ");
                          printf("\n                                      MORREU  ");}
/**********************************************************************************/
 /*****************************************ROTINA DE ERRO**************************/
 letra_errada(){for(i=0;i<erro;i++){system("cls");
 switch(erro){
 case 1:cabeca();break;
 case 2:corpo ();break;
 case 3:bracodireito();break;
 case 4:bracoesquerdo();break;
 case 5:pernadireita();break;
 case 6:pernaesquerda();break;}}
return(erro);}
main(){ do{palavra[25]=0;letra[25]=0;espaco[25]=0;
 vida=6;x=0;i=0;j=0;erro=0,opcao=0;

srand(time(NULL));opcao=rand()%9;

int tamanho=0,repete=0,cont_espaco,num_acerto=0;
setlocale(LC_ALL,"");system("cls");
system("title JOGO DA FORCA");
system("color f5");
srand(time(NULL));
strcpy(palavra,aleatoria[opcao]);
/*printf("\n\nDIGITE A PALAVRA A SER DESCOBERTA:\t");printf("%s",aleatoria[1]);
gets (palavra);*/


system("cls");
tamanho=strlen(palavra);
printf("tamanho:%d",tamanho);
for(i=0;i<strlen(palavra);i++){
                               espaco[i]='_';
                               cont_espaco=strlen(espaco);}
                               while(num_acerto<tamanho&&vida>0){
                                             repete++;
                                             x=0;
                                             printf("\n\t\t\t\tVIDA(S) RESTANTES:%d ",vida);
                                             printf("\n\t\t\t\tnumero de acerto:%d",num_acerto);
                                             printf("\n\n\t\t\t\t       %s\n",espaco);
                                             printf("\n\t\t\t\tINFORME 'UMA' LETRA : ");
                                             gets(letra);
                                             for(i=0;i<strlen(palavra);i++){
                                             for(j=0;j<strlen(palavra);j++){
                                             if(letra[j]==palavra[i]){espaco[i]=palavra[i];
                                             x++;
                                             num_acerto++;}}}
                                             if(x==0){
                                             erro++;
                                             vida--;
                    /*CHAMA A FUNÇÃO*/       letra_errada();}}                                                                              
                               if(num_acerto==tamanho)
                               vitoria();else
                               derrota();
                               printf("\n\nPARA CONTINUAR PRESCIONE <ENTER> PARA SAIR DO JOGO PRESCIONE <ESC>");
                               fflush(stdin);
                               tecla=getch();}while(tecla!=27);
       
getch();}
