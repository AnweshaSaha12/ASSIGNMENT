#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,p,r,n,t;
    printf("Enter the principal:");
    scanf("%f",&p);
    printf("Enter the rate:");
    scanf("%f",&r);
    printf("Enter the time:");
    scanf("%f",&t);
    printf("Enter the number of times the interest is calculated:");
    scanf("%f",&n);
    a=(1+r/n);
    b=(n*t);
    c=pow(a,b);
    printf("The Compound Interest is:%f\n",c);
    
	return 0;
}
