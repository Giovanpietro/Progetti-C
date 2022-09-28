/* Scrivere un programma che chieda all'utente di
inserire due numeri e ne stampi la somma, il prodotto, la differenza,
il quoziente e il resto */

#include <stdio.h>

int main(){
    int a, b;
    int somma, prodotto, differenza, quoziente, resto;

    //l'utente inserisci i due valori
    printf("Inserisci due numeri: ");
    scanf("%d", &a);
    printf("Inserisci due numeri: ");
    scanf("%d", &b);

    printf("\n");

    //operazioni
    somma=a+b;
    differenza=a-b;
    prodotto=a*b;
    quoziente=a/b;
    resto=a%b;

    //stampa il risultato
    printf("La somma e': %d\n", somma);
    printf("La differenza e': %d\n", differenza);
    printf("La prodotto e': %d\n", prodotto);
    printf("La quoziente e': %d\n", quoziente);
    printf("La resto e': %d\n", resto);
}
