#include <stdio.h>
#include <string.h>
#include <ctype.h>

double number()
{
    double x = 0;
    printf("Podaj liczbe: ");
    while (scanf("%lf", &x) == 0)
    {
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF)
            ;
        printf("Podaj liczbe: ");
    }
    return x;
}

int main()
{

    double result = 0;
    char action; 
    int n = 1;

    while (n == 1)
    {

        printf("----------------\n");
        printf("|      %.6lf|\n", result);
        printf("----------------\n");
        printf("+,p,P ) Add\n");
        printf("-,m,M ) Subtract\n");
        printf("*,r,R ) Multiply\n");
        printf("/,d,D ) Divide\n");
        printf("=,u,U ) Set Value\n");
        printf(".,k,K ) Exit\n");
        printf("?");
        action = tolower(getchar());

        switch (action)
        {
        case '+':
        case 'p':
            result += number();
            break;
        case '-':
        case 'm':
            result -= number();
            break;
        case '=':
        case 'u':
            result = number();
            break;
        case '*':
        case 'r':
            result *= number();
            break;
        case '/':
        case 'd':
            result /= number();
            break;
        case '.':
        case 'k':
            printf("Exiting the program.");
            n = 0;
            break;
        default:
            printf("Invalid Choice\n");
            break;
        }

        while ((action = getchar()) != '\n' && action != EOF)
        {
            do
            {
                action = getchar();
            } while (action == '\n');
        }
    }
    return 0;
}
