#include<stdio.h>
#include<stdlib.h>
main(){
	srand(time(NULL));
	int  k[2][3],l[3][2],res[2][2];
	int i,j,x,y;
	printf("\t** Matriz K **\n");
	for(i=0;i<2;i++){printf("\n\n");
		for(j=0;j<3;j++){
			k[i][j]=rand()%10;
			printf("%4d",k[i][j]);
		}
	}
	printf("\n\n\t ** Matriz L **\n");
	for(x=0;x<3;x++){printf("\n\n");
		for(y=0;y<2;y++){
			l[x][y]=rand()%10;
			printf("%4d",l[x][y]);
		}
	}
	printf("\n");
	res[0][0]=(k[0][0]*l[0][0]+k[0][1]*l[1][0]+k[0][2]*l[2][0]);
	res[0][1]=(k[0][0]*l[0][1]+k[0][1]*l[1][1]+k[0][2]*l[2][1]);
	res[1][0]=(k[1][0]*l[0][0]+k[1][1]*l[1][0]+k[1][2]*l[2][0]);
	res[1][1]=(k[1][0]*l[0][1]+k[1][1]*l[1][1]+k[1][2]*l[2][1]);
	printf("\n\t -- Matriz resultante da multiplicaçao da matriz K * L --\n");
	for(x=0;x<2;x++){printf("\n\n");
		for(y=0;y<2;y++){
			printf("%4d",res[x][y]);
		}
	}
	getch();
}
