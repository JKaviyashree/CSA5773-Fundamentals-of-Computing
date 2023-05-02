#include <stdio.h>
int main ()
{
  int n,sum ;
  printf("Limit of sum of cubes number : ");
  scanf("%d",&n);
  sum = n*(n+1)/2;
  sum *= sum;
  /*for (i=0;i<n;i++)
  {
      sum+=i*i*i;
  }
  */
  printf("Sum of cubes : %d",sum);
}
