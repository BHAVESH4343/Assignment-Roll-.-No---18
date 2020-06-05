#include<stdio.h>
int prime();
int main()
{
  printf("\n\t\tWithout Argument With Return Type\n");
  int result ;
  result=prime();
  if(result==1)
  {
    printf("It is a prime");
  }
  else
  {
    printf("It is not a prime");
  }
}
  int prime()
{
  	int x,n,i;
    scanf("%d",&x);
    n=x/2;
	for(i=0;i<100;i++)
{ 
    if(n==1)
    {
      return 1;
      break;
    }
    else if(x%n==0)
    {
      return 0;
      break;
    }
    else
	{
      n=n-1;
     continue;
    }
}
}
