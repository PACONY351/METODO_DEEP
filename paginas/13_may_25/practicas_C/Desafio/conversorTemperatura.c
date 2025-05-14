#include <stdio.h>

void celsiusToFahrenheit();
void fahrenheitToCelsius();

int main() 
{
    int opcion;
    
    do {
        printf("\nCONVERSOR DE TEMPERATURA\n");
        printf("1. Celsius a Fahrenheit\n");
        printf("2. Fahrenheit a Celsius\n");
        printf("3. Salir\n");
        printf("Opción: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                celsiusToFahrenheit();
                break;
            case 2:
                fahrenheitToCelsius();
                break;
            case 3:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }
    } while(opcion != 3);

    return 0;
}

void celsiusToFahrenheit()
{
    float celsius;
    printf("\nIngrese la temperatura en Celsius: ");
    scanf("%f", &celsius);
    
    float fahrenheit = (celsius * 9/5) + 32;
    printf("%.2f°C = %.2f°F\n", celsius, fahrenheit);
}

void fahrenheitToCelsius()
{
    float fahrenheit;
    printf("\nIngrese la temperatura en Fahrenheit: ");
    scanf("%f", &fahrenheit);
    
    float celsius = (fahrenheit - 32) * 5/9;
    printf("%.2f°F = %.2f°C\n", fahrenheit, celsius);
}
