#include<stdio.h>

void main(){
	
	int **a;
	int size=0;
	int i,j,x=0;
	scanf("%d",&size);
	a=(int(**))malloc (size*sizeof(int*));
	for (i=0;i<size;+i){
		a[i]=(int*)malloc(size*sizeof(int));
		
	}

	//a[0]=(int(*)[])malloc (sizeof(int*)*size);
	for(i=0;i<size;i++){
		a[i]=(int*)malloc(size*sizeof(int));
      		for(j=0;j<size;j++){
			a[i][j]=x++;
 			printf("|%2d|",a[i][j]);
		}
      	}
	      printf("\n");
	

	
	return 0;
}
