#include<stdio.h>

int main()
{
    int a,p,l,b;
    printf("Enter the length:\n");
    scanf("%d",&l);
    printf("Enter the breadth:\n");
    scanf("%d",&b);
    a=l*b;
    p=2*(l+b);
    printf("The area is:%d\n",a);
    printf("The perimeter is:%d\n",p);
    
	return 0;
}

