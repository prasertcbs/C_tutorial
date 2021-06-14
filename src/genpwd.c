#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *genpwd(char *pwd, int len) {
    int i = 0;
    for (i = 0; i < len; ++i) {
        pwd[i] = (char) ((rand() % 10) + '0');
    }
    pwd[i] = '\0';
    return pwd;
}

char *genpwd2(char *pwd, int len) {
    int i = 0;
    for (i = 0; i < len; ++i) {
        pwd[i] = (char) ((rand() % 26) + 'A');
    }
    pwd[i] = '\0';
    return pwd;
}

char *genpwd3(char *pwd, int len) {
//    char *s = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789./;+-*";
    char *s = "abcdefghijkmnpqrstuvwxyzABCDEFGHIJKLMNPQRSTUVWXYZ23456789./;+-*";
    int i = 0;
    size_t n = strlen(s);
    for (i = 0; i < len; ++i) {
        pwd[i] = s[rand() % n];
    }
    pwd[i] = '\0';
    return pwd;
}

int main() {
    srand(time(NULL));
    char pwd[20] = "";
    for (int i = 0; i < 5; ++i) {
        printf("%s\n", genpwd3(pwd, 6));
    }
    return 0;
}