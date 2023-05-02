#include<stdio.h>
main ()
{
int num,rem,arm=0,i,temp;
printf("ENTER THE NUMBER : ");
scanf("%d",&num);
temp=num;
for (i=0;i<3;i++)
{
rem=num%10;
arm=arm+(rem*rem*rem);
num/=10;
}
printf("%d ",temp);
if (temp==arm)
printf("ARMSTRONG NUMBER\n");
else 
printf("NOT ARMSTRONG NUMBER\n");
}
