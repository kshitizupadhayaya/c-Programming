#include <stdio.h>

struct dob
{
    int year;
    int month;
    int day;
};

struct NestedStructure
{
    char name[20];
    int age;
    struct dob d;
} s;

int main()
{
    printf("Enter name, age, and date of birth (year month day): ");
    scanf("%s %d %d %d %d", s.name, &s.age, &s.d.year, &s.d.month, &s.d.day);

    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("Year of Birth: %d\n", s.d.year);
    printf("Month of Birth: %d\n", s.d.month);
    printf("Day of Birth: %d\n", s.d.day);

    return 0;
}