#include<stdio.h>
int main()
{
	int n,i,a,b,c;
	printf("Numbers of terms : ");
	scanf("%d",&n);
	printf("Fibonnaci Series : ");
	a=0;
	b=1;
	for (i=1;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d ");
	}
}
