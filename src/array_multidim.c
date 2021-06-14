#include <stdio.h>
#include <math.h>

double bmi(int height, int weight) {
    return weight / pow(height / 100.0, 2);
}

void demo2() {
    int h[] = {170, 165, 175, 162, 169};
    int w[] = {70, 55, 72, 48, 50};
    char gender[] = {'M', 'F', 'M', 'F', 'F'};
    for (int i = 0; i < 5; ++i) {
        printf("h[%d] = %d, w[%d] = %d, bmi = %.2f\n", i, h[i], i, w[i], bmi(h[i], w[i]));
    }
}

void demo3() {
//    int h[] = {170, 165, 175, 162, 169};
//    int w[] = {70, 55, 72, 48, 50};
//    char gender[] = {'M', 'F', 'M', 'F', 'F'};
//    int p[3][5];
//    p[0][0] = 170;
//    p[0][1] = 165;
//    p[1][0] = 70;
//    p[1][1] = 55;
//    p[2][0] = 'M';
    int p[][5] = {
            {170, 165, 175, 162, 169},
            {70,  55,  72,  48,  50},
            {'M', 'F', 'M', 'F', 'F'}
    };

    for (int i = 0; i < 5; ++i) {
        printf("p[0][%d] = %d, p[1][%d] = %d, bmi = %.2f\n", i, p[0][i], i, p[1][i], bmi(p[0][i], p[1][i]));
    }
}

int main() {
    demo2();
    printf("----------------\n");
    demo3();
    return 0;
}

int demo1() {
//    int h1 = 170;
//    int h2 = 165;
//    int h3 = 175;
//    int h4 = 162;
//    int h5 = 169;
//    double avg = (h1 + h2 + h3 + h4 + h5) / 5.0;

//    int h[5]; // 0..4
//    h[0] = 170;
//    h[1] = 165;
//    h[2] = 175;
//    h[3] = 162;
//    h[4] = 169;

    int h[] = {170, 165, 175, 162, 169};
    char gender[] = {'M', 'F', 'M', 'F', 'F'};

//    double avg = (h[0] + h[1] + h[2] + h[3] + h[4]) / 5.0;
    double avg = 0.0;
    double sum = 0.0;
    double sumM = 0.0;
    double sumF = 0.0;
    double avgM = 0.0;
    double avgF = 0.0;
    int cntM = 0;
    int cntF = 0;
    for (int i = 0; i < 5; ++i) {
        if (gender[i] == 'M') {
            sumM += h[i];
            cntM++;
        } else {
            sumF += h[i];
            cntF++;
        }
        sum += h[i];
    }
    avg = sum / 5.0;
    avgM = sumM / cntM;
    avgF = sumF / cntF;
    printf("avg = %.2f\n", avg);
    printf("avgM = %.2f\n", avgM);
    printf("avgF = %.2f\n", avgF);
    return 0;
}