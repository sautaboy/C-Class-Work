// Wap to Check The USer Number is Prime Or Not
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a Number: ");
    scanf("%d", &a);
    int i;
    int c = 0;
    for (i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        printf("The Number is Prime");
    }
    else
    {
        printf("The Number is Not Prime");
    }
    return 0;
}
