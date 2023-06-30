/*1 2 3 4 5
  1 2 3 4 5
  1 2 3 4 5
  1 2 3 4 5*/
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=5;j++)
		printf("%d",j);
		printf("\n");
	}
}
