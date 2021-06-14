#include <stdio.h>
#include <string.h>

//char *removeNewLine(char *s) {
//    char *p0 = strchr(s, '\r');
//    if (p0 != NULL) {
//        *p0 = '\0';
//        return s;
//    }
//
//    char *p = strchr(s, '\n'); // LF (Unix, Linux, macOS)
//    if (p != NULL) {
//        *p = '\0';
//        return s;
//    }
//}

char *removeNewLine(char *s) {
    size_t pos = strcspn(s, "\r\n");
    s[pos] = '\0';
    return s;
}

int main() {
    // Windows     - CRLF (\r\n)
    // Unix, macOS - LF (\n)
//    FILE *f = fopen("movie_lf.txt", "r");
    FILE *f = fopen("movie_crlf.txt", "r");
    char str[500] = "";
    int line = 0;
    while ((fgets(str, 500, f)) != NULL) {
        printf("%d: %s\n", ++line, removeNewLine(str));
    }
    fclose(f);
    return 0;
}