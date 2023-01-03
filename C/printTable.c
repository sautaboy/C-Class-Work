// Wap to Print The Table od User Choice
#include <stdio.h>
int main()
{
    int userNumber; // this is a variable Name
    printf("Enter a Number That Prints The Table For You :\n");
    scanf("%d", &userNumber);

    // Making Loop For Fast Work
    for (int i = 1; i <= 10; i++) // We Can Declare i here Too
    {
        printf("%d * %d = %d\n", userNumber, i, userNumber * i);
    }
    return 0;
}