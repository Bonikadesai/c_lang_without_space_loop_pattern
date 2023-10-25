#include<stdio.h>
int main()
{
 int i,j;
  int n=1;
  char m='A';
 for(i=1; i<=5; i++)
 {
  for(j=i; j>=1; j--)
  {
    if(j%2==0)
       printf(" %c",m++);
    else
       printf(" %d",n++);
  }
  printf("\n");
 }
 
 return 0;
}
