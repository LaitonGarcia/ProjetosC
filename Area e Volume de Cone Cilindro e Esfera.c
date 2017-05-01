/*Apresente opções para o usuário indicar se deseja calcular e apresentar 
o volume e a área da superfície de um cone reto, um cilindro ou de uma esfera. */

// 3ª lista de Exercícios - questão 3 - letra j
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <locale.h>
#define PI 3.14
main(){
      setlocale(LC_ALL,"");
      system("title Volume e Área de Cone reto, Cilindro ou Esfera");
      float volume, area, raio, altura; int figura; char nome[20];
      
      printf("Indique o número da Figura Geométrica que deseja calcular volume e área:\n");
      printf("1-Cone reto\n2-Cilindro\n3-Esfera\n ==> "); scanf("%d",&figura);
      printf("Informe o valor do raio e da altura da figura (m): ");scanf("%f%f",&raio,&altura);
      
      switch(figura){
      	case 1:{
      		    strcpy(nome,"Cone reto");
      		    area = PI * raio * sqrt(pow(raio,2)+pow(altura,2));
      		    volume = (PI * pow(raio,2) * altura)/3;
      	}break;
      	case 2:{
      		    strcpy(nome,"Cilindro");
				area = 2 * PI * raio * altura;
      		    volume = PI * pow(raio,2) * altura;
      	}break;
      	case 3:{
      		    strcpy(nome,"Esfera");
				area = 4 * PI * pow(raio,2);
      		    volume = 1.33 * PI * pow(raio,3);
      	}
      }
      
      printf("\nA área = %.1fm² e o Volume = %.1fm³ do(a) %s\n",area,volume,nome);
      getch();
}
     
