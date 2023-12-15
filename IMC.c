#include <stdio.h>

int main(void) {
  float x, y, imc;
  
  printf("Insira seu peso e altura em metros, respectivamente\n");

  scanf("%f \n%f", &x, &y);

  imc = x/(y*y);

  if(imc < 18.5)
  {
    printf("Abaixo do peso.");
  }
  else if(imc <= 24.9)
  {
    printf("Peso normal.");
  }
  else if(imc < 29.9)
  {
    printf("Sobrepeso.");
  }
  else
  {
    printf("Obeso.");
  }
    
  return 0;
}
