#include<stdio.h>
	int main()
{
	int s,p,r,t;
	printf("Enter the principal:\n");
	scanf("%d",&p);
	printf("Enter the rate:\n");
	scanf("%d",&r);
	printf("Enter the time:\n");
	scanf("%d",&t);
	s=(p*r*t)/100;
	printf("The Simple Interest is:%d",s);
	
	return 0;
}
