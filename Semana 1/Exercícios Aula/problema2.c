/*
PROBLEMA 2:
 Escreva um programa para ler um inteiro Q e imprimir Q linhas de
22 asteriscos usando a função linhaDeAsteriscos() desenvolvida
anteriormente.
Informe Q: 4
**********************
**********************
**********************
**********************
*/

#include <stdio.h>
#include <stdlib.h>

    void linhaDeAsteriscos(void);

int main()
{
    int i,q;
    
    printf("Informe Q:");
    scanf("%d",&q);

    for (i=1; i<=q; i++) {
    linhaDeAsteriscos();
    printf("\n");
}
    system("pause");
    return 0;
}
    void linhaDeAsteriscos()
    {
        
    int i;

    for (i=1; i<=22; i++)

    printf("*");

}

/*
Variáveis Locais: 

 São visíveis apenas no local onde são
declaradas.

 São criadas quando a execução da função
inicia e destruídas quando termina.

• Estão isoladas dentro da função
onde foram declaradas.
*/