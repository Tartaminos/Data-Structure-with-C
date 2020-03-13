// Escreva um programa para calcular a tabuada de um dado número. //
 


#include <stdio.h>

int main(){
    int entrada, i, resultado;

    printf("Digite um número para saber a tabuada: ");
    scanf("%d", &entrada);
       
    for (i = 0; i < 11; i++){
        resultado = entrada * i;
        printf("%d x %d = %d \n", entrada, i, resultado);
    }

        return 0;
}