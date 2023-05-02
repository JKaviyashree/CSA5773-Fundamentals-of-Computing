#include<stdio.h>
int main()
{
	int n,i,sum;
	printf("Limit of generating numbers : ");
	scanf("%d",&n);
	sum=0;
	printf("Sum of series : ");
	for (i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("%d ",sum);
}
