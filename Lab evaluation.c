#include<stdio.h>
void main()
{
	int x,i,m,sum=0;
	float n,z;
	printf("enter no. of inputs:");
	scanf("%f", &n);
	x=(int)n;
	z=n-(float)x;
	if(n>0&&n-x==0)
	{
		printf("enter %d numbers:",(int)n);
		printf("the sum of");
		for(i=1;i<=n;i++)
		{
			scanf("%d", &m);
			sum=sum+m;
		}
		printf("sum is %d",sum);
	}
	else
	{
		printf("INVALID");
	}
}
