#include <stdio.h>

int main()
{
    struct dados_de_aluno
    {
        char nome [50];
        float media;
        int ano;
    };
    
    struct dados_de_aluno aluno;
    printf("digite o nome do aluno: \n");
    fgets(aluno.nome, 50, stdin);
    printf("digite a media escolar: \n");
    scanf("%f", &aluno.media);
    printf("digite o ano escolar: \n");
    scanf("%d", &aluno.ano);
    
    printf("Nome: %s", aluno.nome);
    printf("Media: %f\n", aluno.media);
    printf("Ano: %d\n", aluno.ano);
}