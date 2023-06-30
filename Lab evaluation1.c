#include<stdio.h>
int main()
{
	int year,month,days,yr,mon,day,a,y,m,d;
	printf("enter this year:");
	scanf("%d", &year);
	printf("enter this month:");
	scanf("%d", &month);
	printf("enter this day:");
	scanf("%d", &days);
	printf("enter dob year:");
	scanf("%d", &yr);
	printf("enter dob month:");
	scanf("%d", &mon);
	printf("enter dob day:");
	scanf("%d", &day);
	if(year<0||year>2022||yr<0||yr>2022||month<=0||month>12||mon<=0||mon>12||day<=0||day>31||days<=0||days>31)
	{
		printf("INVALID");
		return 0;
	}
	else
	{
	printf("enter 1 if your birthday passed this year or 0 if it is coming :");
	scanf("%d" ,&a);
	if(a==1)
	{
		y=year-yr;
		m=month-mon;
	    if(day>days)
	    {
	    	m=m-1;
	    	d=30-(day-days);
		}
		else
		{
			d=days-day;
		}
		printf("years=%d months=%d days=%d",y,m,d);
	}
	if(a==0)
	{
		y=year-yr-1;
		m=12-(mon-month);
		 if(day>days)
	    {
	    	m=m-1;
	    	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
	    	{
			    d=31-(day-days);
			}
			else if(month==4||month==6||month==9||month==11)
	    	{
			    d=30-(day-days);
			}
			else
			{
				if(year%4==0&&year%100==0||year%400==0)
				{
					d=29-(day-days);
				}
				else
				{
					d=28-(day-days);
				}
			}
		}
		else
		{
			d=days-day;
		}
		printf("years=%d months=%d days=%d",y,m,d);
	}
}
}

