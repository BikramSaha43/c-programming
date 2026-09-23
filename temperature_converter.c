#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    char n;
    printf("Enter c for converting celsius to fahrenheit: \nEnter f for converting fahrenheit to celsius: \n");
    scanf("%c", &n);

    if (n == 'c')
    {
        printf("Enter the number you want to convert to fahrenheit:\n");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9.0 / 5.0) + 32;
        printf("The temperature after conversion is: %.2f", fahrenheit);
    }
    else if (n == 'f')
    {
        printf("Enter the number you want to convert to celsius:\n");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5.0 / 9.0;
        printf("The temperature after conversion is: %.2f", celsius);
    }
    else
    {
        printf("Please enter c or f for the conversion");
    }
    return 0;
}