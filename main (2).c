/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include "stdio.h"
#define HORAS_NORMALES 40
#define PRECIO_HORA_EXTRA_NORMAL 1.5
#define PRECIO_HORA_EXTRA_DOBLE 2.0

int main ()
{
	float h,p,s;	
	printf("ingresa las horas trabajadas: ");
	scanf("%f",&h);
	printf("precio cobrado por hora: ");
	scanf("%f",&p);

	 if (h <= HORAS_NORMALES) {
        s = h * p;
    } else if (h > HORAS_NORMALES && h <= 50) {
        s = (HORAS_NORMALES * p) + 
        ((h - HORAS_NORMALES) * p * PRECIO_HORA_EXTRA_NORMAL);
    } else {
        s = (HORAS_NORMALES * p) + 
                          (10 * p * PRECIO_HORA_EXTRA_NORMAL);
                          ((h - 50) * p * PRECIO_HORA_EXTRA_DOBLE);
    }

    
    printf("El salario semanal es: %.2f\n", s);
    //comentario para gitgit
    //modificacion para que confirmar en github
    //linea del 29abril24


    return 0;
}