#include <stdio.h>

/* Hacemos la declaración del prototipo de la funcion */
int calcularMCM(int, int);

int main(){
    /* Declaremos variables */
    int primero, segundo;
    int resultado;

    /* Se solicita al usuario que introduzca el valor de M */
    printf("Ingrese el valor de M: ");
    scanf("%d", &primero);

    /* Se solicita al usuario que introduzca el valor de M */
    printf("Ingrese el valor de N: ");
    scanf("%d", &segundo);

    /* Si N es mayor que M */
    if (segundo > primero ){
        resultado = calcularMCM(segundo,primero);
    } else { /* De lo contrario */
        resultado = calcularMCM(primero,segundo);
    }

    /* Ahora imprimimos el resultado */
    printf("El calcularMCM de %d y %d es: %d", primero, segundo, resultado);

    /* Retornamos 0 para indicar que todo esta bien */
    //ahora de manera interativa
    int i,m,mcd;
    printf("\nMaximo Comun divisor de 2 números forma iterativa:\n");
    if (primero<segundo) {
        m = primero;
    } else {
        m = segundo;
    }
    for (int i=1; i<=m;i++) {
        if (primero%i==0 && segundo%i==0) {
            mcd=i;
        }
    }
    printf("El maximo comun divisor es: %3d" , mcd);
    return 0;
}

int calcularMCM(int m, int n) {
    if (n == 0) return m; // Condicion de parada
    return calcularMCM(n, m%n);   // Llamada recursiva

}