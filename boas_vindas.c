/*
* logica feita para passar no teste do susy unicamp 

 * Tarefa de laboratorio 04 - Boas-vindas com "Bom dia", "Boa tarde" ou "Boa
 *                            noite"
 *
 * GEX605 AB 2020/1
 *
 * Nome:      Johann Simon Hoffmann
 * Matricula: 1921101016
 *
 * Data:      30/09/2020
 *
 * Descricao: Este programa recebe como entrada uma hora e imprime uma
 *            mensagem de boas-vindas com "Bom dia", "Boa tarde" ou "Boa
 *            noite", dependendo da hora recebida.
 *
 * Entrada:   Uma hora (sem os minutos, como um numero entre 0 e 23).
 *
 * Saida:     Mensagem de boas-vindas com "Bom dia", "Boa tarde" ou "Boa
 *            noite", dependendo da hora recebida.
 *
 */

#include <stdio.h>

int main() {
  int hora;

    scanf("%d",&hora);

    if (hora <= 11 ) {
        printf("Bom dia, bem-vindo(a) ao curso de Estruturas de Dados!\n");
    }
    else if (hora <= 18 ) {
        printf("Boa tarde!, bem-vindo(a) ao curso de Estruturas de Dados!\n");
    }
    else if (hora <= 23){
        printf("Boa noite!, bem-vindo(a) ao curso de Estruturas de Dados!\n");
    }

  return 0;
}
