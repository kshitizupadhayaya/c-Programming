#include <stdio.h>
int hcf(int n1,int n2)
{
    if(n2!=0)
    {
         return hcf(n2,n1%n2);
    }
    else{

       return n1;
    }
}
int lcm(int n1,int n2)
{
    return (n1*n2)/hcf(n1,n2);
}
int main()
{
    int a,b;
    printf("enter a and b");
     scanf("%d%d",&a,&b);
     int h=hcf(a,b);
     int l=lcm(a,b);
     printf("hcf=%d",h);
       printf("lcm=%d",l);
return 0;
}