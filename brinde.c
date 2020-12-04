/*
 * Tarefa de laboratorio 08 - Avaliacao 1 - Parte 1 - Brinde FACE
 *
 * GEX605 AB 2020/1
 *
 * Nome:      Johann Simon Hoffmann
 * Matricula: 1921101016
 *
 */
/* Dica:
 *
 * Suponha que voce declarou as seguintes variaveis:
 *
 * char c1, c2, c3, c4;
 *
 * Suponha tambem que voce quer ler da entrada varias linhas que contem 4
 * caracteres separados por um espaco em branco. Voce pode ler cada uma
 * destas linhas usando os seguintes comandos:
 *
 * scanf("\n");
 * scanf("%c %c %c %c", &c1, &c2, &c3, &c4);
 *
*/

#include <stdio.h>


int main() {

    struct letras_recebidas 
    {
	char letra1[2], letra2[2], letra3[2], letra4[2];
    };

    char vetor[1024] = { 'F', 'A', 'C', 'E' };
	int entrada, controle1 = 0, controle2 = 4;
	
	scanf("%d", &entrada);


	for (int i = 0; i < entrada; ++i) {
        struct letras_recebidas letra_recebida;

		scanf("%s %s %s %s", letra_recebida.letra1, letra_recebida.letra2, letra_recebida.letra3, letra_recebida.letra4);

		if (letra_recebida.letra1[0] == vetor[controle2-1] && letra_recebida.letra2[0] == vetor[controle2-2] && letra_recebida.letra3[0] == vetor[controle2-3] && letra_recebida.letra4[0] == vetor[controle2-4]) {
			controle2 -= 4;
			if (controle2 == 0)
				vetor[0] = 'F', vetor[1] = 'A', vetor[2] = 'C', vetor[3] = 'E', controle2 = 4;
			controle1++;
		} else {
			vetor[controle2] = letra_recebida.letra1[0], controle2++, vetor[controle2] = letra_recebida.letra2[0], controle2++, vetor[controle2] = letra_recebida.letra3[0], controle2++, vetor[controle2] = letra_recebida.letra4[0], controle2++;
		}
	}
	
	printf("%d\n", controle1);

    return 0;
}
