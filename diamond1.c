#include<stdio.h>
void main()
{
	int n,i,k,j,x,y,z;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n+1;i++)
	{
		for(k=n;k>=i;k--)
		{
			printf(" ");
	    }
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(x=n;x>=1;x--)
	{
		for(y=n;y>=x;y--)
		{
			printf(" ");
		}
		for(z=2*x-1;z>=1;z--)
		{
			printf("*");
		}
		printf("\n");
	}
}
