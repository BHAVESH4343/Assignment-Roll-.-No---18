#include<stdio.h>
struct Computer
{
char Brandname[50];
char OperatingSystem[50];
int ComputerNo,RAM;
};
void RAM (struct Computer e[50]);   //Function Declaration....
int main()
{
int i,g=1;
struct Computer e[50];
for(i=0;i<2;i++)
{
	printf("Enter the data for Computer No - %d\n",g);
	g++;
	scanf("%d\n",&e[i].ComputerNo);
	scanf("%s\n",e[i].Brandname);
	scanf("%s\n",e[i].OperatingSystem);
	scanf("%d",&e[i].RAM);
}
printf("\n\n\n");
for(i=0;i<2;i++)
{
	printf("Computer No = %d\n",e[i].ComputerNo);
	printf("Brand Name = %s\n",e[i].Brandname);
	printf("Operating System = % s\n",e[i].OperatingSystem);
	printf("RAM = %d\n\n",e[i].RAM);
}
RAM(e);      //Function Call...

return 0;
}
void RAM (struct Computer e[50]) //Structures Passed to a Function.....Function Definition
{
struct Computer *p;             // Declaring pointers in Structures....
int sum=0,i=0;
p=e;
for(i=0;i<2;i++)
{

	sum+=p->RAM;                //Usage of pointer variable.....
	p++;
}
printf("\n\nSum of both the RAM of the Computers = %d",sum);
}
