#include <stdio.h>
int hcf(int n1,int n2)
{
    if(n2==0)
    {
        return n1;
    }
    else
    {
        return  hcf(n2,n1%n2);
    }
}
int lcm(int n1,int n2)
{
    return (n1*n2)/hcf(n1,n2);
}
int main()
{
    int n1,n2;
    printf("enter the value of n1 and n2");
    scanf("%d%d",&n1,&n2);
  printf("hcf is %d", hcf(n1,n2)); 
      printf("lcm is %d", lcm(n1,n2)); 
}