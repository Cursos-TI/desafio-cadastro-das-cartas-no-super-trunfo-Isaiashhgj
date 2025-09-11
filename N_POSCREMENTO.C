#include <stdio.h>

int main (){

int numero1 = 1,resultado;
    
resultado = numero1++;

printf("Apos Pós-incremento - Numero 1:%d - Resultado: %d\n",numero1, resultado);

resultado = ++numero1;

printf("Apos Pré-incremento - Numero 1:%d - Resultado: %d\n",numero1, resultado);

resultado = numero1--;

printf("Apos Pós-decremento - Numero 1:%d - Resultado: %d\n",numero1, resultado);

resultado = --numero1;

printf("Apos Pré-decremento - Numero 1:%d - Resultado: %d\n",numero1, resultado);

}












