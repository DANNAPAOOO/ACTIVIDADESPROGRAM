/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include "stdio.h"

int main() 
{
    int numeros[5];
    int i, menor;
    
    printf("Ingrese 5 números:\n");
    for (i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    menor = numeros[0];
    
    for (i = 1; i < 5; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }    
    printf("El menor número ingresado es: %d\n", menor);

    return 0;
}