#include <stdio.h>
#include <stdlib.h>

    int main(){
        
        char input;
        double num1;
        double num2;
        double result;

    
        printf("\nWhat operator do you want to use?\n");
        printf("1. Plus (+)\n");
        printf("2. Substraction(-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Divide (/)\n");
        printf("Input here : ");
        scanf("%c", &input);
        
        system("cls");
        
        printf("Insert your first number : ");
        scanf("%lf", &num1);
        printf("Insert your second number : ");
        scanf("%lf", &num2);

        switch(input){
            
            case '1':

                result = num1 + num2;
                printf("The result is : %.2lf", result);
                break;
            
            case '2':

                result = num1 - num2;
                printf("The result is : %.2lf", result);
                break;

            case '3':
                result = num1 * num2;

                printf("The result is : %.2lf", result);
                break;

            case '4':

                result = num1 / num2;

                printf("The result is : %.2lf", result);
                break;

        }

    system("pause");

    return 0;
    }