#include <stdio.h>
#include <math.h>

int main() 
{
    float a, b, c;
    float r1, r2;

    printf("Enter coefficients ax^2+bx+c: ");
    scanf("%f %f %f", &a, &b, &c);

    r1= (-b + sqrt((pow(b,2)- 4*a*c)))/2*a;
	r2= (-b - sqrt((pow(b, 2)- 4*a*c)))/2*a;
	printf("the roots are %f and %f", r1,r2);
	return 0;

}

