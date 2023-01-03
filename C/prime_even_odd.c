// Wap a Program to check  That The Number is What (Prime,Odd or Even)

#include <stdio.h>
int main()
{
    // Making a Varibale for User Number
    int userNumber;
    printf("Enter a Number: "); // Asking User Too Enter The Number
    scanf("%d", &userNumber);   // storing the entered number to UserName Variable

    // Making Condion For Even Number
    if (userNumber % 2 == 0)
    {
        printf("The Number: %d Is Even", userNumber);
    }
    else
    {
        int c = 0; // this Variable is For increment
        // MAking Loop Ti check Teh Number is Prime Or Not
        // Note Prime Number is That Type of Number Which Is Only Divisible By 1 And ItSelf
        // 1 Is not Prime Number

        // for Loop
        for (int i = 1; i <= userNumber; i++)
        {
            if (userNumber % i == 0)
            {
                c++; // The Value Will Be Increase By 1
            }
        }
        if (c == 2)
        {
            printf("The Number: %d  is Fixed Prime", userNumber);
        }
        else
        // NOte That All Prime Number is Odd number
        {
            printf("The Number: %d is Odd", userNumber);
        }
    }
}