#include <stdio.h>
#include <stdlib.h>

void main()
{
   int i, j,z,x=0;
   int size=0;
   int **aNum;
	scanf("%d",&size);

// 유동 할당하기
   aNum = (int **)malloc(size * sizeof(int *));
//for(z=0;z<size;z++){
   for(i=0; i<size; ++i)
   {
        aNum[i] = (int *)malloc( size * sizeof(int) );
        for(j=0; j<size; ++j){
		if(i==0){
		 aNum[i][j] = x++;
		 //aNum[j][i] =25-x
		}
		else if(j==4){
		 aNum[i][j]=x++;
		aNum[j][i]=25-x;
		}
		
		 

		//aNum[j][i]=x++;
	}
		
   }

//}
// 결과 출력하기
   for(i=0; i<size; ++i)
   {
        for(j=0; j<size; ++j) printf("	|%2d|", aNum[i][j]);
        printf("\n");
   }

// 할당 해제하기
   for(i=0; i<size; ++i) free(aNum[i]);
   free(aNum);

}
