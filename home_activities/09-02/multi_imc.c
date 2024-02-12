#include <stdio.h>

int main()
{
    int close = 0;

    while (close == 0)
    {
        printf("\n\nVerificar o IMC de outra pessoa(0)\n");
        printf("Fechar o terminal(1)\n\n");
        scanf("%d", &close);

        switch (close)
        {
        case 0:
            float height = 0, weight = 0;
            printf("Write your height: ");
            scanf("%f", &height);
            printf("Write your weight: ");
            scanf("%f", &weight);

            float imc = weight / (height * height);
            printf("\n\n%f", imc);

            if (imc < 20)
            {
                printf("\nYou're below of your ideal weight");
            }
            else if (imc >= 20 && imc < 25)
            {
                printf("\nYou're in your ideal weight");
            }
            else if (imc >= 25 && imc < 30)
            {
                printf("\nYou're over your ideal weight");
            }
            else if (imc >= 30 && imc < 40)
            {
                printf("\nYou're obese");
            }
            else if (imc > 40)
            {
                printf("\nMorbidly obese");
            }
            break;
        case 1:
            break;
        default:
            break;
        }
    }
}