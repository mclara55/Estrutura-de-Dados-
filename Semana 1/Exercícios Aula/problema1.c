/*
PROBLEMA 1:
 Escreva uma função que imprima uma linha com 22 asteriscos.
 A linha deve ser impressa com repetição.
 Imprimir a tela abaixo usando a função.
**********************
IFSUL
**********************
CSTSI
Logica de programação
**********************
Aluno: Fulano
**********************

*/

#include <stdio.h>
#include <stdlib.h>

void linhaDeAsteriscos(void); //protótipo da função 

int main() //função principal
{

    linhaDeAsteriscos(); //chamada da função
    printf("\nIFSUL\n");
    linhaDeAsteriscos();
    printf("\nCSTSI\n\n");
    printf("Lógica de programação\n");
    linhaDeAsteriscos();
    printf("\nAluno: Fulano\n");
    linhaDeAsteriscos();
    
    system("pause");
   
    return 0;
} //fim da função principal
    void linhaDeAsteriscos() //cabeçalho da função

    {
    int i; //variável local

//corpo da função
    
    for (i=1; i<=22; i++)
    printf("*");

} 