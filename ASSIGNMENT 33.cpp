#include <stdio.h>
#include<stdio.h>
int main() 
{
    int n, i,f=1;
    
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++)
	{
        f = f*i;
    }

    printf("Factorial of %d is: %d\n", n, f);

    return 0;
}

