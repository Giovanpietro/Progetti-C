#include <stdio.h>

int temp(int);

int main(){
    int fahr, n;

    temp(n);
}

int temp(int n){
    int fahr;

    printf("Cels - Fahr\n");
    for(fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32.0));

    return n;
}
