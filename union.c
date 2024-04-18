#include <stdio.h>
#include <string.h>

union uio {
    char name[50];
    int roll;
};

int main() {
    union uio s;
    strcpy(s.name, "v");

    printf("Enter roll: ");
    scanf("%d", &s.roll);

    printf("Name: %s\n", s.name);
    printf("Roll: %d\n", s.roll);

    return 0;
}