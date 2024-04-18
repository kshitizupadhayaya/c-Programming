#include <stdio.h>
struct dateofbirth
{
    int month;
    int day;
    int year;

};
struct  Employee
{
  int id;
  char name;
  char Address;
  char deapartment;
  struct dateofbirth d;
};

int main()
{
struct  Employee e;

int n;
printf("enter n");
scanf("%d",&n);
for(int i=0;i<=n;i++)
{

    scanf("%d%c%c%c%d%d%d",&e[i].id,&e[i].name,&e[i].Address,&e[i].deapartment,&e[i].d.month,&e[i].d.day,&e[i].d.year);
}
printf("to find the employee whose department is in sales ");

for(int i=0;i<=n;i++)
{
    if(strcmp(e[i].department,"sales")==0)
    {
            scanf("%d%c%c%c%d%d%d",e[i].id,e[i].name,e[i].Address,e[i].deapartment,e[i].d.month,e[i].d.day,e[i].d.year);
     
    }
}


}