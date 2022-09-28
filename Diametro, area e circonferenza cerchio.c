/* Scrivete un programma che legga il raggio di un cerhio
e stampi il diametro, la circonferenza e l'area di un cerchio
*/

#include <stdio.h>

int main(){
    float r, area, diametro, circonferenza;

    printf("Inserire raggio del cerchio: ");
    scanf("%f", &r);

    diametro=r*r;
    area=r*r*3.14;
    circonferenza=2*3.14*r;

    printf("Il diametro e': %.2f\n", diametro);
    printf("L'area e': %.2f\n", area);
    printf("La circonferenza e': %.2f\n", circonferenza);

    return 0;

}
