#include <stdio.h>

float adicao(float n1, float n2) {
    
    printf("- OPERAÇÃO ESCOLHIDA: ADIÇÃO -\n");
    float soma = n1 + n2;
    printf("O resultado de %.2f + %.2f = %.2f", n1, n2, soma);
    
}

float subtracao(float n1, float n2) {
    
    printf("- OPERAÇÃO ESCOLHIDA: SUBTRAÇÃO - \n");
    float menos = n1 - n2;
    printf("O resultado de %.2f - %.2f = %.2f", n1, n2, menos);
    
}

float multiplicacao(float n1, float n2) {
    
    printf("- OPERAÇÃO ESCOLHIDA: MULTIPLICAÇÃO - \n");
    float vezes = n1 * n2;
    printf("O resultado de %.2f x %.2f = %.2f", n1, n2, vezes);
    
}

float divisao(float n1, float n2) {
    
    printf("- OPERAÇÃO ESCOLHIDA: DIVISÃO - \n");
    float dividir = n1 / n2;
    printf("O resultado de %.2f ÷ %.2f = %.2f", n1, n2, dividir);
    
}
