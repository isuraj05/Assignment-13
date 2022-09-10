#include<stdio.h>
#include<conio.h>
int hcf(int,int);
int main()
{
	int a,b,h;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	h=hcf(b,a%b);
	printf("HCF of the given numbers is %d",h);
	getch();
}

int hcf(int a,int b)
{	
	if(b==0)
		return a;
	hcf(b,a%b);
}
