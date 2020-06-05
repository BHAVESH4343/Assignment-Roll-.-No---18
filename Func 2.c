#include<stdio.h>
int prime(int x,int n);
int main()
{
  printf("\n\t\tWith Argument Without Return Type\n");
  int x,result;
  scanf("%d",&x);
  int n=x/2; 
  result=prime(x,n);
  return 0;
}
  int prime(int x,int n)
  {
    if(n==1)
    {
      printf("It is a prime");
    }
    else if(x%n==0)
    {
      printf("It is not a prime");
    }
    else
	{
      n=n-1;
      prime(x,n);
    }
  }
