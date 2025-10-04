#include <stdio.h>
int main() 
{
    int marks;
    char grade;

    printf("Enter your marks (0 - 100): ");
    scanf("%d", &marks);

    switch (marks / 10) {
        case 10:   
        case 9:    
            grade = 'A';
            break;

        case 8:    
            grade = 'B';
            break;

        case 7:    
            grade = 'C';
            break;

        case 6:    
            grade = 'D';
            break;

        case 5:    
            grade = 'E';
            break;

        default:   
            grade = 'F';
    }

    
    printf("Your Grade: %c\n", grade);

    return 0;
}


