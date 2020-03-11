// exercício feito na aula //
// uri 1221  //

/* em c não existe boolean, então usa-se a terminação 1 para true e 0 para false

    complexidade computacional
*/

#include <stdio.h>
#include <math.h> // usa ara fazer a raiz quadrada

int primo(int x) {
  int i;
  int r = sqrt(x);

  if(x == 2) { 
    return 1;
  }

  for(i = 2; i < r; ++i) {
    if(x % i == 0) {
      return 0;
    }
  }

  return 1;
  
}


int main() {  
  for(int i = 2; i < 15; ++i) {
    printf("%d primo? %d\n", i, primo(i));
  }
  return 0;
}