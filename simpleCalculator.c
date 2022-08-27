#include <stdio.h>

int main()
{
    char operator;
    double num01;
    double num02;
    double result;

    printf("\nEnter an operator (+ - * /): ");
    scanf("%c", &operator);

    printf("\nEnter a number: ");
    scanf("%lf", &num01);

    printf("\nEnter another number: ");
    scanf("%lf", &num02);
    getchar();

    switch (operator)
    {
    case '+':
        result = num01 + num02;
        printf("\nResult: %.2lf", result);
        break;
    case '-':
        result = num01 - num02;
        printf("\nResult: %.2lf", result);
        break;
    case '*':
        result = num01 * num02;
        printf("\nResult: %.2lf", result);
        break;
    case '/':
        result = num01 / num02;
        printf("\nResult: %.2lf", result);
        break;
    default:
        printf("%c is not valid", operator);
        break;
    }

    printf("\n\nPress ENTER key to Continue\n");
    getchar();

    return 0;
}