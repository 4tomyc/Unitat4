#include <stdio.h>

int suma(int a, int b){
    return a + b;
}
int resta(int a, int b){
    return a - b;
}
int multiplica(int a, int b){
    return a * b;
}
int divide(int a, int b){
    return a / b;
}
int mayor(int a, int b){
    if (a > b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int a, b ;
    a=10;
    b=5;
    printf("Introduce dos numeros: \n");
    scanf("%d %d", &a, &b);
    printf("La suma entre %d y %d vale %d \n", a,b,suma(a,b));
    printf("La resta  entre %d y %d vale %d \n", a,b,resta(a,b));
    printf("La multiplicaci√≥  entre %d y %d vale %d \n", a,b,multiplica(a,b));
    printf("La divisi√≥  entre %d y %d vale %d \n", a,b,divide(a,b));
    printf("EL mayor entre %d y %d es %d \n", a,b,mayor(a,b));
}