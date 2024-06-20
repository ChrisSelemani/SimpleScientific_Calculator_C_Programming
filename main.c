#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1, num2, num3, num4, num5, num6, result;
    int option;
    /*double double1;
    char dec 'd';
    char whole 'w';*/
    //printf("Enter 'd' for Decimal Numbers\nAnd 'w' for Whole Numbers: \n\n");


    //THESE ARE MY PROMPTS

    printf("Welcome to Simple Scientific Calculator\n\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square Roots\n");
    printf("6. Power\n");

    //MY USER INPUT

    printf("Enter a value to select an operation: \n");
    scanf("%d", &option);

    if (option==1)
    {
    printf("  Addition \n\n");
    printf("  Enter first number:   ");
    scanf("%d", &num1);
    printf("  Enter second number:  ");
    scanf("%d", &num2);

    result = num1 + num2;
    printf("  Result:\t\t%d\n", result);
    }
    else if(option==2)
    {
    printf("  Subtraction \n\n");
    printf("  Enter first number:   ");
    scanf("%d", &num1);
    printf("  Enter second number:  ");
    scanf("%d", &num2);

    result = num1 - num2;
    printf("  Result:\t\t%d\n", result);
    }
    else if(option == 3)
    {
    printf("  Multiplication \n\n");
    printf("  Enter first number:   ");
    scanf("%d", &num1);
    printf("  Enter second number:  ");
    scanf("%d", &num2);

    result = num1 * num2;
    printf("  Result:\t\t%d\n", result);
    }
    else if(option == 4)
    {
    printf("  Division \n\n");
    printf("  Enter first number:   ");
    scanf("%d", &num1);
    printf("  Enter second number:  ");
    scanf("%d", &num2);

    result = num1 / num2;
    printf("  Result:\t\t%d\n", result);
    }
    else if(option == 5)
    {
    printf("  Square Roots \n\n");
    printf("  Enter the number you want to square root:   ");
    scanf("%d", &num3);

    result = sqrt(num3);
    printf("  Result:\t\t%d\n", result);
    }
    else if(option == 6)
    {
    printf("  Power \n\n");
    printf("  Enter your base number:   ");
    scanf("%d", &num4);
    printf("  Enter your power number:  ");
    scanf("%d", &num5);

    result = pow(num4, num5);
    printf("  Result:\t\t%d\n", result);
    }
    else
    {
        printf("YOU HAVE DONE A WRONG ENTRY! \n\n");
    }

        main();
        return 0;
}
