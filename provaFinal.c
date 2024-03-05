#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct Aluno{
    char nome[50];
    int matricula;
    float notas[3];
    float media;
    char resultado[20];
};

void InserirDados(int i, int j, struct Aluno alunos[3]){
    printf("----- Aluno N %d ----- \n", i + 1);
    printf("Insira o nome do aluno: ");
    scanf("%s", alunos[i].nome);
    printf("Insira a matricula do aluno: ");
    scanf("%d", &alunos[i].matricula);
    for (j = 0; j < 3; j++){
        printf("Insira a nota %d: ", j + 1);
        scanf("%f", &alunos[i].notas[j]);
        fflush(stdin);
    };
    alunos[i].media = 0;
    for (j = 0; j < 3; j++){
        alunos[i].media += alunos[i].notas[j];
    };
    alunos[i].media /= 3;
    if (alunos[i].media >= 7){
        sprintf(alunos[i].resultado, "Aprovado!");
    } else if (alunos[i].media < 7 && alunos[i].media >= 5){
        sprintf(alunos[i].resultado, "Recuperacao!");
    } else if (alunos[i].media < 5){
        sprintf(alunos[i].resultado, "Reprovado!");
    }
};

void PrintarDados(int i, int j, struct Aluno alunos[3]){
    printf("----- Perfil do Aluno N %d -----\n", i + 1);
    printf("Nome: %s \n", alunos[i].nome);
    printf("Matricula: %d \n", alunos[i].matricula);
    printf("Notas: ");
    for (j = 0; j < 3; j++){
        printf("%.2f ", alunos[i].notas[j]);
    }
    printf("\n");
    printf("Media: %.2f \n", alunos[i].media);
    printf("Resultado: %s\n", alunos[i].resultado);
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i = 0, j = 0;
    struct Aluno alunos[3];

    for (i = 0; i < 3; i++){
        InserirDados(i, j, alunos);
        printf("\n");
    };

    printf("\n\n-------------------------\n\n");

    for (i = 0; i < 3; i++){
        PrintarDados(i, j, alunos);
        printf("\n \n");
    };

    system("pause");

    return 0;
}
