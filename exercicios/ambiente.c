#import <stdio.h>
#import <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    char nome[30];
    int idade;
    float peso;
    printf("Qual � o seu nome? ");
    fflush(stdin);
    gets(nome);
    printf("Qual � sua idade? ");
    fflush(stdin);
    scanf("%i", &idade);
    printf("Qual � o seu peso? ");
    fflush(stdin);
    scanf("%f", &peso);
    printf("------ PROCESSANDO ------\n");
    printf("Muito prazer, %s. Voc� tem %i anos e pesa %.1f Kg correto?", nome, idade, peso);
    printf("\nFIM");

}
