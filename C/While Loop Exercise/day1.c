// write a program that check the user to input posotive number
// if user input negative number looop it again using while loop

#include <stdio.h>
int main()
{
    int userNumber;
    printf("Enter a Positive Number:\n");
    scanf("%d", &userNumber);
    while (userNumber < 0) // if the codition becomes true loop will never end
    {
        printf("Enter a Positive Number:\n");
        scanf("%d", &userNumber);
    }
    printf("The Postivite Number is :%d", userNumber); // this will execute after the while loop codition is false
    return 0;
}