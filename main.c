#include <stdio.h>

char c;

int num1, num2;

int add(int a, int b);

int sub(int a, int b);

int mul(int a, int b);

int div(int a, int b);

int main() {
    printf("Basic Calculator!\n");
    printf("Enter first number \n");
    scanf("%d", &num1);
    printf("Enter second number \n");
    scanf("%d", &num2);
    printf("[*] A - Addition \n");
    printf("[*] S - Subtraction \n");
    printf("[*] M - Multiplication \n");
    printf("[*] D - Division \n");
    printf("[*] Q - Quit \n");

    do {
        printf("Select the operation you want to perform!\n");
        scanf("%c", &c);
        if (c == 'A') {
            int addition = add(num1, num2);
            printf("Sum of the number is:%d", addition);
        } else if (c == 'S') {
            int subtraction = sub(num1, num2);
            printf("Sum of the number is:%d", subtraction);
        } else if (c == 'M') {
            int multiplication = mul(num1, num2);
            printf("Sum of the number is:%d", multiplication);
        } else if (c == 'D') {
            int division = div(num1, num2);
            printf("Sum of the number is:%d", division);
        }else{
            printf("Select a valid operation");
        }
    } while (c != 'Q');

    return 0;
}

int add(int a, int b) {
    int c = a + b;
    return c;
}

int sub(int a, int b) {
    int c = a - b;
    return c;
}

int mul(int a, int b) {
    int c = a * b;
    return c;
}

int div(int a, int b) {
    int c = a / b;
    return c;
}