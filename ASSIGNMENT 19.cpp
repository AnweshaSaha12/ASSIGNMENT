#include <stdio.h>

int main() 
{
    char t;

    printf("Enter the result of coin toss (H for Head, T for Tail): ");
    scanf(" %c", &t); 
    if (t == 'H' || t == 'h')
        printf("It is Head.\n");

    if (t == 'T' || t == 't')
        printf("It is Tail.\n");

    return 0;
}
