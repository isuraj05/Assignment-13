#include<stdio.h>
#include<conio.h>
int sumFirstOdd(int);
int main()
{
	int n,s;
	printf("Enter a number: ");
	scanf("%d",&n);
	s=sumFirstOdd(n);
	printf("Sum of first N odd natural number is %d",s);
	getch();
}
int sumFirstOdd(int n)
{
	int sum=0;
	if(n==1)
	    return 1;
	sum=n*2-1+sumFirstOdd(n-1);
	return sum;
}
