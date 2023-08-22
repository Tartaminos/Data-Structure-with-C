#include <stdio.h>

int main(void) {
  int horas;
  float valor_hora, salario;
  
  printf("Digite quantas horas: ");
  scanf("%d", &horas);

  printf("Digite o valor da hora trabalhada: ");
  scanf("%f", &valor_hora);

  salario = valor_hora * horas;

  if(horas >= 200){
    salario = salario + (salario * 0.05);
  }

  printf("Salário: %.2f", salario);
    
  return 0;
}
