#include <stdio.h>
#include <string.h>
//version_3 examen practico 13-05-24//
int main() {
    char nombre[50];
    char contrasena[50];
    int intentos = 3;

    do {
        printf("Introduce tu nombre: ");
        scanf("%s", nombre);

        printf("Introduce tu contraseña: ");
        scanf("%s", contrasena);

        if (strcmp(nombre, "root") == 0 && strcmp(contrasena, "2B10") == 0) {
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
    } while (intentos > 0);
     printf("ingrese la cantidad vendida");
            scanf("%i", &articulos);
            printf("ingrese el precio");
            scanf("%i",&precio);
            total-articulos*precio;
            printf("el total a pagar es de:&i", total);
    return 0;
}
