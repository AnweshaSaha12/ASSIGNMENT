#include<stdio.h>

int main()
{
    float c1,c2,f1,f2;
    printf("Enter the temperature in celsius c1:\n");
    scanf("%f",&c1);
    printf("Enter the temperature in farhenheit f1:\n");
    scanf("%f",&f1);
    c2=(9/5*c1)+32;
    f2=(f1-32)*5/9;
    printf("The temperature in farhenheit is:%f\n",c2);
    printf("The temperature in celsius is:%f\n",f2);
    
	return 0;
}

