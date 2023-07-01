#include<stdio.h>
#include<math.h>
void main()
{
	int a,temp1,temp2,sum,s,rem1,rem2;
	printf("enter a number :");
	scanf("%d" ,&a);
	temp1=a;
	temp2=a;
	while(temp1!=0)
	{
		rem2=temp1%10;
		s++;
		temp1=temp1/10;
	}
	while(temp2!=0)
	{
		rem2=temp2%10;
		sum=sum+pow(rem2,s);
		temp2=temp2/10;
	}
	if(sum==a)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}
