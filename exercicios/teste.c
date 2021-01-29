#import <stdio.h>
#import <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    char nome1[30], nome2[30], nome3[30];
    char sexo1, sexo2, sexo3;
    float nota1, nota2, nota3;
    printf("Cadastrando a primeira pessoa: \n");
    printf("------------------------------\n");
    printf("NOME: ");
    fflush(stdin);
    gets(nome1);
    printf("SEXO [M/F]: ");
    fflush(stdin);
    sexo1 = getchar();
    printf("NOTA: ");

    scanf("%f", &nota1);
    printf("------------------------------\n");

    printf("Cadastrando a segunda pessoa: \n");
    printf("------------------------------\n");
    printf("NOME: ");
    fflush(stdin);
    gets(nome2);
    printf("SEXO [M/F]: ");
    fflush(stdin);
    sexo2 = getchar();
    printf("NOTA: ");
    fflush(stdin);
    scanf("%f", &nota2);
    printf("------------------------------\n");

    printf("Cadastrando a terceira pessoa: \n");
    printf("------------------------------\n");
    printf("NOME: ");
    fflush(stdin);
    gets(nome3);
    printf("SEXO [M/F]: ");
    fflush(stdin);
    sexo3 = getchar();
    printf("NOTA: ");
    fflush(stdin);
    scanf("%f", &nota3);
    fflush(stdin);
    printf("Listagem Completa\n");
    printf("------------------------------\n");
    printf("NOME");
}
