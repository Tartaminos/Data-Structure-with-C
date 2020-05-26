// Mostrar a média aritmética entre 3 números passados pelo usuário. //

#include <stdlib.h>
#include <stdio.h>

int main(){
    float media;
    int valor1, valor2, valor3;

    printf("Bem vindo, digite três valores para saber a média! \n");

    printf("Digite o primeiro valor: ");
    scanf("%d",&valor1);

    printf("Digite o segundo valor: ");
    scanf("%d",&valor2);

    printf("Digite o terceiro valor: ");
    scanf("%d",&valor3);

    media = (valor1 + valor2 + valor3) /3;

    printf("A média de é %.2f", media);

    return 0;
}