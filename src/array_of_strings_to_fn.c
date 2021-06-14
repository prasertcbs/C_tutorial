#include <stdio.h>

void display1(char *s[], size_t sz) {
    printf("s     = %p\n", s);
    printf("&s[0] = %p\n", &s[0]);
    printf("&s[1] = %p\n", &s[1]);
    printf("s[0]  = %p\n", s[0]);
    printf("s[0]  = %s\n", s[0]);
    printf("s[1]  = %p\n", s[1]);
    printf("s[1]  = %s\n", s[1]);
    for (int i = 0; i < sz; ++i) {
        printf("%p %p %c %s\n", &s[i], s[i], s[i][0], s[i]);
    }
}

void demo1() {
    char *flowers[] = {"lily", "rose", "tulip", "carnation"};
    size_t sz = sizeof(flowers) / sizeof(flowers[0]);
    display1(flowers, sz);
}

int main() {
    demo1();
    return 0;
}