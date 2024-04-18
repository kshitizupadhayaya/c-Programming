#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int a = num;
    int rev = 0;

    while (num != 0)
    {
        int rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    printf("The reverse is %d\n", rev);

    if (a == rev)
    {
        printf("It is a palindrome.\n");
    }
    else
    {
        printf("It is not a palindrome.\n");
    }

    return 0;
}