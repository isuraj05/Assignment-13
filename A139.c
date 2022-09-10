#include<stdio.h>
#include<conio.h>
int countDigit(int);
int main()
{
	int n,c;
	printf("Enter a number: ");
	scanf("%d",&n);
	c=countDigit(n);
	printf("Number of digits are %d",c);
	getch();
}
int countDigit(int n)
{
	int count;
	if(n==0)
	    return;
	count=countDigit(n/10);
	count++;
	return count;
}
