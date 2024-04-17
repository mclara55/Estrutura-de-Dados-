/*
Escreva um programa para exibir a seguinte tela. Cada linha de asteriscos
deve ser impressa com uma chamada à função linhaDeAsteriscos().

*****
IFSUL
**********************

• Como permitir que a função linhaDeAsteriscos() exiba uma
quantidade qualquer de asteriscos?
*/

//variáveis locais. Só existem dentro da função onde foram declaradas.
//Para quebrar o isolamentodas variáveis se declara parâmetros de entrada.

#include <stdio.h>
#include <stdlib.h>

    void linhaDeAsteriscos(int n);
int main()
{
    linhaDeAsteriscos(5);
    printf("\nIFSUL\n");
    linhaDeAsteriscos(22);

    system("pause");
    
    return 0;
}

    void linhaDeAsteriscos(int n)

    {
    int i;
    for (i=1; i<=n; i++)
    printf("*");
}


