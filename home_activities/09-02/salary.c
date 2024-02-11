#include <stdio.h>

int main()
{
    float workedHours = 0, extraHours = 0;
    printf("Write your worked hours: ");
    scanf("%f", &workedHours);
    printf("Write your worked extra hours: ");
    scanf("%f", &extraHours);
    float salary = 1412;
    float workedHoursValue = salary / 8; 
    float extraHoursValue = salary / 4;
    float result = (workedHours * workedHoursValue) + (extraHours * extraHoursValue);
    printf("Your salary will be: %f\n", result);
    return 0;
}