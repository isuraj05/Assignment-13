#include<stdio.h>
#include<conio.h>
int sumFirstN(int);
int main()
{
	int n,s;
	printf("Enter a number: ");
	scanf("%d",&n);
	s=sumFirstN(n);
	printf("Sum of first N natural number is %d",s);
	getch();
}
int sumFirstN(int n)
{
	int sum=0;
	if(n==1)
	    return 1;
	sum=n+sumFirstN(n-1);
	return sum;
}
