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

    double result = 0; // wynik dzialan
    char action;       // zmienna przyjmujaca funkcje programu
    int n = 1;         // zmienna do zamkniecia programu

    // interfejs uzytkownika

    while (n == 1)
    {

        printf("----------------\n");
        printf("|      %.6lf|\n", result);
        printf("----------------\n");
        printf("+,p,P ) Plus\n");
        printf("-,m,M ) Minus\n");
        printf("*,r,R ) Razy\n");
        printf("/,d,D ) Dziel\n");
        printf("=,u,U ) Ustaw\n");
        printf(".,k,K ) Koniec\n");
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
            printf("Koncze Dzialanie Programu.");
            n = 0;
            break;
        default:
            printf("Zly Wybor\n");
            break;
        }
        // wyczyszczenie bufora w zmiennej Action z pozostalych liter

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