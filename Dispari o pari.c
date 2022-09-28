/* Scrivete un programma che legga un numero intero
e determini e stampi se sia dispari o pari */

#include <stdio.h>

int main(){
    int x, pari, dispari;

    printf("Inserisci intero: ");
    scanf("%d", &x);

    if(x%2==0){
        printf("%d e' pari\n", x);
    }else{
        printf("%d e' dispari\n", x);
    }

    return 0;
}
