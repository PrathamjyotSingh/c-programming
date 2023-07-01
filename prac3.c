#include<stdio.h>
int main()
{
	int i,j,a=1;
	for(i=1;i<=7;i=i+2)
	{
		for(j=a;j<=i;j++)
		{
			printf("%d",j);
		}
		a++;
		printf(" \n");
	}
}

