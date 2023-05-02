#include<stdio.h>
int main()
{
	int n;
	printf("Enter the Number : ");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("%d is an Even Number",n);
	}
	else
	{
		printf("%d is an Odd Number",n);
	}
}
