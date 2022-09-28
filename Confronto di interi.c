/* Scrivere un programma che chieda all'utente di inserire
due interi, che legga tali numeri e quindi stampi il numero
maggiore seguito dalle parole "E' più grande". Se i numeri sono
uguali, stampate il messaggio "Questi numeri sono uguali".
Usate solamente la forma a selezione singola dell'istruzione if */

#include <stdio.h>

int main(){
    int a, b;

    //Inserisci numeri
    printf("Inserisci primo numero: ");
    scanf("%d", &a);
    printf("Inserisci primo numero: ");
    scanf("%d", &b);

    //confronti
    if(a>b){
        printf("%d e' piu' grande\n", a);
    }
    if(b>a){
        printf("%d e' piu' grande\n", b);
    }
    if(a==b){
        printf("Questi numeri sono uguali\n");
    }

    return 0;
}
