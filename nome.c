/*
 * Tarefa de laboratorio 07 - Armazenando e imprimindo informacoes sobre nomes
 *
 * GEX605 AB 2020/1
 *
 * Nome:      Johann Simon Hoffmann
 * Matricula: 1921101016
 *
 */

#include <stdio.h>
#include <string.h>

int main(void) {
  int contador = 0, leitor = 0; 
  char estudante[50][40];
  scanf("%d\n", &contador);
  for (int i = 0; i < contador; i++) {    
    char nome_do_estudante[50];
    fgets(nome_do_estudante, sizeof(nome_do_estudante), stdin);
    nome_do_estudante[strcspn(nome_do_estudante, "\n")] = '\0';
    strncpy(estudante[i], nome_do_estudante, sizeof(nome_do_estudante));
  }
  scanf("%d\n", &leitor);
  char saida_do_estudante[leitor];
  for (int i = 0; i < leitor; i++) {
    int estudante_posterior;
    char leia;
    scanf(" %d  %c", &estudante_posterior, &leia);
    if (leia == 'p') {     
      saida_do_estudante[i] = estudante[estudante_posterior][0];
      continue;
    }
    if (leia == 'u') {
      for (int j = 0; j < sizeof(estudante[estudante_posterior]); j++) {
        if (j - 1 >= 0 && estudante[estudante_posterior][j - 1] == ' ') {
          saida_do_estudante[i] = estudante[estudante_posterior][j];
        }
      }
    }    
  }
  for (int i = 0; i < leitor; i++) {
    printf("%c\n", saida_do_estudante[i]);
  }
  return 0;
}