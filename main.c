#include<stdio.h>
#include"calc.h"

int main(int argc, char const *argv[])
{
    int a = 5;
    int b = 3;
    int c = 4;

    printf("Imprimiremos la funcion suma2, la suma de"
    " a y b es:\nResultado: %d\n",suma2(a,b));
    printf("Imprimiremos la funcion suma3, la suma de"
    " a, b y c es:\nResultado: %d\n",suma3(a,b,c));
    printf("Imprimiremos la funcion multi2, el producto de"
    " a y b es:\nResultado: %d\n",multi2(a,b));
    printf("Imprimiremos la funcion multi3, el producto de"
    " a, b y c es:\nResultado: %d\n",multi3(a,b,c));
    printf("Imprimiremos la funcion resta2, la resta de"
    " a, b es:\nResultado: %d\n",resta2(a,b));
    printf("Imprimiremos la funcion divide2, el cociente de"
    " a, b es:\nResultado: %f\n",divide2(a,b));
    printf("Imprimiremos la funcion pot2, el cuadrado de"
    " a es:\nResultado: %d\n", pot2(a));
    printf("Imprimiremos la funcion pot3, el cubo de"
    "b es:\nResultado: %d\n",pot3(b));
    return 0;
}
