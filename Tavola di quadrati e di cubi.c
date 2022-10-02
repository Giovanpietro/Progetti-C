/* Scrivere un programma che calcoli i quadrati e i cubi dei numeri
da 0 a 10 e usi tabulazioni per stampare la tavola dei valori */
#include <stdio.h>

int main(){
    int i, j;
    int quadrato=0, numero=0;

    printf("Numero\n");

    for(i=0;i<=10;i++){
        printf("%d\n", numero);
        numero++;
    }
    printf("\n");

    printf("Quadrato\n");

    for(i=0;i<=10;i++){
        j=i*i;
        printf("%d\n", quadrato);
        quadrato++;
    }
}
