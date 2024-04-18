#include <stdio.h>

float area(int a)
{
    return (sqrt(3)/4)*(a*a);
}
int main()
{
    int a;
    printf("enter the side of equiletral triangle");
    scanf("%d",&a);
    float d=area(a);
    printf("ans =%f",d);
    return 0;
}