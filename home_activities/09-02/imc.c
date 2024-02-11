#include <stdio.h>

int main()
{
    float height = 0, weight = 0;
    printf("Write your height: ");
    scanf("%f", &height);
    printf("Write your weight: ");
    scanf("%f", &weight);

    float imc = weight / (height * height);
    printf("%f", imc);

    if (imc < 20)
    {
        printf("You're below of your ideal weight");
    }
    else if (imc >= 20 && imc < 25)
    {
        printf("You're in your ideal weight");
    }
    else if (imc >= 25 && imc < 30)
    {
        printf("You're over your ideal weight");
    }
    else if (imc >= 30 && imc < 40)
    {
        printf("You're obese");
    }
    else if (imc > 40) {
        printf("Morbidly obese");
    }
    return 0;
}