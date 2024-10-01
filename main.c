#include <stdio.h>

int main(void) {
    float a, b, c;
    printf("inserisci i tre numeri di fila");
    scanf("%f %f %f",&a,&b,&c);
    if (a>b) {
        if (a>c) {
            printf("%f e' il numero maggiore", a);
        }
    } else if (b>a) {
        if (b>c) {
            printf("%f e' il numero maggiore", b);
        }
    } else if (c>a) {
        if (c>b) {
            printf("%f e' il numero maggiore", c);
        }
    }
}
