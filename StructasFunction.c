#include <stdio.h>

struct Point {
    int x;
    int y;
};

struct Point multiplyCoordinates(struct Point p) {
    struct Point result;
    result.x = p.x * p.x;
    result.y = p.y * p.y;
    return result;
}

int main() {
    struct Point input;
    struct Point output;

    printf("Enter the x-coordinate: ");
    scanf("%d", &input.x);
    printf("Enter the y-coordinate: ");
    scanf("%d", &input.y);

    output = multiplyCoordinates(input);

    printf("Squared coordinates: (%d, %d)\n", output.x, output.y);

    return 0;
}