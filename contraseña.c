#include <stdio.h>
#include <string.h>
int multiplicacion(int articulos, int precio){
   return articulos*precio
}
//version_3 examen practico 13-05-24//
int main() {
    char nombre[50];
    char contrasena[50];
    int intentos = 3;
    int articulos, precio, i, total;
//estructura repetitiva 1//
    do {
        printf("Introduce tu nombre: ");
        scanf("%s", nombre);

        printf("Introduce tu contraseña: ");
        scanf("%s", contrasena);

        if (strcmp(nombre, "danna") == 0 && strcmp(contrasena, "2B10") == 0) {
            printf("Bienvenido al sistema.\n");
           
            break;
        } else {
            intentos--;
            if (intentos > 0) {
                printf("Nombre de usuario o contraseña incorrectos. Te quedan %d intentos.\n", intentos);
            } else {
                printf("Se ha superado el número de intentos permitido.\n");
                break;
            }
        }
        //estructura repetitiva 2//
    } while (intentos > 0);
    printf("Bienvenido al sistema.\n");
            printf("\ncuando hayas terminado introduce 0 para finalizar");
            
            printf("\ningrese la cantidad vendida : ");
            scanf("%i", &articulos);
            while (articulos !=0) {
              printf("ingrese el precio : ");
              scanf("%i", &precio);
                if (articulos < 0 || precio < 0) {
                    printf("la cantidad y precio deben ser numeros positivos");
                } else {                    
                  
                }
                printf("el total a pagar es de : %i ", multiplicacion (articulos, precio) );     
   
    return 0;
}
}
    }
    

    

  
