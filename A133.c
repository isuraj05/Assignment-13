#include<stdio.h>
#include<conio.h>
int sumFirstEven(int);
int main()
{
	int n,s;
	printf("Enter a number: ");
	scanf("%d",&n);
	s=sumFirstEven(n);
	printf("Sum of first N even natural number is %d",s);
	getch();
}
int sumFirstEven(int n)
{
	int sum=0;
	if(n==1)
	    return 2;
	sum=n*2+sumFirstEven(n-1);
	return sum;
}
