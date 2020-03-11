// utiliza-se   gcc <nome do arquivo> para compilar o arquivo em .c no terminal e depois executar o programa //
// depois utilize ./a.out para executar o arquivo //


// Mostrar na tela o produto entre dois números. //

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    int valor1, valor2;
    float produto;


    printf("Digite dois números para saber o seu produto! \n");
    printf("Digite o primeiro valor: \n");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: \n");
    scanf("%d", &valor2);

    produto = valor1 * valor2;

    printf("O produto de %d e %d é %.1f  \n", valor1, valor2, produto);

    return 0;

}