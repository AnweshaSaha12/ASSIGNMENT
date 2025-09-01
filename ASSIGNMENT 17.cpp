#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number:");
    scanf("%d",&a);
    b=a-((a/10)*10);
    printf("The last digit is:%d\n",b);
    
	return 0;
}
