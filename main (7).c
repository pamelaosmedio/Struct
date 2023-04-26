#include <stdio.h>

int main(void){

    struct {
        int matricula;
        char nome[50];
        char dataNas[11];
        char cargo[30];
        float salario;
    }func;
    

    printf("digite a matricula: ");
    scanf("%d", &func.matricula);
    printf("\n\n digite o nome: ");
    fgets(func.nome,50,stdin);
    printf("\n\ndigite a data de nascimento: ");
    fgets(func.dataNas,11,stdin);
    printf("\n\n digite o cargo: ");
    fgets(func.cargo,30,stdin);
    printf("\n\n digite o salario: ");
    scanf("%f", &func.salario);
    
    printf("\n Funcionario: %s", func.nome);
    printf("\n matricula: %d", func.matricula);
    printf("\n Data de nascimento: %s", func.dataNas);
    printf("\n Cargo: %s", func.cargo);
    printf("\n Salario: %.2f", func.salario);
}