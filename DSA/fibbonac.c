#include <stdio.h>

int fibonacci(int n) {
    // Base cases: Fibonacci series starts with 0 and 1
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    // Recursive case: Sum of previous two terms
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 7;
    int result = fibonacci(7);

    printf("The %dth term of the Fibonacci series is: %d\n", n, result);

    return 0;
}
