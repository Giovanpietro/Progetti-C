#include <stdio.h>

int main(){
    int a, b;

    printf("Inserisci numero: ");
    scanf("%d", &a);
    printf("Inserisci numero: ");
    scanf("%d", &b);

    printf("\n");

    if(a>b){
        printf("%d e' piu' grande\n", a);
    }else if(b>a){
        printf("%d e' piu' grande\n", b);
    }else{
        printf("Questi numeri sono uguali\n");
    }

    return 0;
}
