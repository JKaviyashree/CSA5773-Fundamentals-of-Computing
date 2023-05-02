#include<stdio.h>
int main()
{
	int n[10],a,i,sum,avg;
	printf("Limit of numbers : ");
	scanf("%d",&a);
	for (i=0;i<a;i++)
	{ 
	    scanf("%d",&n[i]);
	}
	printf("Series : ");
	for (i=0;i<a;i++)
	{ 
	    printf(" %d ",n[i]);
	}
	sum=0;
	printf("\nSum of series : ");
	for (i=0;i<a;i++)
	{
		sum=sum+n[i];
	}
	printf(" %d ",sum);
	avg=sum/a;
	printf("\nAverage of series : %d",avg);
}
