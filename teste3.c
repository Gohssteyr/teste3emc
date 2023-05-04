#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ( ){

    //Permite usar acentos
    setlocale(LC_ALL,"");


    printf("A soma de A + B e igual: ");

    int a = 50;
    printf("O valor de A é: %d\n",a);
    scanf("%d", &a);
    printf("O valor de A mudou para %d", a);

    float b = 5.5;
    printf("O valor de B é: %f\n",b);
    scanf("%f", &b);
    printf("O valor de B mudou para %f", b);
}
