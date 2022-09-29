/* Scrivete un programma che legga due interi e determini e stampi
se il primo è un multiplo del secondo
(usare operatore resto) */

#include <stdio.h>

int main(){
    int a, b;

    printf("Inserisci primo numero: ");
    scanf("%d", &a);
    printf("Inserisci primo numero: ");
    scanf("%d", &b);


    if(a%b==0){
        printf("%d e' multiplo di %d", a, b);
    }else{
        printf("%d non e' multiplo di %d", a, b);
    }

    printf("\n");

    return 0;
}
