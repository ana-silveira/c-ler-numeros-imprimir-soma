/*
46. Fa�a um programa que leia 20 n�mero e exiba a soma destes n�meros.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int numero;
    int soma = 0;

    for ( int i = 1; i <= 20; i++) {
        printf("Informe o n�mero %d: ", i);
        scanf("%d", &numero);

        soma = soma + numero ;

        printf("O valor das soma dos n�meros at� o termo %d � %d \n\n ", i, soma);
    }

    printf("O valor da soma dos 20 n�meros � %d \n\n ", soma);


}
