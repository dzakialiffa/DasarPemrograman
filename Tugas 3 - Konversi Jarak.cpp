#include <stdio.h>

int main(){
    int jarak, km, m, cm, sisakm, sisam;

    scanf("%d", &jarak);
    
    km = jarak/100000;
    sisakm = jarak%100000;
    m = sisakm/100;
    cm = sisakm%100;

    printf("%d km, %d m, %d cm", km, m, cm);

    getchar();
    return 0;
}
