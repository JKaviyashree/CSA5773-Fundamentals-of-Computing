#include<stdio.h>
int main()
{
	int n,i;
	printf("Limit of generating numbers : ");
	scanf("%d",&n);
	printf("Odd Numbers Generated : ");
	for (i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			printf("%d ",i);
		}
	}
}
