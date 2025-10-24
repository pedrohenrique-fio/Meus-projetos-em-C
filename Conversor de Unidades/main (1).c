#include <stdio.h> /* Importa a biblioteca padrão da linguagem C */
#include "functions.h" /* Importa as funções externas criadas pelo código */
#include <ctype.h> /* Importa uma biblioteca externa para converter valores em char para lowercase */
#include <string.h> /* Importa uma biblioteca externa para converter char em string (usado para o loop) */

int main()
{
    /* Criação da variável usada para loopar o código e fazer com que o usuário faça quantas conversões quiser 
    antes de sair do código */
    char resposta[10];
    
    /* Começo do while para rodar o código enquanto a resposta for "sim" */
    do {
        
    /* Introdução sobre a função do código */
    printf(" - CONVERSOR DE UNIDADES DIVERSAS -");
    
    /* Inicialização da variável usada para iniciar o switch-case */
    int escolha = 0;
    
    /* Impressão das opções que o usuário irá escolher qual tipo de conversão ele deseja realizar */
    printf("\n -- POR FAVOR, SELECIONE O NÚMERO DO TIPO DE CONVERSÃO QUE VOCÊ DESEJA REALIZAR:");
    printf("\n -- 1: Celsius => Fahrenheit, 2: Fahrenheit => Celsius, 3: cm => m, 4: m => cm, 5: kg => libras, 6: libras => kg, 7: dolar => real, 8: real => dolar.\n");
    
    /* Scanf que irá alocar na variável escolha o valor digitado pelo usuário */
    scanf ("%d" , &escolha);
    
    /* Inicio do switch-case que de acordo com a opção escolhida pelo usuário irá aplicar uma função diferente */
    switch (escolha) {
        
        case 1:
        CtoF();
        break;
        
        case 2:
        FtoC();
        break;
        
        case 3:
        CMtoM();
        break; 
        
        case 4:
        MtoCM();
        break;
        
        case 5:
        KGtoPOUND();
        break;
        
        case 6:
        POUNDtoKG();
        break;
        
        case 7:
        DOLtoREAL();
        break;
        
        case 8:
        REALtoDOL();
        break;
        
        default: 
        printf ("Opção não fornecida pelo código!");
        break;
    }
    
    /* Pergunta realizada ao usuário para saber se ele gostaria de continuar usando o código */
    printf("\n - Gostaria de executar o código mais uma vez? (Escreva sim minúsculo caso queira) - \n");
    
    /* Escaneia o valor em char digitado pelo usuário */
    scanf("%s", &resposta);
    }
    
    /* Aplica a condição do código funcionar, no caso se o valor digitado pelo usuário for igual a "sim" 
    e o strcmp converte o valor da varíavel resposta e do dígito "sim" para string, para que os dois possam ser comparados a "0"
    ou seja iguais.*/
    while (strcmp(resposta, "sim") == 0);
    
    /* Se resposta não for igual a "sim", o programa se encerra  */
    printf("Programa encerrado.");
    
    return 0;
}
