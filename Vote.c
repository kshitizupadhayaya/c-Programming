#include <stdio.h>
int main()
{
    int age;
    printf("enter the age ");
    scanf("%d",&age);
    if(age<18)
    {
        printf("not elligble to vote ");
    }
    else{
        printf("elligble to vote ");
    }
return 0;
}