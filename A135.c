#include<stdio.h>
#include<conio.h>
int sumDigit(int);
int main()
{
	int n,s;
	printf("Enter a number: ");
	scanf("%d",&n);
	s=sumDigit(n);
	printf("Sum of the digits of the given number is %d",s);
	getch();
}
int sumDigit(int n)
{
	int sum=0;
	if(n==0)
	    return 0;
	sum=n%10+sumDigit(n/10);
	return sum;
}
