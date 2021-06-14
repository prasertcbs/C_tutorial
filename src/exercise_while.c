#include <stdio.h>
#include <math.h>

int saving(double pv, double rate, double fv) {
    int i = 1;
    double amt = 0;
    do {
        amt = pv * pow(1 + rate, i);
        printf("year %d, amt = %.2f\n", i, amt);
        i++; // i = i + 1;

    } while (amt <= fv);
    return --i;
}

int saving2(double pv, double rate, double fv) {
    int i = 0;
    double amt = 0;
    do {
        amt = pv * pow(1 + rate, ++i);
        printf("year %d, amt = %.2f\n", i, amt);
//        i++; // i = i + 1;

    } while (amt <= fv);
    return i;
}

int main() {
    printf("year = %d\n", saving(1000, .03, 1300));
    printf("-------\n");
    printf("year = %d\n", saving2(1000, .03, 1300));
}