#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...) {
    if (n == 0) {
        return 0;
    }
    
    int sum = 0;
    va_list args;
    va_start(args, n);
    
    for (unsigned int i = 0; i < n; i++) {
        sum += va_arg(args, int);
    }
    
    va_end(args);
    return sum;
}

int main() {
    int result1 = sum_them_all(4, 10, 20, 30, 40);
    int result2 = sum_them_all(3, 5, 15, 25);
    int result3 = sum_them_all(0);  // Should return 0
    
    printf("Result 1: %d\n", result1);  // Output: Result 1: 100
    printf("Result 2: %d\n", result2);  // Output: Result 2: 45
    printf("Result 3: %d\n", result3);  // Output: Result 3: 0
    
    return 0;
}

