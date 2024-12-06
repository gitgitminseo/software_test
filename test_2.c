#include <stdio.h>

int main() {
    int a, b, result = 0;
    char op;
    
    if (scanf("%d %c %d", &a, &op, &b) != 3) {
        printf("Invalid input\n");
        return 1;
    }

    if (op == '+') {
        result = a + b;
    }
    else if (op == '-') {
        result = a - b;
    }
    else if (op == '*') {
        result = a * b;
    }
    else if (op == '/') {
        if (b == 0) {
            printf("Division by zero error\n");
            return 1;
        }
        result = a / b;
    }
    else {
        printf("Invalid operator\n");
        return 1;
    }

    printf("%d\n", result);

    return 0;
}