#include<stdio.h>
#include<conio.h>
int main()
{
  int n=7;
  int i,j;
  for(i=1; i<=n; i++)
{
  for(j=0; j<n; j++)
{
  printf(" %2d",(i*j)%2);
}
printf("\n");
}
  return 0;
}