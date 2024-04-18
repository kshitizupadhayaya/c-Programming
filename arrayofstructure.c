#include <stdio.h>

struct arrayofstructure
{
    char name[50];
    int roll;
    int age;
}s;
int main()
{
    int i,n;
    printf("enter the size of array");
    scanf("%d",&n);
    //input
    printf("enter name age roll");
    for(i=0;i<=n;i++)
    {
        scanf("%s%d%d",s.name,&s.roll,&s.age);
    }

    //print
    printf("details");
      for(i=0;i<=n;i++)
    {
        
        printf("name =%s",s.name);
        printf("roll =%d",s.roll);
        printf("age =%d",s.age);
    }

}
