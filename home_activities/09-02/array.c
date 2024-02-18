#include <stdio.h>

int main()
{
    int vector[10];
    int i, sum = 0, evenCount = 0, oddCount = 0;
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vector[i]);
        sum += vector[i];
        if (vector[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }
    float average = (float)sum / 10;
    printf("Average of the entered values: %.2f\n", average);
    printf("Quantity of even numbers: %d\n", evenCount);
    printf("Quantity of odd numbers: %d\n", oddCount);
    return 0;
}
