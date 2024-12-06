#include <stdio.h>

int main() {
    int a, b, result = 0;
    char op;
    
    printf("Enter an expression (e.g., 3 + 4): ");
    if (scanf("%d %c %d", &a, &op, &b) != 3) {
        printf("Invalid input\n");
        return 1;
    }

    switch (op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if (b == 0) {
                printf("Division by zero error\n");
                return 1;
            }
            result = a / b;
            break;
        default:
            printf("Invalid operator\n");
            return 1;
    }

    printf("Result: %d\n", result);

    return 0;
}