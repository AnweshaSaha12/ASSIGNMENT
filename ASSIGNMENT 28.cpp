#include <stdio.h>

int main() 
{
    int g;
    float basicSalary, hra, da, totalSalary;

    printf("Enter employee grade (1, 2, or 3): ");
    scanf("%d", &g);

    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);

    switch (g) 
	{
        case 1:
            hra = 0.30 * basicSalary;  
            da = 0.95 * basicSalary;   
            break;

        case 2:
            hra = 0.25 * basicSalary;  
            da = 0.90 * basicSalary;   
            break;

        case 3:
            hra = 0.20 * basicSalary;  
            da = 0.80 * basicSalary;   
            break;

        default:
            printf("Invalid grade entered!\n");
            return 0;
    }


    totalSalary = basicSalary + hra + da;
    printf("Total Salary : %.2f\n", totalSalary);

    return 0;
}

