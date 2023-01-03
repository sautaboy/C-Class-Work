// Wap To Check The User Input Is Even Or Odd
#include <stdio.h>
int main()
{
    int userNumber;
    printf("Enter a Number: ");
    scanf("%d", &userNumber);

    // Making Conditon
    if (userNumber % 2 == 0)
    {
        printf("The Number %d Is Even", userNumber);
    }
    else
    {
        printf("The Number %d Is Odd", userNumber);
    }
    return 0;
}