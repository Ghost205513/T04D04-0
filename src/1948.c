#include <stdio.h>


int div(int a, int b) {
    int ans = 0;

    while (a > 0) {
        a -= b;
        ans++;
    }

    if (a == 0)
        return ans;
    else
        return 0;
}

int search_lpd(int input) {
    int max_divisor = 1;
    if (input < 0)
        input *= -1;
    int divisor = 2;
    while (input != 1) {
        int quotient = div(input, divisor);
        if (quotient != 0 && divisor > max_divisor)
            max_divisor = divisor;
        while (quotient != 0) {
            input = quotient;
            quotient = div(input, divisor);
        }
        divisor++;
    }
    return max_divisor;
}

int main() {
    int x;
    if (scanf("%d", &x) != 1) {
        printf("n/a");
        return 0;
    }
    if (x > -2 && x < 2) {
        printf("n/a");
        return 0;
    }
    printf("%d", search_lpd(x));
    return 0;
}
