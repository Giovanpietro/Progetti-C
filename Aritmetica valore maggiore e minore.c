/* Scrivete un programma che riceva in ingresso tre diversi interi
dalla tastiera, poi stampi la somma, la media, il prodotto,
il minore e il maggiore di questi numeri. Usare solamente la
formula a selezione singola dell'istruzione if */

#include <stdio.h>

int main(){

    int a, b, c;
    int somma, media, prodotto, minore, maggiore;

    printf("Inserisci primo numero: ");
    scanf("%d", &a);
    printf("Inserisci secondo numero: ");
    scanf("%d", &b);
    printf("Inserisci terzo numero: ");
    scanf("%d", &c);

    somma=a+b+c;
    media=somma/3;
    prodotto=a*b*c;

    printf("La somma e': %d\n", somma);
    printf("La media e': %d\n", media);
    printf("Il prodotto e': %d\n", prodotto);

    if(a>b && a>c){
        printf("%d e' maggiore\n", a);
    }else if(b>a && b>c){
        printf("%d e' maggiore\n", b);
    }else if(c>a && c>b){
        printf("%d e' maggiore\n", c);
    }
    if(a<b && a<c){
        printf("%d e' minore\n", a);
    }else if(b<a && b<c){
        printf("%d e' minore\n", b);
    }else{
        printf("%d e' minore\n", c);
    }
}
