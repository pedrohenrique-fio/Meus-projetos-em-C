#include <stdio.h>

void CtoF () {
    /* Demonstra ao usuário qual opção foi escolhida e inicia o código */
    printf ("\n - OPÇÃO 1 ESCOLHIDA, REALIZAREMOS A CONVERSÃO DE CELSIUS PARA FAHREINHEIT -");
    
    /* Inicializa a variável que vai receber o valor em celsius e a que vai receber o valor convertido 
    para Fahreinheit */
    float c = 0;
    float convertido = 0;
    
    /* Pergunta ao usuário qual o valor em Celsius e realiza a conversão para Fahreinheit */
    printf ("\n -- Nos diga o valor da temperatura em Celsius para convertermos.\n");
    scanf("%f" , &c);
    convertido = c * 1.8 + 32;
    
    /* Mostra a conversão feita */
    printf ("-- %.2f°C em Fahreinheit é igual a: %.2f°F.", c , convertido);
}

void FtoC () {
    /* Demonstra ao usuário qual opção foi escolhida e inicia o código */
    printf ("\n - OPÇÃO 2 ESCOLHIDA, REALIZAREMOS A CONVERSÃO DE FAHREINHEIT PARA CELSIUS -");
    
    /* Inicializa a variável que vai receber o valor em Fahreinheit e a que vai receber o valor convertido 
    para Celsius */
    float f = 0;
    float convertido = 0;
    
    /* Pergunta ao usuário qual o valor em Fahreinheit e realiza a conversão para Celsius */
    printf ("\n -- Nos diga o valor da temperatura em Fahreinheit para convertermos.\n");
    scanf("%f" , &f);
    convertido = (f-32)/1.8;
    
    /* Mostra a conversão feita */
    printf ("-- %.2f°F em Fahreinheit é igual a: %.2f°C.", f , convertido);
}

void CMtoM () {
    /* Demonstra ao usuário qual opção foi escolhida e inicia o código */
    printf ("\n - OPÇÃO 3 ESCOLHIDA, REALIZAREMOS A CONVERSÃO DE CM PARA M -");
    
    /* Inicializa a variável que vai receber o valor em cm e a que vai receber o valor convertido 
    para m */
    float cm = 0;
    float convertido = 0;
    
    /* Pergunta ao usuário qual o valor em cm e realiza a conversão para m */
    printf ("\n -- Nos diga o valor da medida em cm para convertermos.\n");
    scanf("%f" , &cm);
    convertido = cm/100;
    
    /* Mostra a conversão feita */
    printf ("-- %.2fcm em m é igual a: %.2fm.", cm , convertido);
}

void MtoCM () {
    /* Demonstra ao usuário qual opção foi escolhida e inicia o código */
    printf ("\n - OPÇÃO 4 ESCOLHIDA, REALIZAREMOS A CONVERSÃO DE M PARA CM -");
    
    /* Inicializa a variável que vai receber o valor em m e a que vai receber o valor convertido 
    para cm */
    float m = 0;
    float convertido = 0;
    
    /* Pergunta ao usuário qual o valor em m e realiza a conversão para cm */
    printf ("\n -- Nos diga o valor da medida em m para convertermos.\n");  
    scanf("%f" , &m);
    convertido = m * 100;
    
    /* Mostra a conversão feita */
    printf ("-- %.2fm em cm é igual a: %.2fcm.", m , convertido);
}

void POUNDtoKG () {
    /* Demonstra ao usuário qual opção foi escolhida e inicia o código */
    printf ("\n - OPÇÃO 6 ESCOLHIDA, REALIZAREMOS A CONVERSÃO DE LIBRA PARA KG -");
    
    /* Inicializa a variável que vai receber o valor em libras e a que vai receber o valor convertido 
    para kilos */
    float l = 0;
    float convertido = 0;
    
    /* Pergunta ao usuário qual o valor em lb e realiza a conversão para kg */
    printf ("\n -- Nos diga o valor da medida em libra para convertermos.\n");
    scanf("%f" , &l);
    convertido = l/2.205;
    
    /* Mostra a conversão feita */
    printf ("-- %.2flb em kg é igual a: %.2fkg.", l , convertido);
}

void KGtoPOUND () {
    /* Demonstra ao usuário qual opção foi escolhida e inicia o código */
    printf ("\n - OPÇÃO 5 ESCOLHIDA, REALIZAREMOS A CONVERSÃO DE KG PARA LIBRA -");
    
    /* Inicializa a variável que vai receber o valor em kg e a que vai receber o valor convertido 
    para lb */
    float k = 0;
    float convertido = 0;
    
    /* Pergunta ao usuário qual o valor em kg e realiza a conversão para lb */
    printf ("\n -- Nos diga o valor da medida em kilos para convertermos.\n");
    scanf("%f" , &k);
    convertido = k*2.205;
    
    /* Mostra a conversão feita */
    printf ("-- %.2fkg em lb é igual a: %.2flb.", k , convertido);
}

void DOLtoREAL () {
    /* Demonstra ao usuário qual opção foi escolhida e inicia o código */
    printf ("\n - OPÇÃO 7 ESCOLHIDA, REALIZAREMOS A CONVERSÃO DE DOLAR PARA REAL -");
    
    /* Inicializa a variável que vai receber o valor em dolares e a que vai receber o valor convertido 
    para reais */
    float d = 0;
    float convertido = 0;
    
    /* Pergunta ao usuário qual o valor em dolar e realiza a conversão para real */
    printf ("\n -- Nos diga o valor da quantia em dolares para convertermos.\n");
    scanf("%f" , &d);
    convertido = d/5.38;
    
    /* Mostra a conversão feita */
    printf ("-- %.2f$ em R$ é igual a: %.2fR$.", d , convertido);
}
    
void REALtoDOL () {
    /* Demonstra ao usuário qual opção foi escolhida e inicia o código */
    printf ("\n - OPÇÃO 8 ESCOLHIDA, REALIZAREMOS A CONVERSÃO DE REAL PARA DOLAR -");
    
    /* Inicializa a variável que vai receber o valor em real e a que vai receber o valor convertido 
    para dolar */
    float r = 0;
    float convertido = 0;
    
    /* Pergunta ao usuário qual o valor em real e realiza a conversão para dolar */
    printf ("\n -- Nos diga o valor da quantia em reais para convertermos.\n");
    scanf("%f" , &r);
    convertido = r*5.38;
    
    /* Mostra a conversão feita */
    printf ("-- %.2fR$ em $ é igual a: %.2f$.", r , convertido);
}
