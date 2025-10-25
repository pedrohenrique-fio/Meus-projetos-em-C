#include <stdio.h> /* Inicializa a biblioteca padrão da linguagem C */
#include <stdlib.h> /* Inicializa a biblioteca externa para usar a funçáo rand */
#include <time.h> /* Inicializa a bibilioteca externa para usar a função srand(time(NULL)) 
que faz com que o número randomizado nunca se repita*/
#include <string.h> /* Importa uma biblioteca externa para converter char em string (usado para o loop) */

int main()
{
    
    /* Introdução do código imprimindo na tela as informações sobre o jogo */
    printf("- JOGO DA ADVINHAÇÃO - \n");
    printf("- Eu irei pensar em um número entre 0 e 10! Sua missão é advinhar qual! Boa sorte! - \n");
    
    /* Chama a função srand que permite com que o número randomizado nunca seja repetido */
     srand(time(NULL));
     
    /* Cria as variáveis que serão usadas futuramente, o número que será randomizado de 1 a 10 e o valor digitado pelo usuário */
    int NumAleatorio;
    int NumUsuario;
    char resposta[10];
    
    /* Começo do while para rodar o código enquanto a resposta for "sim" */
    do {
        
    /* Pergunta ao usuário o número que ele deseja tentar advinhar e escaneia ele de acordo com o teclado do personagem*/
    printf("- Insira o número que você acha que seja: - \n");
    scanf("%d", &NumUsuario);
    NumAleatorio = rand() % 11;
    
    /* Verifica se o número que o usuário digitou é valido para ser usado no código (menor que 11 e maior ou igual a 0) */
    if (NumUsuario < 11 && NumUsuario >= 0) {
    
     /* Mostra o número gerado randomicamente e o número digitado pelo usuário */    
    printf("-- Número pensado por mim: %d \n" , NumAleatorio);
    printf("-- Número digitado por você: %d \n" , NumUsuario);
    
     /* Verifica se o número número aleatório é igual ao número do usuário */    
    if(NumAleatorio == NumUsuario) {
        
            /* Imprime que o usuário venceu caso a condição seja verdadeira */   
        printf("- Parabéns! Você ganhou de mim! - \n");
        
    }
    
    else {
        
        /* Imprime que o usuário perdeu caso a condição seja falsa */  
        printf("- Poxa! Não foi desta vez! Tente novamente - \n");
        
    }
    }
    
    else {
        
        /* Imprime que o usuário digitou um valor inadequado */  
        printf("- Esse número não vale bobinho - \n");
        
    }
    
    /* Pergunta realizada ao usuário para saber se ele gostaria de continuar usando o código */
    printf("\n - Gostaria de executar o código mais uma vez? (Escreva sim minúsculo caso queira) - \n");
    
    /* Escaneia o valor em char digitado pelo usuário */
    scanf("%s", &resposta);
    
    }
     /* Aplica a condição do código funcionar, no caso se o valor digitado pelo usuário for igual a "sim", o strcmp converte 
     o valor da varíavel resposta e do dígito "sim" para string, para que os dois possam ser comparados a "0",
    ou seja iguais.*/
    while (strcmp(resposta, "sim") == 0);
    
    printf("\n - Até a proxima! - \n");
    
    return 0;
}
