#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 100

struct aluno
{
    char nome[81];
    char matricula[8];
    char turma;
    float n1;
    float n2;
    float n3;
};

typedef struct aluno Aluno;

Aluno alunos[MAX_ALUNOS];
int num_alunos = 0;

void showStudents()
{
    printf("Enter data for students (name, registration, class, grades):\n");
    for (int i = num_alunos; i < MAX_ALUNOS; i++)
    {
        printf("Student %d:\n", i + 1);
        scanf("%s %s %c %f %f %f", alunos[i].nome, alunos[i].matricula, &alunos[i].turma, &alunos[i].n1, &alunos[i].n2, &alunos[i].n3);
        num_alunos++;

        char continuar;
        printf("Do you want to enter data for another student? (y/n): ");
        scanf(" %c", &continuar);

        if (continuar != 'y' && continuar != 'Y')
            break;
    }
}

void atualizarAluno(char matricula[8])
{
    for (int i = 0; i < num_alunos; i++)
    {
        if (strcmp(alunos[i].matricula, matricula) == 0)
        {
            printf("Enter updated data for student %s:\n", matricula);
            scanf("%s %c %f %f %f", alunos[i].nome, &alunos[i].turma, &alunos[i].n1, &alunos[i].n2, &alunos[i].n3);
            return;
        }
    }
    printf("Student with matriculation number %s not found.\n", matricula);
}

void excluirAluno(char matricula[8])
{
    for (int i = 0; i < num_alunos; i++)
    {
        if (strcmp(alunos[i].matricula, matricula) == 0)
        {
            for (int j = i; j < num_alunos - 1; j++)
            {
                alunos[j] = alunos[j + 1];
            }
            num_alunos--;
            printf("Student with matriculation number %s deleted.\n", matricula);
            return;
        }
    }
    printf("Student with matriculation number %s not found.\n", matricula);
}

void showApproved()
{
    printf("Passed students:\n");
    for (int i = 0; i < num_alunos; i++)
    {
        float media = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3) / 3;
        if (media >= 6.0)
        {
            printf("%s %s\n", alunos[i].nome, alunos[i].matricula);
        }
    }
}

void showRepproved()
{
    printf("Failed students:\n");
    for (int i = 0; i < num_alunos; i++)
    {
        float media = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3) / 3;
        if (media < 6.0)
        {
            printf("%s %s\n", alunos[i].nome, alunos[i].matricula);
        }
    }
}

int main()
{
    showStudents();
    showApproved();
    showRepproved();
    return 0;
}
