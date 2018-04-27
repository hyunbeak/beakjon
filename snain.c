#include <stdio.h>
#include <stdlib.h>

void main()
{
   int i, j,a=0;
   int size=0,tsize=0;
   int cntx=0,cnty=0,c=1;
   int **aNum;
   scanf("%d",&size);
	tsize=size;
// 유동 할당하기
   aNum = (int **)malloc(size * sizeof(int *));
   for(i=0; i<size; ++i)
   {
        aNum[i] = (int *)malloc( size * sizeof(int) );
   }

   while(size){
	for(i=0;i<size;i++)
	{
		aNum[cntx][cnty]=a++;
		cnty+=c;
	}
		cntx+=c;
		cnty-=c;
		size--;
	for(i=0;i<size;i++)
	{
		aNum[cntx][cnty]=a++;
		cntx+=c;
	}
		cntx-=c;	
		c*=-1;
		cnty+=c;
		
		
   }
   


// 결과 출력하기
   for(i=0; i<tsize; ++i)
   {
        for(j=0; j<tsize; ++j) printf("  |%12d|", aNum[i][j]);
        printf("\n");
   }

// 할당 해제하기
   for(i=0; i<tsize; ++i) free(aNum[i]);
   free(aNum);

}
       
