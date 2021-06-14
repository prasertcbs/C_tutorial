#include <stdio.h>

int main() {
//    int i;
//    for (i=1;i<=10;i+=2) {
//        printf("%d\n", i);
//    }
//    for (i=10;i>=1;i-=2) {
//        printf("%d\n", i);
//    }
//    printf("end....");
//    printf("%d\n", i);

//    double d;
//    for (d=10;d>0;d-=.7) {
//        printf("d = %f\n", d);
//    }
    // C99 -
    int sum = 0;
    for (int j = 1; j <= 10; j++) {
        printf("%d\n", j);
        sum = sum + j;
        printf("sum = %d\n", sum);
        printf("-------\n");
    }
//    printf("%d\n", j);
}