#include <stdio.h>
#include <string.h>

void demo1() {
    char flower[] = "tulip";
    printf("flower (address = %p)\n", flower);
//    flower = "jasmine";
    flower[0] = 'T';
    printf("%s\n", flower);
    for (int i = 0; i < strlen(flower); ++i) {
        printf("flower[%d] = %c (addr = %p)\n", i, flower[i], &flower[i]);
    }
    char *planet = "Mercury"; // constant
//    *planet = 'm';
    printf("%s\n", planet);
//    printf("%s (addr = %p)\n", planet, planet);
//    while (*planet != '\0') {
//        printf("%c (addr = %p)\n", *planet, planet);
//        planet++;
//    }


}
int main() {
    demo1();
    return 0;
}