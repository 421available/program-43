#include<stdio.h>
void main()
{
	int a[4] [2] = {10,11,12,13,14,15,16,17};
	int i,j;
	for(i=0;i<4;i++)
	{
		for (j=0;j<2;j++)
		printf("%d",*(a+i)+j);
		printf("\n");
	}
}
