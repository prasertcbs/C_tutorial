#include <stdio.h>
#include <ctype.h>

void demo1() {
    char *flower = "lily";
    char *f[3];
    f[0] = "rose";
    f[1] = "tulip";
    f[2] = "carnation";
    printf("%s\n", f[0]);
    printf("%s\n", f[1]);
    printf("%s\n", f[2]);
}

void demo2() {
    char *f[] = {"rose", "tulip", "carnation"};
    for (int i = 0; i < 3; ++i) {
        printf("%s\n", f[i]);
    }
    f[0] = "lily";
}

void demo3() {
    char *f[] = {"rose", "tulip", "carnation"};
    char fa[3][10] = {"rose", "tulip", "carnation"};
    char fb[][10] = {"rose", "tulip", "carnation"};
    for (int i = 0; i < 3; ++i) {
        fa[i][0] = toupper(fa[i][0]);
        printf("%s\n", fa[i]);
//        printf("%c\n", fa[i][0]);
    }
}

int main() {
//    demo1();
//    demo2();
    demo3();
    return 0;
}