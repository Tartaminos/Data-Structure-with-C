/* 
    *Ler um inteiro no teclado e retornar se esse inteiro é negativo ou positivo
*/

#include<stdio.h>

int main (){
    int inteiro;

    printf("Digite um número inteiro \n");
        scanf("%d", &inteiro);

    if (inteiro > 0){
        printf("O número %d é positivo \n", inteiro);
    } else if( inteiro == 0)
    {
        printf("O número é %d \n", inteiro);

    } else
    {
        printf("O número %d é negativo \n", inteiro);
    };
    
    return 0;
}

