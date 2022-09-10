#include<stdio.h>
#include<conio.h>
int power(int,int);
int main()
{
	int n,p,cal;
	printf("Enter a number and its power you want to see: ");
	scanf("%d%d",&n,&p);
	cal=power(n,p);
	printf("Power of the given number is %d",cal);
	getch();
}
int power(int n,int p)
{
	int pow;
	if(p==0)
	    return 1;
	pow=n*power(n,p-1);
	return pow;
}
