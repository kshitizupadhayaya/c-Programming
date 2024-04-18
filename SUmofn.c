#include <stdio.h>
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    else 
    {
        return n+sum(n-1);
    }
}
int fact(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else 
    {
        return n*fact(n-1);
    }
}
int main()
{
    int num;
    printf("enter the num");
    scanf("%d",&num);
    for(int i=0;i<=num;i++)
    {
  printf("%d ",i);
    }
    int ans =sum(num);
    printf("the sum is %d",ans);
    int factorial=fact(num);
    printf("the factorail is %d",factorial);
    return 0;

}