#include <stdio.h> /* Biblioteca padrão da Linguagem C */
#include "functions.h" /* Chama o cabeçalho do arquivo que carrega as funções usadas no código*/

int main() {
    /* Introdução da calculadora. */
    
    printf("- Calculadora De Operações básicas -\n");
    printf("------------------------------------\n");
    
    /* Inicialização das variáveis. */
    
    float num1 = 0;
    float num2 = 0;
    
    /* Armazenará o valor digitado pelo usuário. */
    
    printf("Digite o valor do primeiro número: \n");
    scanf("%f", &num1);
    printf("Digite o valor do segundo número: \n");
    scanf("%f", &num2);
    
    /* Criação da variável que será usada para verificar que tipo de operação o usuário quer fazer */
    int escolha = 0;
    printf("- ESCOLHA A OPERAÇÃO QUE VOCÊ GOSTARIA DE FAZER -\n");
    printf("- Digite 1 para adição, 2 para subtração, 3 para multiplicação e 4 para divisão. -\n");
    scanf("%d", &escolha);
    
    /* Após a escolha da variável, programa chama as funções das opoerações de acordo com o que for escolhido. */
    switch (escolha){
        case 1:
        adicao(num1,num2);
        break;
        case 2:
        subtracao(num1,num2);
        break;
        case 3:
        multiplicacao(num1,num2);
        break;
        case 4:
        divisao(num1,num2);
        break;
        default: printf("Opção indisponivel! \n");
        break;
    }
    return 0;
    
}