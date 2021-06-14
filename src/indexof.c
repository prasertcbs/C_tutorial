#include <stdio.h>
#include <string.h>

int indexOf(char *a[], size_t sz, char *s) {
    for (int i = 0; i < sz; ++i) {
        if (strcasecmp(a[i], s) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    char *days[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    char *colors[] = {"Red", "Yellow", "Pink", "Green", "Orange", "Blue", "Purple"};

    char s[10] = "";
    printf("enter day: ");
    scanf("%s", s);
    int idx = indexOf(days, sizeof(days)/sizeof(days[0]), s);
    for (int i = 0; i < 7; ++i) {
        if (strcasecmp(days[i], s) == 0) {
            idx = i;
            break;
        }
        idx = -1;
    }
    if (idx >= 0) {
        printf("%s\n", colors[idx]);
    } else {
        printf("not found.\n");
    }
    return 0;
}
