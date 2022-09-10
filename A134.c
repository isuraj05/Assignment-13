#include<stdio.h>
#include<conio.h>
int sumFirstSqr(int);
int main()
{
	int n,s;
	printf("Enter a number: ");
	scanf("%d",&n);
	s=sumFirstSqr(n);
	printf("Sum of squares of first N natural number is %d",s);
	getch();
}
int sumFirstSqr(int n)
{
	int sum=0;
	if(n==1)
	    return 1;
	sum=n*n+sumFirstSqr(n-1);
	return sum;
}
