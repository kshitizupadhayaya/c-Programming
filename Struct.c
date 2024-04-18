#include <stdio.h>

struct st {
    char name[50];
    int roll;
};

int main() {
    struct st s;

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter roll: ");
    scanf("%d", &s.roll);

    printf("Name: %s\n", s.name);
    printf("Roll: %d\n", s.roll);

    return 0;
} 