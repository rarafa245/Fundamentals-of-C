#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"

int main(){
    printf("Usando Headers\n");
    int y =5;

    int quad = quadrado(y);
    int cub = cubo(y);
    printf("Quadrado de %d: %d\n", y, quad);
    printf("Cubo de %d: %d\n", y, cub);
    printf("O valor da Constante PI: %f\n", _PI);


    return 0;
}
