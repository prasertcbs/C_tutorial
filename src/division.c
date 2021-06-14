#include <stdio.h>

int leapYear(int year) {
    if (year % 4 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int leapBuddhistYear(int year) {
    if (year % 4 == 3) {
        return 1;
    } else {
        return 0;
    }
}

void demo() {
    int a = 7, b = 3;
    int q, r;
    q = a / b; // quotient
    r = a % b; // remainder
    printf("q = %d, r = %d\n", q, r);
}

int parkingRate(int mm) {
    int hours = mm / 60;
    int minutes = mm % 60;
    if (minutes > 10) {
        hours++; // hours = hours + 1, hours += 1
    }
    return hours * 30;
}

void master() {
    int hours = 10000;
    int days = hours / 8;
    int h = hours % 24;
    printf("%d hours = %d days %d hours\n", hours, days, h);
}

int main() {
//    printf("%d\n", 2559 % 4);
//    printf("%d\n", leapYear(2016));
//    printf("rate = %d\n", parkingRate(60));
//    printf("rate = %d\n", parkingRate(70));
//    printf("rate = %d\n", parkingRate(150));
    master();
}