#include<stdio.h>
#include<conio.h>
int fibonacci(int);
int main()
{
	int n,i;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		printf("%d  ",fibonacci(i));
	getch();
}

int fibonacci(int n)
{
	if(n==0||n==1)
	    return 1-n;
	return fibonacci(n-1)+fibonacci(n-2);
}
