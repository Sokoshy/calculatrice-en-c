#include <stdio.h>
#include <math.h>

float addition(float * x, float * y) {
    return *x + *y;
}
float soustraction(float * x, float * y) {
    return *x - *y;
}
float multiply(float * x, float * y) {
    return *x * *y;
}
float division(float * x, float * y) {
    return *x / *y;
}
int modulo(float * x, float * y) {
    int int_x = (int)roundf(*x);
    int int_y = (int)roundf(*y);
    return int_x % int_y;
}

int main(void) {
    float number1;
    float number2;
    float result;
    int resul_int;
    _Bool continueProgram = 1;

    while(continueProgram){
        printf("\nMenu\n");
        printf("1. addition\n");
        printf("2. soustraction\n");
        printf("3. multiply\n");
        printf("4. division\n");
        printf("5. modulo\n");
        printf("6. exit a programme\n");

        int choice;
        printf("Enter a choice: ");
        scanf("%d", &choice);

        printf("\nNumber one: ");
        scanf("%f", &number1);
        printf("\nNumber two: ");
        scanf("%f", &number2);

        switch (choice) {
            case 1:
                result = addition(&number1, &number2);
                printf("%.2f + %.2f = %.2f\n", number1, number2, result);
                break;
            case 2: 
                result = soustraction(&number1, &number2);
                printf("%.2f - %.2f = %.2f\n", number1, number2, result);
                break;
            case 3: 
                result = multiply(&number1, &number2);
                printf("%.2f * %.2f = %.2f\n", number1, number2, result);
                break;
            case 4:
                if (number2 == 0) {
                    printf("you can't divide by 0");
                    break;
                }
                result = division(&number1, &number2);
                printf("%.2f / %.2f = %.2f\n", number1, number2, result);
                break;
            case 5:
                if (number2 == 0) {
                    printf("you can't divide by 0");
                    break;
                }
                resul_int = modulo( &number1, &number2);
                printf("%d %% %d = %d\n", (int)roundf(number1), (int)roundf(number2), resul_int);
                break;
            case 6:
                printf("\nBye!");
                continueProgram = 0;
                break;
            default:
                    printf("Choix invalide, veuillez réessayer.\n");
                    break;
        }
    }
    return 0;    
}

