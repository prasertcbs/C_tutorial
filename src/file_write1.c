#include <stdio.h>

int main() {
//    FILE *f = fopen("demo.txt", "w"); // write
    FILE *f = fopen("demo.txt", "a"); // append
//    fprintf(f, "Hello, World!\n");
//    fprintf(f, "Sawaddee\n");
//    fprintf(f, "%c\n", 'A');
//    fprintf(f, "%d\n", 234);
//    fprintf(f, "%.2f\n", 300*.07);
    fprintf(f, "--------------\n");
    fprintf(f, "%.2f\n", 100*.05);

    fclose(f);
    return 0;
}