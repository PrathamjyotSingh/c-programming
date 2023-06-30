#include<stdio.h>
void main()
{
	int n,i;
	float sum=0.0;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("1/%d ",i);
		sum=sum+(float)1/i;
	}
	printf("\nthe sum of series is %f",sum);
}
