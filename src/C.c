#include <stdio.h>

int main() {    
    char nombreUsuario[20]; 

    printf("Por favor, escribe tu nombre: "); 
    scanf("%49s", nombreUsuario);

    printf("Hola %s Este programa está hecho en el lenguaje de programación C.\n", nombreUsuario);

    return 0;
}