#include<stdio.h>
#include<stdlib.h>
main(){
       int  vetor[50],i,numero, posicao=0,achou=0;
       srand(time(NULL));
       for(i=0 ; i<50 ; i++){
               vetor[i] = rand() % 100; 
               printf(" %d ",vetor[i]);
      }
       printf("\n Informe um numero :");
       scanf("%d",&numero);       
       for(i = 0 ; i< 50 ; i++){
            if (vetor[i] == numero){
            	achou = 1;
            	posicao = i+1;
                printf("\n Numero %d pertence ao vetor na posiçao: %d",vetor[i],posicao);
               }    
       }
       if (achou==0) printf("\n Numero NAO pertence ao vetor!");
      getch();
}

