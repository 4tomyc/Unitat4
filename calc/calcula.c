#include <stdio.h>
#include "calc.h"

int main (){
    int a, b;
    printf("Introduce dos numeros: \n");
    scanf("%d %d", &a, &b);
    printf("La suma entre %d y %d vale %d \n", a,b,suma(a,b));
    printf("La resta  entre %d y %d vale %d \n", a,b,resta(a,b));
    printf("La multiplicaci√≥  entre %d y %d vale %d \n", a,b,multiplica(a,b));
    printf("La divisi√≥  entre %d y %d vale %d \n", a,b,divide(a,b));
    printf("EL mayor entre %d y %d es %d \n", a,b,mayor(a,b));
}


