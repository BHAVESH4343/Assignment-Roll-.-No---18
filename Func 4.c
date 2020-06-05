#include<stdio.h>
void prime();
int main()
{
  printf("\n\t\tWithout Argument Without Return Type\n");
  prime();
  return 0;
}
void prime()
{
  	int x,n,i;
    scanf("%d",&x);
    n=x/2;
	for(i=0;i<100;i++)
{ 
    if(n==1)
    {
      printf("It is a prime");
      break;
    }
    else if(x%n==0)
    {
      printf("It is not a prime");
      break;
    }
    else
	{
      n=n-1;
     continue;
    }
}
}
