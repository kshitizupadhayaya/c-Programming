#include <stdio.h>
#define pie 3.145

int area(int r)
{
    return (pie*r*r);
}
float circumfrance(int r)
{
    return (2*pie*r);
}
int main()
{
    int r;
    printf("enter the radius of the circle");
    scanf("%d",&r);
    int areaa=area(r);
    int circum=circumfrance(r);
    printf("the area is given as %d",areaa);
      printf("the circumfrance is given as %d",circum);

}