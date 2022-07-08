#include <stdio.h>
#include <math.h>
#define pi M_PI

double function_1(double x) {
    return 1.0 / (1.0 + x * x);
}

double function_2(double x) {
    if (x > pow(2.0, 1.0 / 2.0) || x < -pow(2.0, 1.0 / 2.0))
        return -1;
    else
        return pow(pow(1 + 4 * x * x, 1.0 / 2.0) - x * x - 1, 1.0 / 2.0);
}

double function_3(double x) {
    return 1.0 / x / x;
}

int main() {
    double step = 2.0 * pi / 41;
    for (int i = 0; i < 42; i++) {
        if (-pi + i * step > pow(2.0, 1.0 / 2.0) || -pi + i * step < -pow(2.0, 1.0 / 2.0))
            printf("%.7lf | %.7lf | - | %.7lf\n", -pi + i * step,
                   function_1(-pi + i * step), function_3(-pi + i * step));
        else
            printf("%.7lf | %.7lf | %.7lf | %.7lf\n", -pi + i * step,
                   function_1(-pi + i * step), function_2(-pi + i * step), function_3(-pi + i * step));
    }
}
