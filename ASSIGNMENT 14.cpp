#include <stdio.h>
#include <math.h>

int main() 
{
    float num,floorvalue,ceilvalue;

    printf("Enter an integer (positive or negative): ");
    scanf("%f", &num);
	floorvalue = floor(num);
    ceilvalue = ceil(num);

    printf("Floor value: %.0f\n", floorvalue );
    printf("Ceil value: %.0f\n", ceilvalue );

    return 0;
}
