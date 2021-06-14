#include <stdio.h>
#include <conio.h>

void seq() {
    double celsius, fahrenheit;
    printf("enter degree in Celsius ");
    scanf("%lf", &celsius);
    fahrenheit = (1.8 * celsius) + 32;
    printf("%f Celsius = %f Fahrenheit\n", celsius, fahrenheit);
}

void condition() {
    int age;
    printf("enter your age: ");
    scanf("%d", &age);
    if(age <= 6) {
        printf("you're a kid.\n");
        printf("free of charge.\n");
    } else {
        printf("you're an adult.\n");
        printf("199 Baht.\n");
    }
    printf("bye....");
}

void repetition() {
//    int sum = 1+2+3+4+5+6+7+8+9+10;
    int sum = 0;
    int i;
    for (i=1;i<=10;i=i+1) {
        printf("%d\n", i);
        sum = sum + i;
    }
    printf("%d\n", sum);
}

int main() {
//    seq();
//    condition();
    repetition();
    printf("press any key to exit.");
    getch();
}