#include<stdio.h>
#include<conio.h>
int factorial(int);
int main()
{
	int n,f;
	printf("Enter a number: ");
	scanf("%d",&n);
	f=factorial(n);
	printf("Factorial of the given number is %d",f);
	getch();
}
int factorial(int n)
{
	int fact;
	if(n==1)
	    return 1;
	fact=n*factorial(n-1);
	return fact;
}
