#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d;
    float r1, r2, r3, r4;

    printf("Enter the value of a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);

    d = (b * b - 4 * a * c);

    if (d == 0)
    {
        printf("The roots are real and equal.\n");
        r1 = -b / (2.0 * a);
        r2 = -b / (2.0 * a);
        printf("The real equal roots are: %f and %f\n", r1, r2);
    }
    else if (d > 0)
    {
        printf("The roots are real and not equal.\n");
        r3 = (-b + sqrt(d)) / (2.0 * a);
        r4 = (-b - sqrt(d)) / (2.0 * a);
        printf("The real not equal roots are: %f and %f\n", r3, r4);
    }
    else
    {
        printf("The roots are imaginary.\n");
    }

    return 0;
}