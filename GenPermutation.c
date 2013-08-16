#include <stdio.h>

void GenePermu(int A[],int i,int NUM)
{
	int m,k,tmp;
	if (i == NUM-1)
	{
		for (m=0;m<NUM;m++)
		{
			printf("%d ",A[m]);
		}
		printf("\n");
	} 
	else
	{
		for (k = i;k < NUM; k++)
		{
			tmp=A[k];A[k]=A[i];A[i]=tmp;  //依次使用数组中的元素作为第一个排列的元素
			GenePermu(A,i+1,NUM);
			tmp=A[k];A[k]=A[i];A[i]=tmp; //恢复原来的排列顺序
		}
	}
}
int main(int argc,char * argv[])
{
	int A[]={1,2,3};
	GenePermu(A,0,3);
}
