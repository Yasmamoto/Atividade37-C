// Atividade de C, feito no dia 20/09/2023, questão 37.
#include <stdio.h>
int main()
{
    //Programa da média dos três bimestres do aluno
    
    int matricula = 0;
    float nota1 = 0;
    float nota2 = 0;
    float nota3 = 0;
    float nota4 = 0;
    
    printf("Digite a sua matricula: ");
    scanf("%i", &matricula);
    
    printf("\nDigite a nota do primeiro bimestre: ");
    scanf("%f", &nota1);
    printf("\nDigite a nota do segundo bimestre: ");
    scanf("%f", &nota2);
    printf("\nDigite a nota do terceiro bimestre: ");
    scanf("%f", &nota3);
    
    
    float peso2 = nota1 * 2;
    float peso3 = nota2 * 3;
    float peso4 = nota3 * 4;
    
    float media = (peso2 + peso3 + peso4)/3;
    
    printf("\n--> Matricula: %i\n--> Media: %.2f", matricula, media);
    
    return 0;
    
}
