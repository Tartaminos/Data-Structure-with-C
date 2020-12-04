/*
 * Tarefa de laboratorio 05 - Bazinga
 *
 * GEX605 AB 2020/1
 *
 * Nome:      Johann Simon Hoffmann
 * Matricula: 1921101016
 *
 * 
 * o oitavo episódio da segunda temporada do seriado The Big Bang Theory – The Lizard-Spock Expansion, Sheldon e Raj discutem qual dos dois é o melhor: 
 * o filme Saturn 3 ou o seriado Deep Space 9. A sugestão de Raj para a resolução do impasse é uma disputa de Pedra-Papel-Tesoura. Contudo, 
 * Sheldon argumenta que, se as partes envolvidas se conhecem, entre 75% e 80% das disputas de Pedra-Papel-Tesoura terminam empatadas, 
 * e então sugere o Pedra-Papel-Tesoura-Lagarto-Spock.

  *As regras do jogo proposto são:
 *
  *a tesoura corta o papel;
  *o papel embrulha a pedra;
  *a pedra esmaga o lagarto;
  *o lagarto envenena Spock;
  *Spock destrói a tesoura;
  *a tesoura decapita o lagarto;
  *o lagarto come o papel;
  *o papel contesta Spock;
  *Spock vaporiza a pedra;
  *a pedra quebra a tesoura.
  *Embora a situação não se resolva no episódio (ambos escolhem Spock, resultando em um empate), não é difıcil deduzir o que aconteceria se a disputa continuasse. 
  *Caso Sheldon vencesse, ele se deleitaria com a vitória, exclamando "Bazinga!"; caso Raj vencesse, ele concluiria que "Raj trapaceou!"; 
  *caso o resultado fosse empate, ele exigiria nova partida: "De novo!". Conhecidas as personagens do jogo escolhido por ambos, faça um programa que 
  *imprima a provável reação de Sheldon.
 * A entrada consiste em uma série de casos de teste. A primeira linha contém um inteiro positivo T (T ≤ 100), que indica o número de casos de teste. 
 * Cada caso de teste é descrito em uma linha da entrada, contendo duas letras separadas por um espaço em branco. A primeira letra representa a 
 * escolha de Sheldon e a segunda letra representa a escolha de Raj. Estas letras seguem a correspondência abaixo:
 * e corresponde a pedra;
 * a corresponde a papel;
 * t corresponde a tesoura;
 * l corresponde a lagarto;
 * s corresponde a Spock.
 * 
 */

#include <stdio.h>

int main() {

  char first_entry, second_entry, e[] = "pedra", a[] = "papel", t[] = "tesoura", l[] = "lagarto", s[] = "Spock";
  char aa[10], bb[10];

  int a, b, c;

  for(b=1; b<=a; b++)
    {
        scanf("%s%s", aa,bb);
        if(aa == bb)
            printf("Caso #%d: De novo!\n", b);
        else if( aa == a)
        {
            if(bb == a) || (bb == l))
                printf("Caso #%d: Bazinga!\n", b);
            else if((bb == e)) || (bb == e))
                printf("Caso #%d: Raj trapaceou!\n", b);
        }
        else if(0==strcmp(a1,a))
        {
            if((0==strcmp(bb,e)) || (0==strcmp(bb,e)))
                printf("Caso #%d: Bazinga!\n", b);
            else if((0==strcmp(bb,a)) || (0==strcmp(bb,l)))
                printf("Caso #%d: Raj trapaceou!\n", b);
        }
        else if(0==strcmp(a1,e))
        {
            if((0==strcmp(bb,a)) || (0==strcmp(bb,l)))
                printf("Caso #%d: Bazinga!\n", b);
            else if((0==strcmp(bb,a)) || (0==strcmp(bb,e)))
                printf("Caso #%d: Raj trapaceou!\n", b);
        }
        else if(0==strcmp(a1,l))
        {
            if((0==strcmp(bb,a)) || (0==strcmp(bb,e)))
                printf("Caso #%d: Bazinga!\n", b);
            else if((0==strcmp(bb,e)) || (0==strcmp(bb,a)))
                printf("Caso #%d: Raj trapaceou!\n", b);
        }
        else if(0==strcmp(a1,ee))
        {
            if((0==strcmp(bb,a)) || (0==strcmp(bb,e)))
                printf("Caso #%d: Bazinga!\n", b);
            else if((0==strcmp(a2,a)) || (0==strcmp(a2,l)))
                printf("Caso #%d: Raj trapaceou!\n", b);
        }
    }


  /* Dica:
   *
   * Suponha que voce declarou uma variavel do tipo int e duas variaveis do
   * tipo char da seguinte maneira:
   *
   * int n;
   * char a;
   * char b;
   *
   * Para ler uma linha que contem um inteiro seguida de uma linha que
   * contem dois caracteres separados por um espaco em branco, voce pode usar
   * os seguintes comandos:
   *
   * scanf("%d\n", &n);
   * scanf("%c %c\n", &a, &b);
   *
   * */

  /* Complete aqui */

  return 0;
}