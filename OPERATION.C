#include <stdio.h>

int main() {
    int o,p;
    char c;

    printf("Enter two numbers: ");
    scanf("%d %d", &o, &p);

    printf("Enter arithmetic operator (+, -, *, /): ");
    scanf(" %c", &c);

    switch (c) {
        case '+':
            printf("Result: %d + %d = %d\n", o,p,o+p);
            break;
        case '-':
            printf("Result: %d - %d = %d\n", o,p,o-p);
            break;
        case '*':
            printf("Result: %d * %d = %d\n",o,p,o*p);
            break;
        case '/':
            if (p == 0) {
                printf("Error: division by zero\n");
            } else {
                printf("Result: %d / %d = %.2f\n", o,p, (float) o/p);
            }
            break;
        default:
            printf("Error:invalide operatot\n");
            break;
    }
            
   return 0;
}