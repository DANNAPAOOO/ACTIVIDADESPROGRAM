/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() 

{
    char caracter;
    
    printf("Introduce un caracter: ");
    scanf("%c", &caracter);
    
    if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u' ||
        caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U') {
        printf("%c es una vocal.\n", caracter);
    } else {
        printf("%c no es una vocal.\n", caracter);
    }
    
    return 0;
}