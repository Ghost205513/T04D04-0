#include <stdio.h>

int fibonacci_recursion(int end, int index, int f_previous, int f_second_previous) {
    if (index == end) {
        return f_previous + f_second_previous;
    } else {
        return fibonacci_recursion(end, index + 1, f_previous + f_second_previous, f_previous);
    }
}

int fibonacci(int n) {
    return fibonacci_recursion(n, 1, 0, 1);
}

int main() {
    int number;
    if (scanf("%d", &number) != 1) {
        printf("n/a");
        return 1;
    }
    if (number < 1) {
        printf("n/a");
        return 1;
    }
    printf("%d", fibonacci(number));
}
