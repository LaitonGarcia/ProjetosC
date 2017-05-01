#include<stdio.h>
#include<string.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	char sexo, vac, sexovelho[15];
	int nasc, ano=2013, contf=0, contm=0, contm30=0, contvfsim=0, contvfnao=0, contvmsim=0, contvmnao=0, idmaisvelho=9999, tecla=0;
	do{
	system("CLS");
	printf("Sexo F ou M: "); scanf("%c",&sexo);
	printf("\nNascimeto: "); scanf("%d", &nasc);
	printf("\nVacinado H1N1 este ano S-sim e N-nao: "); scanf(" %c",&vac);
	switch (sexo){
		case 'f':
		case 'F':contf++; switch (vac){case 's': case'S':contvfsim++;break;
		                               case 'n': case 'N': contvfnao++;break;
									   }
									    break;
		case 'm':
		case 'M':contm++;switch (vac){case 's': case'S':contvmsim++;if(nasc>1983)contm30++; break;
		                               case 'n': case 'N': contvmnao++;break;
									   } break;	
	            }
	            
	if(nasc<idmaisvelho){idmaisvelho=nasc; switch(sexo){case 'f': case'F': strcpy(sexovelho,"Feminino");break;
	                                                    case 'm': case'M': strcpy(sexovelho,"Masculino");break;     
	                                                   }   
	                    }  
	printf("\n\t\tPressione ESC para sair.");
	fflush(stdin); tecla=getch();			
	system("CLS");
   }while(tecla!=27);
   
	//printf("%d \n %d \n%d\n\n\n %d\n %d\n%d\n\n%d",contf,contvfsim,contvfnao,contm,contvmsim,contvmnao,contm30);
	printf("\nTotal de pessoas entrevistadas por sexo:");
	printf("\n- Mulheres: %d \n- Homens: %d",contf,contm);
	printf("\n\nPercentual de pessoas por sexo não vacinados:");
	printf("\n- Mulheres: %d \n - Homens: %d",contvfnao*100/contf,contvmnao*100/contm);
	printf("\n\nO entrevistado mais velho tem %d anos e é do sexo %s.",ano-idmaisvelho,sexovelho);
	printf("\n\n%d%% de homens com menos de 30 anos são vacinados.",contm30*100/contvmsim);
	getch();
	
}
