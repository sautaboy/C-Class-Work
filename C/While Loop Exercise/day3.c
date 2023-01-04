#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, sum = 0, r;
    printf("Enter the number: ");
    scanf("%d", &a);
    while (a > 0)
    {
        r = a % 10;
        // sum += r;
        a = a / 10;
        printf("%d", r);
    }

    return 0;
}
