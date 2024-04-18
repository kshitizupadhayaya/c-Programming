#include <stdio.h>
/*

    swapping USING TEMP VARIABLE

int
main ()
{
  int temp;
  int a = 10;
  int b = 20;
  printf ("  before swippinag the value of a and b is %d  AND  %d", a, b);
  temp = a;
  a = b;
  b = temp;
  printf ("after swapping ");
  printf ("a=%d ", a);
  printf ("b= %d ", b);

}*/




// SWAPPING WITHOUT USING TEMP VARIABLE
int main()
{
int c;
  int a = 10;
  int b = 20;
  printf ("  before swippinag the value of a and b is %d  AND  %d", a, b);
 c= a+b;
 a=c-a;
 b=c-b;
 printf ("after swapping ");
  printf ("a=%d ", a);
  printf ("b= %d ", b);
}