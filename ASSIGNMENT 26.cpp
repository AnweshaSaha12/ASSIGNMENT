#include <stdio.h>
int main() 
{
	float num1, num2;
    char c;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &c); 

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (c) 
	{
        case '+':
            printf("Result: %f + %f = %f\n", num1, num2, num1 + num2);
            break;

        case '-':
            printf("Result: %f - %f = %f\n", num1, num2, num1 - num2);
            break;

        case '*':
            printf("Result: %f * %f = %f\n", num1, num2, num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                printf("Result: %f / %f = %f\n", num1, num2, num1 / num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;

        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}

