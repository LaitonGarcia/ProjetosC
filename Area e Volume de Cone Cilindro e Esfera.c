/*Apresente op��es para o usu�rio indicar se deseja calcular e apresentar 
o volume e a �rea da superf�cie de um cone reto, um cilindro ou de uma esfera. */

// 3� lista de Exerc�cios - quest�o 3 - letra j
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <locale.h>
#define PI 3.14
main(){
      setlocale(LC_ALL,"");
      system("title Volume e �rea de Cone reto, Cilindro ou Esfera");
      float volume, area, raio, altura; int figura; char nome[20];
      
      printf("Indique o n�mero da Figura Geom�trica que deseja calcular volume e �rea:\n");
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
      
      printf("\nA �rea = %.1fm� e o Volume = %.1fm� do(a) %s\n",area,volume,nome);
      getch();
}
     
