#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("ENTER A :");
    scanf("%d",&a);
	printf("ENTER B : ");
	scanf("%d",&b);
	printf("\nBEFORE SWAP\nA : %d B : %d",a,b);  
	temp=a;
	a=b;
	b=temp; 
	/*
	a=a+b;
	b=a-b;    
	a=a-b;  
	*/ 
	printf("\nAFTER SWAP\nA : %d B : %d",a,b);	
}
