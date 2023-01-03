// Wap a program to input the two number and  check if user Press
//  1 for addition
// 2 for multiplication
// 3 for division
// 4 for reminder
// 0 for exit of the loop

#include <stdio.h>
int main()
{
    while (1)
    {
        int yourChoosedNumber;
        // printf("Enter 1 For Sub\n Enter 2 For Multiply\n ")
        // printf("Enter 1 For Sum:\n");
        // printf("Enter 2 For Subtraction:\n");
        // printf("Enter 3 For Multiply:\n");
        // printf("Enter 4 For Division:\n");
        // printf("Enter 5 For Reminder:\n");
        printf("Which Arithmatic Operation You Want\n");
        scanf("%d", &yourChoosedNumber);

        if (yourChoosedNumber == 0 || yourChoosedNumber == isNaN(yourChoosedNumber))
        {
            break;
        }

        int firstNumber, secondNumber;
        printf("Enter a First Number\n");
        scanf("%d", &firstNumber);
        printf("Enter a Second Number");
        scanf("%d", &secondNumber);
        int result;
        if (yourChoosedNumber == 1)
        {
            // result = firstNumber + secondNumber;
            printf("Sum Of Two Number is :%d + %d = %d", firstNumber, secondNumber, firstNumber + secondNumber);
            // printf("%d", result);
        }
        else
        {
            if (yourChoosedNumber == 2)
            {
                printf("Subtraction Of Two Number is :%d - %d = %d", firstNumber, secondNumber, firstNumber - secondNumber);
            }
            else
            {
                if (yourChoosedNumber == 3)
                {
                    printf("Multiplication Of Two Number is :%d * %d = %d", firstNumber, secondNumber, firstNumber * secondNumber);
                }
                else
                {
                    if (yourChoosedNumber == 4)
                    {
                        printf("Division Of Two Number is :%d / %d = %d", firstNumber, secondNumber, firstNumber / secondNumber);
                    }
                    else
                    {
                        if (yourChoosedNumber == 5)
                        {
                            printf("Reminder Of Two Number is :%d + %d = %d", firstNumber, secondNumber, firstNumber % secondNumber);
                        }
                        else
                        {
                            break;
                        }
                    }
                }
            }
        }
    }

    return 0;
}