#include <stdio.h>

int main() {
    float x = 0.1f;
    double y = (double)x;
    printf("%lf\n", y);

    int z = (int) y;
    printf("%d\n", z);
    return 0;
}

//Obvio que si lo pasamos a int perdemos los decimales.
