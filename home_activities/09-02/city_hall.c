#include <stdio.h>

int main() {
    int num_children, num_people_more_than_four_children = 0;
    float salary, average_children, highest_salary = 0, lowest_salary = 0, total_children = 0;
    printf("Enter salaries and number of children for the inhabitants.\n");
    printf("Enter a negative salary to terminate.\n\n");
    while (1) {
        printf("Enter the salary: ");
        scanf("%f", &salary);
        if (salary < 0) {
            break;
        }
        printf("Enter the number of children: ");
        scanf("%d", &num_children);
        if (num_children > 4) {
            num_people_more_than_four_children++;
        }
        total_children += num_children;
        if (highest_salary == 0 || salary > highest_salary) {
            highest_salary = salary;
        }
        if (lowest_salary == 0 || salary < lowest_salary) {
            lowest_salary = salary;
        }
    }
    if (num_people_more_than_four_children != 0) {
        average_children = total_children / num_people_more_than_four_children;
        printf("\nNumber of people with more than 4 children: %d\n", num_people_more_than_four_children);
        printf("Average number of children: %.2f\n", average_children);
        printf("Highest salary: %.2f\n", highest_salary);
        printf("Lowest salary: %.2f\n", lowest_salary);
    } else {
        printf("No salaries were entered or no one has more than 4 children.\n");
    }
    return 0;
}
